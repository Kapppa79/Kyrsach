#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Jetpack Joyribe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Booba_clicked()
{
    QApplication::quit();
}

void MainWindow::on_Jaga_clicked()
{
    QApplication::quit();
}

void MainWindow::on_Sound_clicked()
{
    QApplication::quit();
}

