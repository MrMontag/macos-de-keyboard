/*
 * This file is part of the macos-de-keyboard test project.
 *
 * Copyright (c) 2018 Alexander Fust
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "mytextedit.h"

#include <QDebug>

MyTextEdit::MyTextEdit(QWidget *parent)
    : QPlainTextEdit(parent)
{
    setAttribute(Qt::WA_InputMethodEnabled);
}

void MyTextEdit::inputMethodEvent(QInputMethodEvent *event)
{
    emit debugText("start");
    emit debugText(event->commitString());
    emit debugText("end");
}

void MyTextEdit::keyPressEvent(QKeyEvent *event)
{
    QPlainTextEdit::keyPressEvent(event);
}
