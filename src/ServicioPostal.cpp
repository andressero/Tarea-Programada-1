#include "ServicioPostal.h"

ServicioPostal::ServicioPostal(int kilometros, double kilogramos, int numero_clase)
{
    this->km = kilometros;
    this->kg = kilogramos;
    this->clase = numero_clase;
}

double ServicioPostal::CalculoEnvio()
{
    double costo = 0;
    double aumento = this->definaPrecio();
    costo = km * aumento;
    return costo;
}

double ServicioPostal::definaPrecio()
{
    if(kg>=1 && kg<=3)
    {
        switch(clase){
            case 1:return 0.195;break;
            case 2:return 0.0195;break;
            case 3:return 0.0150;break;
        }
    }
    else if(kg>=4 && kg<=8)
    {
        switch(clase){
            case 1:return 0.450;break;
            case 2:return 0.0450;break;
            case 3:return 0.0160;break;
        }
    }
    else if(kg>=9)
    {
        switch(clase){
            case 1:return 0.500;break;
            case 2:return 0.0500;break;
            case 3:return 0.0170;break;
        }
    }
}

