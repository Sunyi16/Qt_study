#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "school.h"
#include "student.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class school;
class student;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void run();

private:
    Ui::MainWindow *ui;
    school *School;
    student *Student;
};
#endif // MAINWINDOW_H
