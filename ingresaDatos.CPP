
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;


void ingresadatos(int* n, string* nombre, string* apellido, int* edad, string* niveleducativo, string* estadocivil)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "ingresa nombre  " << i + 1 << ": "; cin >> nombre[i];
		cout << "ingrese creditos matriculados " << i + 1 << ": "; cin >> apellido[i];
		cout << "ingrese promedio " << i + 1 << ": "; cin >> edad[i];
		cout << "ingrese nivel educativo " << i + 1 << ": "; cin >> niveleducativo[i];
		cout << "ingrese estado civil " << i + 1 << ": "; cin >> estadocivil[i];
	}
}



int main()
{
	int n;
	cout << "ingrese n"; cin >> n;
	while (n <= 0 || n > 50)
	{
		cout << "ingrese n"; cin >> n;
	}
	string* nombre = new string[n];
	string* apellido = new string[n];
	int* edad = new int[n];
	string* educacion = new string[n];
	string* estadocivil = new string[n];
	ingresadatos(&n, nombre, apellido, edad, educacion, estadocivil);
	
	delete[]nombre;
	delete[]apellido;
	delete[]edad;
	delete[]educacion;
	delete[]estadocivil;
	_getch();

}