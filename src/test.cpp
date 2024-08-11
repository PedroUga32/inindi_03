#include <Arduino.h>
#include "InIndKit.h"
#include <stdio.h>
#include <math.h>


void setup()
{
    InIndKit.setup("Wokwi-GUEST", "", "inindkit10");
    #define amostras 200
    #define amplitude 2
    
    double ondatri[amostras];
    int i;
    double passo = (2*amplitude)/(amostras/2);

    for (i = 0; i < (amostras / 2); i++) {
        ondatri[i] = passo * i;
    }

    for (i = (amostras / 2); i < amostras; i++) {
        ondatri[i] = 2 * amplitude - passo * (i - amostras / 2);
    }

    // Exibindo a forma de onda
    for (i = 0; i < amostras; i++) {
        printf("%f\n", ondatri[i]);
    }

    return 0;
}

void loop()
{
    InIndKit.loop();
    
}