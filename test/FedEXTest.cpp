# include <gtest/gtest.h>
# include "../src/FedEX.h"

namespace{
    TEST(FedEXTest,fedexCalculoEnvio1){
        FedEX fedex = FedEX(260,3);
        double costo = fedex.CalculoEnvio();
        EXPECT_EQ(20,costo);
    }

    TEST(FedEXTest,fedexCalculoEnvio2){
        FedEX fedex = FedEX(520,6);
        double costo = fedex.CalculoEnvio();
        EXPECT_EQ(28,costo);
    }
}
