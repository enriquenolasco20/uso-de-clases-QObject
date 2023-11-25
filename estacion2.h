#ifndef ESTACION2_H
#define ESTACION2_H

#include <QObject>

class estacion2 : public QObject
{
    Q_OBJECT
public:
    explicit estacion2(QObject *parent = nullptr);
    ~estacion2();
    void msg();
signals:
    void respuesta(QString mensaje);
public slots:
    void saludo(QString mensaje);
};

#endif // ESTACION2_H
