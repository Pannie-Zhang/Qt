#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //这里测试上传
    MainWindow w;
    w.show();

    return a.exec();
}
