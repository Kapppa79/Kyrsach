#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gWindow = new gamewindow;
    //connect(gWindow, &gamewindow::firstWindow, this, &MainWindow::show);//потребуется в будущем
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Booba_clicked()
{
    gWindow->show();
    this->close();
    //QApplication::quit();
}

void MainWindow::on_Jaga_clicked()
{
    gWindow->show();
    this->close();
    //QApplication::quit();
}

void MainWindow::on_Sound_clicked()
{
    QApplication::quit();
}



