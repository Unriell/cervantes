/*************************************************************************

bq Cervantes e-book reader application
Copyright (C) 2011-2013  Mundoreader, S.L

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the source code.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

#include "ScreenImageManager.h"

#include "QBook.h"
#include "Screen.h"

#include <QPainter>
#include <QPaintEvent>

#include <QDebug>

ScreenImageManager::ScreenImageManager() : QWidget(0)
{}

ScreenImageManager::~ScreenImageManager()
{
}

bool ScreenImageManager::setImage( const QString& path )
{
    return m_pixmap.load(path);
}

void ScreenImageManager::paintEvent(QPaintEvent* event)
{
    qDebug() << "ScreenImageManager paintEvent *******************";
    QPainter painter(this);
    painter.setBackgroundMode(Qt::OpaqueMode);
    painter.fillRect(0, 0, Screen::getInstance()->screenWidth(), Screen::getInstance()->screenHeight(), Qt::white);

    painter.drawPixmap(0, 0, m_pixmap);

    event->accept();
}


