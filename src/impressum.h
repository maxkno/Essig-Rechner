#ifndef IMPRESSUM_H
#define IMPRESSUM_H

#include <QWidget>

namespace Ui {
class Impressum;
}

class Impressum : public QWidget
{
    Q_OBJECT

public:
    explicit Impressum(QWidget *parent = 0);
    ~Impressum();

private:
    Ui::Impressum *ui;
};

#endif // IMPRESSUM_H
