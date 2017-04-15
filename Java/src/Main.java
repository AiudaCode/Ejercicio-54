
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Calcular (Instanciación)
        Calcular obj = new Calcular();
        // pedimos el valor de n
        int n = Integer.parseInt(JOptionPane.showInputDialog("Digite el valor de n:"));
        // encapsulamos el valor de n
        obj.setN(n);
        // mostramos el area
        JOptionPane.showMessageDialog(null, "El area es: " + obj.area());
    }
}
