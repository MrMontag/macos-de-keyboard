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
#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QPlainTextEdit>

class MyTextEdit
        : public QPlainTextEdit
{
    Q_OBJECT

public:
    MyTextEdit(QWidget *parent = nullptr);

    virtual void inputMethodEvent(QInputMethodEvent *event) override;

signals:
    void debugText(const QString&);

protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
};

#endif // MYTEXTEDIT_H
