#ifndef SERVICIO_POSTAL_H
#define SERVICIO_POSTAL_H

#include "Envio.h"

class ServicioPostal : public Envio{

    private:
        int km,kg,clase;

    public:
        ServicioPostal(int,double,int);
        double definaPrecio();
        virtual double CalculoEnvio();

    //~ServicioPostal(){}

};

#endif
