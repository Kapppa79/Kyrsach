#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <gamewindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Booba_clicked();

    void on_Jaga_clicked();

    void on_Sound_clicked();

private:
    Ui::MainWindow *ui;
    gamewindow *gWindow;
};

#endif // MAINWINDOW_H
