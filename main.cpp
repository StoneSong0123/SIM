#include "SUiMainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SUiMainWindow w;
    w.show();

    return a.exec();
}
