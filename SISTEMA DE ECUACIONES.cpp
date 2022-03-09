// SISTEMAS DE ECUACIONES
// LABORATORIO 2
// Ing. Juan Carlos Duchen Cuellar
// Univ. Erick Andres Mamani Condori

#include <iostream> 

using namespace std;

int main()
{
float x1,y1,re1,x2,y2,re2,y,x,z,xr,yr,zr;

cout<<" 2 ECUACIONES CON 2 INCOGNITAS n";
cout<<"inserta la primera ecuacion n";
cout<<"inserta el valor de X: ";
cin>>x1;
cout<<"inserta el valor de Y: ";
cin>>y1;
cout<<"inserta el resulado: ";
cin>>re1;
cout<<endl<<endl;
cout<<"inserta la segunda ecuacion"<<endl;
cout<<"inserta el valor de X: ";
cin>>x2;
cout<<"inserta el valor de Y: ";
cin>>y2;
cout<<"inserta el resultado: ";
cin>>re2;
cout<<endl<<endl;
x=-x2*x1;
y=-x2*y1;
z=-x2*re1;

xr=x1*x2;
yr=x1*y2;
zr=x1*re2;

x=x+xr;
y=y+yr;
z=z+zr;
y=z/y;

z=re1-y*y1;
x=z/x1;

cout<<"EL VALOR DE Y ES: "<<y<<endl;
cout<<"EL VALOR DE X ES: "<<x<<endl;

system("pause");

return 0;
}
