#ifndef CALCULAR_H
#define CALCULAR_H

class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();
        // se declaran los métodos publicos
        void setN(int val);
        int getN();
        int area();
    protected:

    private:
        // se declara el atributo privado
        int n;
};

#endif // CALCULAR_H
