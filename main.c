#include <stdio.h>
#include "matematica.h"

int main(){
    
    printf("PASSE UM ANGULO\n");
    double y;
    scanf("%lf", &y );
    
    Angulo a1 = angulo_radianos(y);
    double seno = calcular_seno(a1);
    double cosseno = calcular_cosseno(a1);
    double tangente = calcular_tangente(a1);

    printf("SENO: %f \nCOSSENO: %f \nTANGENTE: %f", seno, cosseno, tangente);
    return 0;



}