#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	float kuvas;
	float preciokilo;
	float subtotal,tamano,tipo,total;
	ofstream archivo;

  archivo.open("demotxt",ios::out);

	cout<<"Ingrese el valor en kilos: ";
	cin>>kuvas;
	cout<<"Ingrese el valor de precio fijado por kilo: ";
	cin>>preciokilo;
	cout<<"Seleccione el valor de tipo."<<endl;
	cout<<"1) TIPO A"<<endl;
	cout<<"2) TIPO B"<<endl;
	cout<<":";
	do {
		cin>>tipo;
		if (tipo<1 || tipo>2) {
			cout << "Valor incorrecto. Ingréselo nuevamente.: ";
		}
	} while (!(tipo>=1 && tipo<=2));
	cout<<"Seleccione el valor de tamano."<<endl;
	cout<<"1"<<endl;
	cout<<"2"<<endl;

	do {
		cin >> tamano;
		if (tamano<1 || tamano>2)
    {
			cout << "Valor incorrecto. Ingréselo nuevamente.: ";
		}
	} while (!(tamano>=1 && tamano<=2));

	subtotal= preciokilo*kuvas;
	if (tipo==1 && tamano==1)
  {
		total= subtotal*1.2;
	}
	if (tipo==1 && tamano==2)
  {
		total= subtotal*1.3;
	}
	if (tipo==2 && tamano==1)
  {
		total= subtotal*0.7;
	}
	if (tipo==2 && tamano==2)
  {
		total= subtotal*0.5;
	}
	cout<<"Valor de subtotal: "<<subtotal<<endl;
	cout<<"Valor de total: "<<total<<endl;

  archivo<<"Subtotal: "<<subtotal<<endl;
  archivo<<"Total: "<<total;
  archivo.close();
	return 0;
}
