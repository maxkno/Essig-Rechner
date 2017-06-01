#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private slots:
    void on_go_clicked();
    void on_actionHelp_triggered();
    void on_actionImpressum_triggered();
};

#endif // MAINWINDOW_H
