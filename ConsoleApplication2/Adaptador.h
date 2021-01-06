#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Adaptador
{
public:
	Adaptador()
	{
	}

	float onzaaKilo(float onza)
	{
		float kilo=onza/35.274;
		return kilo;
	}

	void setPrecio(double x) { precio = x; }
	void setCantidad(int x)
	{
		
		cantidad = x;
		pesoTotal = peso * x;
	}
	void setPeso(float x) { peso = onzaaKilo(x); }
	void setEnvioEeuu(float x) { envioEeuu = x; }

	float GetImpuestoAduanas()
	{
		double precioenSoles =0 ;
		if (precio * cantidad > 199)
		{
			precioenSoles = (precio * cantidad) *3.63;
			impuestoAduanas = precioenSoles * 0.24;
		}
	

		else
			impuestoAduanas = 0;


		return impuestoAduanas;
	}

	double getTotalDolares()
	{
		total = (impuestoAduanas*0.28) + costoImportar + envioEeuu + (precio * cantidad);
		return total;
	}
	double getTotalSoles()
	{
		totalSoles = impuestoAduanas + (costoImportar * 3.63) + (envioEeuu * 3.63) + ((precio * cantidad) * 3.63);
		return totalSoles;
	}

	double getPrecio()
	{
		return precio;
	}

	int getCantidad()
	{
		return cantidad;
	}

	
	
	void setCostoImportar()
	{
		//int a = static_cast<int>(peso);
		switch ((int) peso)
		{
		case 0:
		case 1: costoImportar = 17;
			break;
		case 2: costoImportar = 16.5;
			break;
		case 3: costoImportar = 16;
			break;
		case 4: costoImportar = 15.5;
			break;
		case 5: costoImportar = 15;
			break;
		case 6: costoImportar = 14.5;
			break;
		case 7: costoImportar = 14;
			break;
		case 8: costoImportar = 13.5;
			break;
		case 9: costoImportar = 13;
			break;
		case 10: costoImportar = 12.5;
			break;
		default: costoImportar = 12.5;
			break;
		}
	}

	float getCImportar()
	{
		return costoImportar;
	}
	float getPeso()
	{
		return peso;
	}
	float getPesoTotal()
	{
	
		return pesoTotal;
	}
	float getEnvioEEUU()
	{
		return envioEeuu;
	}
protected:
private:

	float peso;
	float pesoTotal;
	double precio;
	float envioEeuu;
	float costoImportar;
	float impuestoAduanas;
	double total;
	double totalSoles;
	int cantidad;
};
