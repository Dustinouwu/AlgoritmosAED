#include <iostream>
#include <fstream>
#include "Quicksort.h"
using namespace std;





int main()
{
  ofstream registro;
  registro.open("Quicksort.txt",ios::app);
    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    registro<<"Quicksort"<<endl;
    for (int i=0; i<10;i++)
    {

      registro<<"|"<<A[i]<<"|";
        cout<<"|"<<A[i]<<"|";
    }
    registro<<endl;
    cout <<endl;
    ordenar(A,0,9);
    for (int i=0; i<10;i++)
    {
      registro<<"|"<<A[i]<<"|";
        cout<<"|"<<A[i]<<"|";
    }

    return 0;
}
