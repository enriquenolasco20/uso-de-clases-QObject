#include <QCoreApplication>
#include "estacion1.h"
#include "estacion2.h"
#include "estacion3.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    estacion1 xy{};
    estacion2 rt{};
    estacion3 uy{};
    QObject::connect(&xy,&estacion1::saludo, //conectando estacion 1 con 2
                     &rt,&estacion2::saludo);
    QObject::connect(&rt,&estacion2::respuesta, //conectadondo estacion 2 con 1
                     &xy,&estacion1::respuesta);

    QObject::connect(&xy,&estacion1::saludo2, //conectando estacion 1 con 3
                     &uy,&estacion3::saludo2);
    QObject::connect(&uy,&estacion3::contestacion, //conectando estacion 3 con 1
                     &xy,&estacion1::contestacion);
    xy.mensaje();
    rt.msg();
    system("pause");
    system("cls");

    xy.msg();
    uy.respuesta2();
    return a.exec();


}
