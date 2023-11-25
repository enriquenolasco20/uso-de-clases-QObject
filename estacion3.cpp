#include "estacion3.h"
#include <QDebug>
#include <iostream>
#include <istream>
using namespace std;
estacion3::estacion3(QObject *parent)
    : QObject{parent}
{

}



void estacion3::respuesta2()
{
    string res{};
    cout<<"\nQue quieres contestar: ";
    getline(cin, res);
    QString respuesta=(res.c_str());
    respuesta="estacion3: "+respuesta;
    emit contestacion(respuesta);
}

void estacion3::saludo2(QString mensaje)
{
    qInfo()<<mensaje;
}

