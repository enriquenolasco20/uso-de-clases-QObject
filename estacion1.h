#ifndef ESTACION1_H
#define ESTACION1_H

#include <QObject>

class estacion1 : public QObject
{
    Q_OBJECT
public:
    explicit estacion1(QObject *parent = nullptr);
    ~estacion1();


    void mensaje();
    void msg();

signals:
    void saludo(QString mensaje);
    void saludo2(QString mensaje);
public slots:
    void respuesta(QString mensaje);
    void contestacion(QString mensaje);
};

#endif // ESTACION1_H
