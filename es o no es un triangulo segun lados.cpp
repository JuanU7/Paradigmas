/******************************************************************************

             Programa para saber si hay un triangulo segun los lados
             Autor:Todos (Juan Esteban Unas Ocampo)
             compilado en onlineGDB
             26/03/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int lado1,lado2,lado3;
    cout<<"ingrese el lado 1: ";
    cin>>lado1;
    cout<<"ingrese lado 2: ";
    cin>>lado2;
    cout<<"ingrese el lado 3: ";
    cin>>lado3;
    
    if ((lado1 + lado2) > lado3)
    {
        if ((lado3 + lado2) > lado1)
        {
            if ((lado3 + lado1) > lado2)
            {
                cout<<"\t \n Es un triangulo"; //t centra, n separa reglon
            }
            else
            {
                cout<<"\t \n No es un triangulo";
            }
        }
        else
        {
            cout<<"\t \n No es un triangulo";
        }
    }    
    else
    {
        cout<<"\t \n No es un triangulo";
    }


    return 0;
}

