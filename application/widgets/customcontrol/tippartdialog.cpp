/*
* Copyright (C) 2019 ~ 2020 Deepin Technology Co., Ltd.
*
* Author:     zhangkai <zhangkai@uniontech.com>
* Maintainer: zhangkai <zhangkai@uniontech.com>
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "tippartdialog.h"
#include <QDebug>
TipPartDialog::TipPartDialog(QWidget *parent) : TipDialog(parent)
{
    this->titleLable->setText(tr("XXX system space is in operation"));
    this->tipLabel->setText(tr("The disk is in use. Partition the space in the disk.\n Click OK to confirm the operation"));
    this->mountLabel->hide();
    this->nameLineEdit->hide();
    this->typeCombox->hide();
    QList<QAbstractButton *> list3 = getButtons();
    for (int i = 0; i < list3.size(); i++) {
        connect(list3.at(i), &QAbstractButton::clicked, this, [ = ] {
            if (list3.at(i)->text() == "Ok")
            {
                qDebug() << tr("XXX system space is in operation");
            }
        });

    }
}