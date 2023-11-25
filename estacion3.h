#ifndef ESTACION3_H
#define ESTACION3_H

#include <QObject>

class estacion3 : public QObject
{
    Q_OBJECT
public:
    explicit estacion3(QObject *parent = nullptr);
    void respuesta2();
signals:
    void contestacion(QString mensaje);
public slots:
    void saludo2(QString mensaje);
};

#endif // ESTACION3_H
