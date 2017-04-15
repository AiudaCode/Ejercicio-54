#include <iostream>
#include "Calcular.h"

using namespace std;

int main(void)
{
    // se crea un objeto de la clase Calcular (Instanciación)
    Calcular *obj = new Calcular();
    // se declara una variable de tipo entero llamada n
    int n;
    // pedimos el valor de n
    cout << "Digite el valor de n" << endl;
    cout << ">> ";
    cin >> n;
    // se encapsula la variable n
    obj->setN(n);
    // mostramos el area del poligono
    cout << "Area: " << obj->area() << endl;
}
