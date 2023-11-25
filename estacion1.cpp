#include "estacion1.h"
#include <QDebug>

estacion1::estacion1(QObject *parent)
    : QObject{parent}
{

}

estacion1::~estacion1(){

}

void estacion1::mensaje()
{
    emit saludo("Estacion1: Hola hay alguien ahi?");
}

void estacion1::msg()
{
    emit saludo2("estacion1:Hola estacion3?");
}

void estacion1::respuesta(QString mensaje)
{
    qInfo()<<mensaje;
}

void estacion1::contestacion(QString mensaje){
    qInfo()<<mensaje;
}


