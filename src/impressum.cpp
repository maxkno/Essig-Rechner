#include "impressum.h"
#include "ui_impressum.h"

Impressum::Impressum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Impressum)
{
    ui->setupUi(this);
}

Impressum::~Impressum()
{
    delete ui;
}
