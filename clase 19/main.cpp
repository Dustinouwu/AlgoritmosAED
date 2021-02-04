#include <iostream>
#include <fstream>
using namespace std;

void ingresarDatos();
void mostrarDatos();

int main() {
  int op;
  do
  {
    cout<<"Opciones"<<endl;
    cout<<"1. Ingresar datos"<<endl;
    cout<<"2. Mostrar datos"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese el número de su opción: ";
    cin>>op;
    switch (op)
    {
      case 1:
      cin.ignore();
      ingresarDatos();
      break;
      case 2:
      cin.ignore();
      mostrarDatos();
      break;
      case 3:
      cout<<"HASTA PRONTO!";
      break;
      default:
      cout<<"Opcion no valida";
      cout<<"Vuelva a ingresar";
      break;
    }
  }
  while(op!=3);
}

void ingresarDatos()
{
  string nombre, apellido, carrera, nombreArchivo;
  int edad;
  char r;
  ofstream archivo;
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin,nombreArchivo);
  archivo.open(nombreArchivo);
  do
  {
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"\t Ingrese la carrera: ";
    getline(cin,carrera);
    cout<<"\t Ingrese la edad: ";
    cin>>edad;

    archivo<<nombre<<" "<<apellido<<" "<<carrera<<" "<<edad<<endl;
    cout<<"Desea ingresar otro contacto? [s/n]: ";
    cin>>r;
    cin.ignore();
  }
  while(r=='s');
  archivo.close();
}

void mostrarDatos()
{
  string nombre, apellido, carrera, nombreArchivo, texto;
  int edad;

  ifstream archivoLectura;
  cout<<"Ingrese el nombre del archivo que desea leer: ";
  getline(cin,nombreArchivo);
  archivoLectura.open(nombreArchivo,ios::in);

  while(!archivoLectura.eof())
  {
    archivoLectura>>nombre>>apellido>>carrera>>edad;

    if(!archivoLectura.eof())
    {
      cout<<"Nombre: "<<nombre<<endl;
      cout<<"Apellido: "<<apellido<<endl;
      cout<<"Carrera: "<<carrera<<endl;
      cout<<"Edad: "<<edad<<endl;
    }
  }
  archivoLectura.close();
}
