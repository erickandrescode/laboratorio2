// METODO DE HORNER
// LABORATORIO 2
// Ing. Juan Carlos Duchen Cuellar
// Univ. Erick Andres Mamani Condori
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	int *dividendo=NULL,*cociente=NULL,*divisor=NULL,c1,c2,m;
	
	cout<<"Resolucion de diviciones por el metodo de Horner"<<endl<<endl;
	cout<< "Ingrese el numero de terminos del dividendo: ";//insertar el valor del mayor exponente mas uno, es decir si su mayor exponente es 3 inserte el valor de 4
 	cin>>c1;
 	dividendo= new int [c1];
 	cociente= new int [c1];
 	cout<<endl;
 	cout<< "Ingrese los coeficientes del dividendo: "<<endl<<endl;//colocar los coeficientes con su signo
 	
 	for(int i=0; i<c1; i++)
	{
 		cout<<"X^"<<c1-(i+1)<<" : ";
 		cin>>dividendo[i];
	}
 	cout<<endl; 
 	cout<< "Ingresar el numero de terminos del divisor: ";//insertar el valor del mayor exponente mas uno, es decir si su mayor exponente es 2 inserte el valor de 3
 	cin>>c2;
 	divisor= new int [c2];	
 	cout<<endl;
	cout<< "Ingrese los coeficientes del divisor : "<<endl<<endl;//de la misma manera poner con sus signos
	
	for(int i=0; i<c2; i++)
	{
 		cout<<"X^"<<c2-(i+1)<<" : ";
 		cin>>divisor[i];
	}
	
	for (int i=0; i<=c1-c2;i++)
	{
		cociente[i]=dividendo[i]/divisor[0];
		
		m=0;
		
		for (int j=0; j<c2-1;j++)
		{
			m=m+1;
			dividendo[j+i+1]=dividendo[j+i+1]-cociente[i]*divisor[m];
		}
	}
	cout<<endl;
	cout<< "El valor del cociente es: "<<endl<<endl;
	for(int i=0; i<=c1-c2; i++)
	{
 		cout<<"X^"<<c1-c2-i<<" : "<<cociente[i]<<endl;
	}
	cout<<endl;
	cout<< "El valor del residuo es: "<<endl<<endl;
	m=0;
	for(int i=c1-c2+1; i<c1; i++)
	{
 		cout<<"X^"<<c2-2-m<<" : "<<dividendo[i]<<endl;
 		m=m+1;	
	}
	
	return 0;
}

