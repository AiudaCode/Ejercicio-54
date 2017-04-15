#include "Calcular.h"

Calcular::Calcular()
{
    // se le asigna un valor por defecto al atributo en el contructor
    n = 0;
}

Calcular::~Calcular()
{
    //dtor
}

// métodos Set y Get del atributo de la clase
void Calcular::setN(int val)
{
    n = val;
}

int Calcular::getN()
{
    return n;
}

// método para calcular el area del poligono
int Calcular::area()
{
    // el calculo del area es muy simple, solo vamos a calcular primero la multiplicacion entre (n-1) y (2*n -1 )
    // y lo sumamos con el valor de la variable n
    return n +(n-1) * (2*n - 1);
}
