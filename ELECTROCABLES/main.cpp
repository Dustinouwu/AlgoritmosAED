#include <iostream>
using namespace std;
int puntos , i = 1, a = 0;
char c;

int n,d,w,distancia;
int numero[0],dtotal[0];

int total1=0,total2=0,total3=0,total0=0;
int main()
{
  cout<<"********************ELECTROCABLES******************"<<endl;
  cout<<"Ingrese el nombre del lugar de instalacion"<<endl;
  cin>>c;
  cout<<"Ingrese el número de puntos de red que va a ser instalado"<<endl;
  cin>>puntos;
  while(puntos>0)
  {
    cout<<"PUNTO DE RED #"<<i++<<endl;
    cout<<"Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad"<<endl;
    cin>>d;
    cout<<"Ingrese el número de conectores para el punto de red"<<endl;
    cin>>n;
    total0=d*n;
    total1=d*n;
    numero[0]=total1;


    for ( a=0;a<puntos;a++)
    {
      numero[a]=numero[0]+a;
      total2=numero[a]*0.05;
      total3=total2+total0;
      distancia=(distancia+total3);
    }



    puntos -= 1;

  }

  cout<<"\t\t\tEl detalle de la intalacion es el siguiente"<<endl;
  cout<<""<<endl;

  cout<<"la distancia total del cable utilizando la instalación es : "<<distancia<<endl;



}
