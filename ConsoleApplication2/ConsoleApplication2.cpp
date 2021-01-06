
#include "Adaptador.h"
#include "string"
#include <stdlib.h>
#include <conio.h>

int main()
{
	//variables
	Adaptador* adp = new Adaptador();
	string pname;
	double precio;
	float peso;
	int cantidad;
	float ceeeuu;
	


	
	//Interaccion
	cout << "Ingrese nombre del producto: ";
	cin >> pname;
	cout << endl << "Ingrese precio: ";
	cin >> precio;
	cout << endl << "Ingrese cantidad a comprar: ";
	cin >> cantidad;
	cout << endl << "Ingrese peso: ";
	cin >> peso;
	cout << endl << "Ingrese costo de envio a EE.UU: ";
	cin >> ceeeuu;

	//Funcionamiento
	adp->setEnvioEeuu(ceeeuu);
	adp->setPeso(peso);
	adp->setCantidad(cantidad);
	adp->setPrecio(precio);
	adp->setCostoImportar();

	system("cls");
	cout << "\t \t \t R E S U M E N " << endl << "-------------------------------------------------------------------------------------------- \n";
	cout << "  Nombre del producto          \t \t " << pname;
	cout << endl << "  Precio Unitario           \t \t" << "$    " << adp->getPrecio();
	cout << endl << "  Cantidad a comprar        \t \t     " << adp->getCantidad();
	cout << endl << "  Peso Unitario             \t \t     " << adp->getPeso()<<" Kg";
	cout << endl << "  Peso Total                \t \t     " << adp->getPesoTotal() << " Kg";
	cout << endl << "  Envio al almacen en EE.UU \t \t " <<"$   "<< adp->getEnvioEEUU();
	cout << endl << "  Costo Importacion         \t \t " <<"$   "<< adp->getCImportar();
	cout << endl << "  Impuesto aduanas          \t \t " <<"S/. "<< adp->GetImpuestoAduanas();
	cout << endl << endl << "\t --------------------------------- \t";
	cout << endl << endl << "     Precio total en Soles \t \t " <<"S/."<< adp->getTotalSoles();
	cout << endl << endl << "     Precio total en Dolares \t \t " << "$" << adp->getTotalDolares();
	cout << endl << endl << endl << endl << endl;
	system("pause>nul");
	return 0;
}
