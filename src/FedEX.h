#ifndef FEDEX_H
#define FEDEX_H

#include "Envio.h"

class FedEX : public Envio{

    int km, kg;

    public:
        FedEX(int,int);

        virtual double CalculoEnvio();
};

#endif
