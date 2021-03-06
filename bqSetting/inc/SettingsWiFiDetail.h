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

#ifndef SETTINGSWIFIDETAIL_H
#define SETTINGSWIFIDETAIL_H

#include "QBookForm.h"
#include "Network.h"
#include "ui_SettingsWiFiDetail.h"

class SettingsWiFiDetail : public QBookForm, protected Ui::SettingsWiFiDetail
{
    Q_OBJECT

public:

                                SettingsWiFiDetail                  (QString path, QBookForm *parent = 0);
    virtual                     ~SettingsWiFiDetail                 ();

public slots:

    void                        closeDialog                         ();
    void                        disconnectWifi                      ();
    void                        forgetWifi                          ();
    void                        populateProperties                  (Network n);

signals:

    void                        disconnectWifiSignal                (QString);
    void                        connectWifiSignal                   (QString);
    void                        forgetWifiSignal                    (QString);

private:

    QString                     m_path;

private slots:
    void                        editWifi();
    void                        update();

protected:

    void                        activateForm                        ();
    void                        deactivateForm                      ();

    /* http://qt-project.org/forums/viewthread/7340 */
    void                        paintEvent                          (QPaintEvent *);

};

#endif // SETTINGSWIFIDETAIL_H
