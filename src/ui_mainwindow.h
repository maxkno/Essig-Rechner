/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionImpressum;
    QWidget *centralWidget;
    QSpinBox *konzin;
    QLabel *konzout_label;
    QComboBox *unit;
    QLabel *mengeout_label;
    QLabel *konzin_label;
    QPushButton *go;
    QLabel *out_label;
    QLabel *essigout_label;
    QLabel *wasserout_label_2;
    QLabel *essigout_liter;
    QLabel *wasserout_liter;
    QLabel *essigout_label_ent;
    QLabel *essigout_label_ent_2;
    QLabel *essigout_kg;
    QLabel *wasserout_kg;
    QLabel *error_label;
    QSpinBox *mengeout;
    QSpinBox *konzout;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *menuInfo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(431, 346);
        MainWindow->setMinimumSize(QSize(431, 346));
        MainWindow->setMaximumSize(QSize(431, 346));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../home/max.knobbe/Essig/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionImpressum = new QAction(MainWindow);
        actionImpressum->setObjectName(QStringLiteral("actionImpressum"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        konzin = new QSpinBox(centralWidget);
        konzin->setObjectName(QStringLiteral("konzin"));
        konzin->setGeometry(QRect(280, 20, 61, 21));
        QFont font;
        font.setPointSize(11);
        konzin->setFont(font);
        konzin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        konzin->setMaximum(100);
        konzin->setValue(24);
        konzout_label = new QLabel(centralWidget);
        konzout_label->setObjectName(QStringLiteral("konzout_label"));
        konzout_label->setGeometry(QRect(10, 50, 241, 16));
        konzout_label->setFont(font);
        konzout_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        unit = new QComboBox(centralWidget);
        unit->setObjectName(QStringLiteral("unit"));
        unit->setGeometry(QRect(350, 100, 71, 21));
        unit->setFont(font);
        unit->setModelColumn(0);
        mengeout_label = new QLabel(centralWidget);
        mengeout_label->setObjectName(QStringLiteral("mengeout_label"));
        mengeout_label->setGeometry(QRect(10, 100, 181, 21));
        mengeout_label->setFont(font);
        mengeout_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        konzin_label = new QLabel(centralWidget);
        konzin_label->setObjectName(QStringLiteral("konzin_label"));
        konzin_label->setGeometry(QRect(10, 20, 221, 16));
        konzin_label->setFont(font);
        konzin_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        go = new QPushButton(centralWidget);
        go->setObjectName(QStringLiteral("go"));
        go->setGeometry(QRect(160, 140, 111, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        go->setFont(font1);
        go->setStyleSheet(QStringLiteral("background-color: rgb(136, 173, 20)"));
        go->setAutoDefault(false);
        out_label = new QLabel(centralWidget);
        out_label->setObjectName(QStringLiteral("out_label"));
        out_label->setGeometry(QRect(10, 200, 181, 21));
        out_label->setFont(font);
        out_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        essigout_label = new QLabel(centralWidget);
        essigout_label->setObjectName(QStringLiteral("essigout_label"));
        essigout_label->setGeometry(QRect(30, 230, 71, 21));
        essigout_label->setFont(font);
        essigout_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        wasserout_label_2 = new QLabel(centralWidget);
        wasserout_label_2->setObjectName(QStringLiteral("wasserout_label_2"));
        wasserout_label_2->setGeometry(QRect(30, 260, 71, 21));
        wasserout_label_2->setFont(font);
        wasserout_label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        essigout_liter = new QLabel(centralWidget);
        essigout_liter->setObjectName(QStringLiteral("essigout_liter"));
        essigout_liter->setGeometry(QRect(110, 230, 121, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        essigout_liter->setFont(font2);
        essigout_liter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        wasserout_liter = new QLabel(centralWidget);
        wasserout_liter->setObjectName(QStringLiteral("wasserout_liter"));
        wasserout_liter->setGeometry(QRect(110, 260, 121, 21));
        wasserout_liter->setFont(font2);
        wasserout_liter->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        essigout_label_ent = new QLabel(centralWidget);
        essigout_label_ent->setObjectName(QStringLiteral("essigout_label_ent"));
        essigout_label_ent->setGeometry(QRect(235, 230, 71, 21));
        QFont font3;
        font3.setPointSize(9);
        essigout_label_ent->setFont(font3);
        essigout_label_ent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        essigout_label_ent_2 = new QLabel(centralWidget);
        essigout_label_ent_2->setObjectName(QStringLiteral("essigout_label_ent_2"));
        essigout_label_ent_2->setGeometry(QRect(235, 260, 71, 21));
        essigout_label_ent_2->setFont(font3);
        essigout_label_ent_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        essigout_kg = new QLabel(centralWidget);
        essigout_kg->setObjectName(QStringLiteral("essigout_kg"));
        essigout_kg->setGeometry(QRect(310, 230, 101, 21));
        essigout_kg->setFont(font2);
        essigout_kg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        wasserout_kg = new QLabel(centralWidget);
        wasserout_kg->setObjectName(QStringLiteral("wasserout_kg"));
        wasserout_kg->setGeometry(QRect(310, 260, 101, 21));
        wasserout_kg->setFont(font2);
        wasserout_kg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        error_label = new QLabel(centralWidget);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setEnabled(false);
        error_label->setGeometry(QRect(10, 60, 391, 51));
        QFont font4;
        font4.setPointSize(8);
        error_label->setFont(font4);
        error_label->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41);"));
        error_label->setInputMethodHints(Qt::ImhNone);
        error_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        error_label->setWordWrap(true);
        mengeout = new QSpinBox(centralWidget);
        mengeout->setObjectName(QStringLiteral("mengeout"));
        mengeout->setGeometry(QRect(240, 100, 101, 21));
        mengeout->setFont(font);
        mengeout->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mengeout->setMaximum(1000000);
        mengeout->setValue(100);
        konzout = new QSpinBox(centralWidget);
        konzout->setObjectName(QStringLiteral("konzout"));
        konzout->setGeometry(QRect(280, 50, 61, 21));
        konzout->setFont(font);
        konzout->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        konzout->setMaximum(100);
        konzout->setValue(10);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 180, 421, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 431, 20));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QStringLiteral("menuInfo"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(false);
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(konzin, unit);
        QWidget::setTabOrder(unit, go);

        menuBar->addAction(menuInfo->menuAction());
        menuInfo->addAction(actionHelp);
        menuInfo->addAction(actionImpressum);

        retranslateUi(MainWindow);

        go->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Essig-Rechner", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "&Hilfe", 0));
        actionImpressum->setText(QApplication::translate("MainWindow", "&Impressum", 0));
        konzout_label->setText(QApplication::translate("MainWindow", "Gew\303\274nschte Konzentration in %:", 0));
        unit->clear();
        unit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Liter", 0)
         << QApplication::translate("MainWindow", "kg", 0)
        );
        mengeout_label->setText(QApplication::translate("MainWindow", "Gew\303\274nschte Menge:", 0));
        konzin_label->setText(QApplication::translate("MainWindow", "Gelieferte Konzentration in %:", 0));
        go->setText(QApplication::translate("MainWindow", "Berechnen", 0));
        out_label->setText(QApplication::translate("MainWindow", "Berechnete Mengen:", 0));
        essigout_label->setText(QApplication::translate("MainWindow", "Essig:", 0));
        wasserout_label_2->setText(QApplication::translate("MainWindow", "Wasser:", 0));
        essigout_liter->setText(QString());
        wasserout_liter->setText(QString());
        essigout_label_ent->setText(QApplication::translate("MainWindow", "entspricht", 0));
        essigout_label_ent_2->setText(QApplication::translate("MainWindow", "entspricht", 0));
        essigout_kg->setText(QString());
        wasserout_kg->setText(QString());
        error_label->setText(QString());
        menuInfo->setTitle(QApplication::translate("MainWindow", "&Info", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
