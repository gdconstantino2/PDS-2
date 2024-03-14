#include <stdio.h>
#include <math.h>
#include "matematica.h"
#define M_PI 3.14159265358979323846

Angulo angulo_radianos(double x){
    Angulo a;
    double pi = M_PI;
    a.x = (x * pi) / 180;
    return a;
}

double calcular_seno(Angulo angulo_radianos){
    
    return  sin(angulo_radianos.x);
}
double calcular_cosseno(Angulo angulo_radianos) {
    return cos(angulo_radianos.x);
}

double calcular_tangente(Angulo angulo_radianos) {
    return tan(angulo_radianos.x);
}//trabalho de pds