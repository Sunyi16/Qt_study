#include "student.h"
#include <QDebug>

student::student(QObject *parent) : QObject(parent)
{

}

void student::comeBackToSchool()
{
    qDebug() << "running" << endl;
}

void student::print()
{
    qDebug() << "running2" << endl;
}
