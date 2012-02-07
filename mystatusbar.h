/*
*    Unfuddle Tracker is a time tracking tool for Unfuddle service.
*    Copyright (C) 2012	Viatcheslav Gachkaylo <vgachkaylo@crystalnix.com>
*
*    This file is part of Unfuddle Tracker.
*
*    Unfuddle Tracker is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    Unfuddle Tracker is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with Unfuddle Tracker.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MYSTATUSBAR_H
#define MYSTATUSBAR_H

#include <QStatusBar>

class QAnimationLabel;
class QLabel;

class MyStatusBar : public QStatusBar
{
    Q_OBJECT
public:
    explicit MyStatusBar(QWidget *parent = 0);

    enum Status {
        STATUS_DEFAULT,
        STATUS_ERROR,
        STATUS_SPINNER,
    };

    void setStatus(const QString &message, Status s = STATUS_DEFAULT);
signals:

public slots:
private:
    QAnimationLabel *spinner;
    QLabel *errorIcon;
    QLabel *statusMsg;
};

#endif // MYSTATUSBAR_H
