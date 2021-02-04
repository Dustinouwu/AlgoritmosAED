#include<stdio.h>
#include <iostream>
#include <fstream>
using namespace std ;

int main ()
{
int x, y,i,r;
string nombre,d, apellido, carrera, nombreArchivo;

cout<<endl;
ofstream archivo;
cout<<"Ingrese el nombre del archivo: ";
getline(cin,d);
archivo.open(nombreArchivo);
do
{
cout<<"Ingresar el número de niveles que desea que tenga la piramide:"<<endl;
cin>>x;
while(x<1 || x>500);
for ( y=x; y>0; y--)
{
  for ( i=0; i<y; ++i )
  {

  cout<<"*";
  }

  cout<<endl;


}
 cout<<"Desea ingresar nivel de piramide? s/n: ";
    cin>>r;
    cin.ignore();


} while(r=='s');


}

