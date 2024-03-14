typedef struct {
    double x;
} Angulo;

/**
criar o um angulo
* @param x um angulo digitado pelo usuario e passar como radiano
**/
Angulo angulo_radianos(double x);

/*
 calcular o seno de um angulo
*/
double calcular_seno(Angulo angulo_radianos);
/*
 calcular o cosseno de um angulo
*/
double calcular_cosseno(Angulo angulo_radianos);
/*
 calcular a tangente de um angulo
*/
double calcular_tangente(Angulo angulo_radianos);
//trabalho de pds