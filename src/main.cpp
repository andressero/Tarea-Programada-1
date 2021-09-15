# include <iostream>
# include <vector>
#include "Envio.h"
#include "ServicioPostal.h"
#include "FedEX.h"
//new ServicioPostal(km,kg,clase)
//new Fedex(km,kg)
using namespace std;

int main(){

ServicioPostal *sp1 = new ServicioPostal(10,2,1);
ServicioPostal *sp2 = new ServicioPostal(10,2,3);
ServicioPostal *sp3 = new ServicioPostal(140,7,2);
ServicioPostal *sp4 = new ServicioPostal(600,20,1);

FedEX *fedex1 = new FedEX(260,3);
FedEX *fedex2 = new FedEX(520,6);

vector<Envio *> arregloEnvios;
arregloEnvios.push_back(sp1);
arregloEnvios.push_back(sp2);
arregloEnvios.push_back(sp3);
arregloEnvios.push_back(sp4);

arregloEnvios.push_back(fedex1);
arregloEnvios.push_back(fedex2);

double totalMontoEnvios = 0;

for(Envio *envio : arregloEnvios)
{
    totalMontoEnvios+=envio -> CalculoEnvio();
}

cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;

delete sp1,sp2,sp3,sp4;
delete fedex1,fedex2;
