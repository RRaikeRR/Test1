#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(790,617);
    w.setWindowTitle("Симуляция полета самолета");
    w.show();
    return a.exec();
}
