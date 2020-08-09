#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //这是个测试
    MainWindow w;
    w.show();

    return a.exec();
}
