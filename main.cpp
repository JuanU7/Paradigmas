/******************************************************************************

            Juan Esteban Unas Ocampo
            Ingenieria Informatica
            Progrma para calcular velocidad de particula
            
*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    float distancia;
    float tiempo;
    float resultado;

    cout<< "Escriba valor de tiempo: ";
    cin>> tiempo;
    cout<< "Escriba valor de distanica: ";
    cin>> distancia;
    resultado = distancia/tiempo;
    cout<< "La particula tiene una velocidad de " <<resultado;
    
    return 0;
}

