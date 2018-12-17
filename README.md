# macos-de-keyboard
Test project for a macOS Mojave related QPlainTextEdit issue with accented charaters.

# Description

If a QPlainTextEdit is used on macOS and the accented charater is typed then QPlainTextEdit blocks user actions like text seletion. This behaviour occurs when the accent charater is pressed and a user tries to select text, like he wants to abort the writing of a composed charater. With Qt 5.11.2, 5.11.3 and 5.12.0 the QPlainTextEdit blocks text selection if the first half of a composed charater is written.

**Steps to reproduce the isse**
1. Make sure you have a German or French keyboard layout configured
1. Write some random text, like "asdfkasklfhkashgkg"
1. Go to a new line
1. Type ```´```, like you would type ```á```
1. Do not press ```a```!
1. Try to select the random with the mouse

Result: The text selection on macOS is not possible, but on Windows 10 it works. Other apps like RStudio or the native TextEdit on macOS Mojave don't seam to have that issue.
