#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    pushButton = new QPushButton(this);//实例化按钮对象，this为本类，确定按钮显示的地方
    pushButton->setText("确定");//按钮的文字
    pushButton->setGeometry(50, 50, 100, 50);//按钮的大小和位置
    this->resize(800, 480);//重新设置主窗口的大小

}

MainWindow::~MainWindow()
{
}

