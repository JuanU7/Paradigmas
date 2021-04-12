/******************************************************************************

            Programa para calcular salario neto
             Autor:Juan Esteban Unas Ocampo Y Samuel Alejandro Arboleda Garcia 
             compilado en onlineGDB
             10/04/2021

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{

float valorH,HorasT;
float salario,seguridad,retencion,valorneto;
char sexo,estadocivil;
string nombre,codigo;

cout<<"ingrese Nombre ==>"; cin>> nombre;
cout<<"ingrese cedula ==>"; cin >> codigo;
cout<<"ingrese Estado Civil(1=casado/2=soltero) ==>"; cin>> estadocivil;
cout<<"ingrese Sexo (1=Femenino/2=Masculino) ==>"; cin>> sexo;
cout<<"ingrese valor de la hora ==>"; cin>>valorH;
cout<<"ingrese Cantidad de horas trabajadas en el mes ==>"; cin>> HorasT;


salario = HorasT*valorH;
if (salario>=850000)
{	seguridad=salario*0.3;
	retencion=salario*0.05;
}
else
{	seguridad=salario*0.04;
	retencion=0;
}
valorneto=salario-seguridad-retencion;
if (sexo='1' && estadocivil=='1')
{valorneto=valorneto+valorneto*0.01;
}

cout<<"  Nombre:  "<<nombre<<"  su cedula: "<<codigo<<"  su estadocivil: "<<estadocivil<<"  su sexo: "<<sexo<<"su salario: "<<salario<<"  su valor neto:  "<<valorneto;

  return 0;
}


