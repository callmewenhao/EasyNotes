#include "EasyNotes.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EasyNotes w;
    w.show();
    return a.exec();
}
