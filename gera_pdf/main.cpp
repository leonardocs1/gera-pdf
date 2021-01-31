#include "janelalogin.h"
#include <QApplication>
#include "tela_principal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaLogin w;
    w.show();
    return a.exec();
}
