/******************************************************************************

             Programa para determinar si es mayor de edad
             compilado en onlineGDB 
             Autor: todos (Juan Esteban Unas Ocampo)
             27/03/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int an,aa,edad;
    cout<<"ingrese año de nacimiento: ";
    cin>>an;
    if (an < 1910)
    {
        cout<<"*******ERROR*******";
    }
    else
    {
        cout<<"ingrese año actual: ";
        cin>>aa;
    }
    if (an > aa)
    {
        cout<<"*******ERROR*******";
    }
    else
    {
        edad = (aa - an);
    }
    if (edad >= 18)
    {
        cout<<"Es mayor de edad";
    }
    return 0;
}


