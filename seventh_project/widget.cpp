#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton_2->setCheckable(true);//设置可选中
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_radioButton_toggled(bool checked)
{
    qDebug()<< "first:"<<checked<<endl;
}

void Widget::on_radioButton_2_toggled(bool checked)
{
   qDebug()<< "second:"<<checked<<endl;
}
