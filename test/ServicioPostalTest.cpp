# include <gtest/gtest.h>
# include "../src/ServicioPostal.h"
//# include "ServicioPostal.h"

namespace{
    TEST(ServicioPostalTest,SPCalculoEnvio1){
        ServicioPostal servicioPostal = ServicioPostal(10,2,1);
        double costo = servicioPostal.CalculoEnvio();
        EXPECT_EQ(1.95,costo);
    }

    TEST(ServicioPostalTest,SPCalculoEnvio2){
        ServicioPostal servicioPostal = ServicioPostal(10,2,3);
        double costo = servicioPostal.CalculoEnvio();
        EXPECT_EQ(0.15,costo);
    }

    TEST(ServicioPostalTest,SPCalculoEnvio3){
        ServicioPostal servicioPostal = ServicioPostal(140,7,2);
        double costo = servicioPostal.CalculoEnvio();
        EXPECT_EQ(6.3,costo);
    }

    TEST(ServicioPostalTest,SPCalculoEnvio4){
        ServicioPostal servicioPostal = ServicioPostal(600,20,1);
        double costo = servicioPostal.CalculoEnvio();
        EXPECT_EQ(300,costo);
    }
}
