#include "widget.h"
#include "ui_widget.h"
#include <qlabel.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //ui->setupUi(this);
    //this->setStyleSheet("QWidget { background-color: blue}");
    QLabel *label = new QLabel(this);
    label->setGeometry(0,0,100,100);

    QLabel *label1 = new QLabel(this);
    label1->setGeometry(120,120,100,100);
    label1->setObjectName("label1");//两个label时，为第二个label设置别名，在qss文件中设置
    //label->setStyleSheet("QLabel { background-color: red}");
    this->resize(800, 480);
}

Widget::~Widget()
{
    delete ui;
}

