public class Calcular
{
    // declara un atributo privado
    private int n;
    
    public Calcular()
    {
        // se le asigna un valor por defecto al atributo en el contructor
        n = 0;
    }
    
    // métodos Set y Get del atributo de la clase
    public void setN(int val)
    {
        n = val;
    }
    
    public int getN()
    {
        return n;
    }
    
    // método para calcular el area del poligono
    public int area()
    {
        // el calculo del area es muy simple, solo vamos a calcular primero la multiplicacion entre (n-1) y (2*n - 1)
        // y lo sumamos con el valor de la variable n
        return n + (n-1) * (2*n - 1);
    }
}