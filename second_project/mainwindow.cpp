#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    School = new school(this);
    Student = new student(this);

    connect(School, SIGNAL(sendMessages()), Student, SLOT(comeBackToSchool()));
    connect(School, SIGNAL(sendClose()), Student, SLOT(print()));
    emit School->sendMessages();
    QThread::sleep(5);
    emit School->sendClose();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::run()
{

}


