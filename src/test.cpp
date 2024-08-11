#include <Arduino.h>
#include "InIndKit.h"
#include <stdio.h>
#include <math.h>


void setup()
{
    InIndKit.setup("Wokwi-GUEST", "", "inindkit10");
    #define amostras 100
    #define amplitude 1.0
    
    double ondatri[amostras];
    int i;
    double passo = (2*amplitude)/(amostras/2);
    

}

void loop()
{
    InIndKit.loop();





}