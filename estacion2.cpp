#include "estacion2.h"
#include <QDebug>
estacion2::estacion2(QObject *parent)
    : QObject{parent}
{

}
estacion2::~estacion2(){

}

void estacion2::msg()
{
    emit respuesta("Estacion2:si");
}

void estacion2::saludo(QString mensaje)
{
    qInfo()<<mensaje;
}
