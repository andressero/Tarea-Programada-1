#include "FedEX.h"

FedEX::FedEX(int kilometros, int kilogramos)
{
    this->km = kilometros;
    this->kg = kilogramos;
}

double FedEX::CalculoEnvio()
{
    double costo = 20;
    if(km>500)
    {costo = costo + 5;}

    if(kg>4)
    {costo = costo + 3;}

    return costo;

}
