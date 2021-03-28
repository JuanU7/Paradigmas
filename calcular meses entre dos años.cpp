/******************************************************************************

            Programa para calcular meses entre dos años
            Compilado en onlineGDB
            Autor:todos (Juan Esteban Unas Ocampo)
            27/03/2021

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int ani,anf;      //años inicial y final
    int total_meses;
    cout<<"ingrese año inicial: ";
    cin>>ani;
    cout<<"ingrese año final: ";
    cin>>anf;
    if(ani <= anf)
    {
        total_meses = (anf - ani)*12;
        cout<<"\n El total de meses es: "<<total_meses;
        
    }
    else
    {
        cout<<" \t***** ERROR AÑO INVALIDO *****";
    
    }
    return 0;
}


