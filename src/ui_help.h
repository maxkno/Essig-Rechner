/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *label;
    QPushButton *quitButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(362, 308);
        Help->setMinimumSize(QSize(362, 308));
        Help->setMaximumSize(QSize(362, 308));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../home/max.knobbe/Essig/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setWindowIcon(icon);
        label = new QLabel(Help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 321, 71));
        QFont font;
        font.setUnderline(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        quitButton = new QPushButton(Help);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(140, 270, 83, 23));
        label_2 = new QLabel(Help);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 321, 51));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_3 = new QLabel(Help);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 321, 51));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_4 = new QLabel(Help);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 321, 61));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        retranslateUi(Help);
        QObject::connect(quitButton, SIGNAL(clicked()), Help, SLOT(close()));

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Hilfe", 0));
        label->setText(QApplication::translate("Help", "Programm zum Berechnen von Mischungsanteile von Wasser und hochprozentigem Essig zur Verd\303\274nnung auf vorgegebene Essigkonzentration", 0));
        quitButton->setText(QApplication::translate("Help", "Schlie\303\237en", 0));
        label_2->setText(QApplication::translate("Help", "Bei \"Gelieferter Konzentration in %\" ist die Konzentration des zu verd\303\274nnenen Essigs einzugeben.", 0));
        label_3->setText(QApplication::translate("Help", "Bei \"Gew\303\274nschter Konzentration in %\" ist die Konzentration des ben\303\266tigten Essigs einzugeben. ", 0));
        label_4->setText(QApplication::translate("Help", "Bei \"Gew\303\274nschte Menge\" ist die gew\303\274nschte Menge des verd\303\274nnten Essigs anzugeben. Dabei kann die Menge in Litern (Liter) oder Kilogramm (kg) angegeben werden.", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
