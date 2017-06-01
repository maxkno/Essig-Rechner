#include "mainwindow.h"
#include "help.h"
#include "impressum.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

double getwaterdensity(){
    return 1.00;
}

double dichte(double konz){
    return(0.00126 * konz + getwaterdensity());
}

void MainWindow::on_go_clicked(){

    int konzin = ui->konzin->value();
    int konzout = ui->konzout->value();
    double menge = ui->mengeout->value();

    bool u = (0 == ui->unit->currentIndex());

    if (konzin<konzout){
        ui->error_label->setText("Gelieferte Konzentration muss groesser als die gewuenschte Konzentration sein!!");
        ui->essigout_liter->setText("");
        ui->essigout_kg->setText("");
        ui->wasserout_liter->setText("");
        ui->wasserout_kg->setText("");
    }
    else {

        ui->error_label->setText("");

        menge = u ? menge : menge/dichte(konzout);
        //Dichte 0.00126 * konz + 0.9992
        double essigpur = menge * konzout/100.0;
        double mengeessig = essigpur /(konzin/100.0);
        double mengewasser = menge - mengeessig;

        double mengeessigkg = mengeessig * dichte(konzin);
        double mengewasserkg = getwaterdensity() * mengewasser;

        QString essliter = QString::number(((int)(mengeessig*10) )/10.);
        QString wassliter = QString::number(((int)(mengewasser*10) )/10.);
        QString wasskg = QString::number(((int)(mengewasserkg*10) )/10.);
        QString esskg = QString::number(((int)(mengeessigkg*10) )/10.);

        ui->essigout_liter->setText(essliter+" Liter");
        ui->essigout_kg->setText(esskg+" kg");

        ui->wasserout_liter->setText(wassliter+" Liter");
        ui->wasserout_kg->setText(wasskg+" kg");
    }

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionHelp_triggered()
{
    Help *h = new Help;
    h->show();
}

void MainWindow::on_actionImpressum_triggered()
{
    Impressum *i = new Impressum;
    i->show();
}
