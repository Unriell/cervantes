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

#include "ViewerPdfPageHandlerLandscape.h"

#include <QDebug>

ViewerPdfPageHandlerLandscape::ViewerPdfPageHandlerLandscape(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    connect(zoomMinusBtn,           SIGNAL(clicked()), this, SIGNAL(zoomMinusBtnClicked     ()));
    connect(zoomPlusBtn,            SIGNAL(clicked()), this, SIGNAL(zoomPlusBtnClicked      ()));
    connect(fullScreenBtn,          SIGNAL(clicked()), this, SIGNAL(fullScreenBtnClicked    ()));
    connect(widthAdjustBtn,         SIGNAL(clicked()), this, SIGNAL(widthAdjustBtnClicked   ()));
    connect(heightAdjustBtn,        SIGNAL(clicked()), this, SIGNAL(heightAdjustBtnClicked  ()));
    connect(landscapeModeBtn,       SIGNAL(clicked()), this, SIGNAL(landscapeModeBtnClicked ()));
    connect(closeBtn,               SIGNAL(clicked()), this, SIGNAL(closeBtnClicked         ()));
}

ViewerPdfPageHandlerLandscape::~ViewerPdfPageHandlerLandscape()
{
    qDebug() << Q_FUNC_INFO;
}
