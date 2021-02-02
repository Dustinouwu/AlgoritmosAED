#include <iostream>
using namespace std;

int busqueda(int arr[], int t, int dato);
void ingresarElementosArreglo(int arr[], int t);
void imprimirElementosArreglo(int arr[], int t);
int solicitarNumero();


int main()
{

  int a[5]={4,1,2,3,5};
  //cout<<"**************"<<busqueda(a,5,4)<<endl;

  int dato=solicitarNumero();

  if(busqueda(a,5,dato)==3)
  {
    cout<<"ELEMENTO NO ENCONTRADO";
  }
  else
  {
    cout<<"ELEMENTO ENCONTRADO EN LA POSICIÓN "<<busqueda(a,5,dato);
  }

}


int busqueda(int arr[], int t, int dato)
{
  int i;

  for( i=0 ; i<5 ; i++)
  {

    if(arr[i]==dato)
    {
      return i;
    }
  }

  return 3;
}

void ingresarElementosArreglo(int arr[], int t)
{


}


void imprimirElementosArreglo(int arr[], int t)
{

}

int solicitarNumero()
{
  int n;
  cout<<"ingresa el número:";
  cin>>n;
  return n;
}
