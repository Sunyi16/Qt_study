#include "widget.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //定义文件句柄
    QFile file(":/style.qss");
    //判断文件是否存在
    if(file.exists()){
        //以只读方式打开文件
        file.open(QFile::ReadOnly);
        //以字符串方式保存读出的结果
        QString styleSheet = QLatin1String(file.readAll());
        //设置全局样式
        qApp->setStyleSheet(styleSheet);
        //关闭文件
        file.close();
    }
    Widget w;
    w.show();
    return a.exec();
}
