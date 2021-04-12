/******************************************************************************

            Programa para saber si es triangulo y de que tipo
             Autor:Juan Esteban Unas Ocampo Y Samuel Alejandro Arboleda Garcia 
             compilado en onlineGDB
             10/04/2021


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float lado1,lado2,lado3;
    cout<<"ingrese lado 1 :";
    cin>>lado1;
    cout<<"ingrese lado 2 :";
    cin>>lado2;
    cout<<"ingrese lado 3 :";
    cin>>lado3;
    
    if((lado1 < (lado2 + lado3)) or (lado2 < (lado1 + lado3)) or (lado3 < (lado2 + lado1 )))
    {
         cout<<"\n SI FORMA UN TRIANGULO";
        if((lado1 == lado2 ) and (lado2 == lado3) and (lado1 == lado3))
        {
            cout<<"\n ES UN TRIANGULO EQUILATERO";
        }
        else
        {
            if((lado1 == lado2) or (lado2 == lado3) or (lado1 == lado3))
            {
                cout<<"\n ES UN TRIANGULO ISOCELES";
            }
            else
            {
                cout<<"\n ES UN TRIANGULO ESCALENO";
            }
        }
    }
    else
    {
        cout<<"\n NO ES UN TRIANGULO";
    }
    return 0;
}


