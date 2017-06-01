/********************************************************************************
** Form generated from reading UI file 'impressum.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPRESSUM_H
#define UI_IMPRESSUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Impressum
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *quitButton;

    void setupUi(QWidget *Impressum)
    {
        if (Impressum->objectName().isEmpty())
            Impressum->setObjectName(QStringLiteral("Impressum"));
        Impressum->resize(400, 389);
        Impressum->setMinimumSize(QSize(400, 389));
        Impressum->setMaximumSize(QSize(400, 389));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../home/max.knobbe/Essig/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Impressum->setWindowIcon(icon);
        label = new QLabel(Impressum);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 41));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(Impressum);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 381, 41));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(Impressum);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 381, 241));
        QFont font;
        font.setPointSize(8);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3->setWordWrap(true);
        label_4 = new QLabel(Impressum);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 300, 381, 41));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4->setWordWrap(true);
        quitButton = new QPushButton(Impressum);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(150, 350, 83, 23));

        retranslateUi(Impressum);
        QObject::connect(quitButton, SIGNAL(clicked()), Impressum, SLOT(close()));

        QMetaObject::connectSlotsByName(Impressum);
    } // setupUi

    void retranslateUi(QWidget *Impressum)
    {
        Impressum->setWindowTitle(QApplication::translate("Impressum", "Impressum", 0));
        label->setText(QApplication::translate("Impressum", "Entwickler: N. Baberuxki, A. Bensberg, M. Knobbe", 0));
        label_2->setText(QApplication::translate("Impressum", "Essig-Rechner (c) 2017", 0));
        label_3->setText(QApplication::translate("Impressum", "This program is free software: you can redistribute it and/or modify\n"
"it under the terms of the GNU General Public License as published by\n"
"the Free Software Foundation, either version 3 of the License, or\n"
"(at your option) any later version.\n"
"\n"
"This program is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"GNU General Public License for more details.\n"
"\n"
"You should have received a copy of the GNU General Public License\n"
"along with this program.  If not, see <http://www.gnu.org/licenses/>", 0));
        label_4->setText(QApplication::translate("Impressum", "Fehlerberichte an: Essig-Rechner@web.de", 0));
        quitButton->setText(QApplication::translate("Impressum", "Schlie\303\237en", 0));
    } // retranslateUi

};

namespace Ui {
    class Impressum: public Ui_Impressum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPRESSUM_H
