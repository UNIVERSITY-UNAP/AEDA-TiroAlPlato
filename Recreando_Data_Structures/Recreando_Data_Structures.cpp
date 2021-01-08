#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//MAMANI SUCARI OMAR MIGUEL
//EXAMEN LISTO PARA COMPILAR
#include "Pila.h"
#include "Cola.h"
using namespace std;
//int CantConexiones(Pila<char> *);
int main()
{
	/*string RNAA[5];
	RNAA[0] = "SBC";
	RNAA[1] = "FCC";
	RNAA[2] = "SFBC";
	RNAA[3] = "SFBCFSCB";
	RNAA[4] = "CFCBSFFSBCCB";
	Pila<char> *pila1 = new Pila<char>;
	for (unsigned int i = 0; i < RNAA[2].size(); i++)
	{
		pila1->Push(RNAA[0][i]);
	}
	cout << "Cantidad de conexiones del RNAA: " << CantConexiones(pila1);
	for (unsigned int i = 0; i < RNAA[2].size(); i++)
	{
		pila1->Push(RNAA[1][i]);
	}
	cout << "Cantidad de conexiones del RNAA: " << CantConexiones(pila1);
	for (unsigned int i = 0; i < RNAA[2].size(); i++)
	{
		pila1->Push(RNAA[2][i]);
	}
	cout << "Cantidad de conexiones del RNAA: " << CantConexiones(pila1);
	for (unsigned int i = 0; i < RNAA[2].size(); i++)
	{
		pila1->Push(RNAA[3][i]);
	}
	cout << "Cantidad de conexiones del RNAA: " << CantConexiones(pila1);
	for (unsigned int i = 0; i < RNAA[2].size(); i++)
	{
		pila1->Push(RNAA[4][i]);
	}
	cout << "Cantidad de conexiones del RNAA: " << CantConexiones(pila1);*/

	/*EJERCICIO 2*/
	
	/*const string nfichero = "concursantes.txt";
	char cad[80];
	ifstream fichero;
	fichero.open(nfichero.c_str());
	if (!fichero.fail()) {
		fichero.getline(cad, 80, ' ');
		while (!fichero.eof()) {
			cout << cad << endl;
			fichero.getline(cad, 80, ' ');
		}
	}
	fichero.close();*/
	ifstream ifile("concursantes.txt", ios::in);
	ofstream ofile("puestos.txt", ios::out);
	Cola<string>* apellidos = new Cola<string>();
	Cola<string>* nombres = new Cola<string>();
	Cola<int>* camisetas = new Cola<int>();
	Cola<int>* platos = new Cola<int>();
	string apellido[20]; string nombre[20]; int camiseta[20] = { 0 }; int plato[20] = { 0 };
	int p, s, t, pp = 0, ps = 0, pt = 0;
	int cant = 0;
	while (!ifile.eof()) {
		ifile >> apellido[cant] >> nombre[cant] >> camiseta[cant] >> plato[cant];
		cant++;
	}
	p = plato[0];
	for (int i = 1; i < cant; i++) {
		if (p < plato[i]) {
			p = plato[i];
			pp = i;
		}
	}
	s = plato[1];
	for (int i = 0; i < cant; i++) {
		if (s < plato[i] && i != pp) {
			s = plato[i];
			ps = i;
		}
	}
	t = plato[2];
	for (int i = 0; i < cant; i++) {
		if (t < plato[i] && i != ps && i != pp) {
			t = plato[i];
			pt = i;
		}
	}
	apellidos->Push(apellido[pp]); nombres->Push(nombre[pp]); camisetas->Push(camiseta[pp]); platos->Push(plato[pp]);
	apellidos->Push(apellido[ps]); nombres->Push(nombre[ps]); camisetas->Push(camiseta[ps]); platos->Push(plato[ps]);
	apellidos->Push(apellido[pt]); nombres->Push(nombre[pt]); camisetas->Push(camiseta[pt]); platos->Push(plato[pt]);
	for (int i = 0; i < cant; i++) {
		if (i != pp && i != ps && i != pt) {
			apellidos->Push(apellido[i]);
			nombres->Push(nombre[i]);
			camisetas->Push(camiseta[i]);
			platos->Push(plato[i]);
		}
	}
	ofile << left << setw(15) << "APELLIDOS" << setw(15) << "NOMBRES" << setw(5) << "Nro" << setw(5) << "Platos" << '\n';
	while (!platos->Empty()) {
		ofile << left << setw(15) << apellidos->Front() << setw(15) << nombres->Front() << setw(5) << camisetas->Front() << setw(5) << platos->Front() << '\n';
		//cout << left << setw(12) << apellidos->Front() << setw(12) << nombres->Front() << setw(5) << camisetas->Front() << setw(5) << platos->Front() << '\n';
		apellidos->Pop();
		nombres->Pop();
		camisetas->Pop();
		platos->Pop();
	};

	return 0;
}
//int CantConexiones(Pila<char> *pila)
//{
//	string ar;
//	int c = 0, cont = 0;
//	return cont;
//}





#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Pila.h"
#include "Cola.h"
using namespace std;
//int CantConexiones(Pila<char> *);
int main()
{
	ifstream ifile("concursantes.txt", ios::in);
	ofstream ofile("puestos.txt", ios::out);
	Cola<string>* apellidos = new Cola<string>();
	Cola<string>* nombres = new Cola<string>();
	Cola<int>* camisetas = new Cola<int>();
	Cola<int>* platos = new Cola<int>();
	string apellido[20]; string nombre[20]; int camiseta[20] = { 0 }; int plato[20] = { 0 };
	int p, s, t, pp = 0, ps = 0, pt = 0;
	int cant = 0;
	while (!ifile.eof()) {
		ifile >> apellido[cant] >> nombre[cant] >> camiseta[cant] >> plato[cant];
		cant++;
	}
	p = plato[0];
	for (int i = 1; i < cant; i++) {
		if (p < plato[i]) {
			p = plato[i];
			pp = i;
		}
	}
	s = plato[1];
	for (int i = 0; i < cant; i++) {
		if (s < plato[i] && i != pp) {
			s = plato[i];
			ps = i;
		}
	}
	t = plato[2];
	for (int i = 0; i < cant; i++) {
		if (t < plato[i] && i != ps && i != pp) {
			t = plato[i];
			pt = i;
		}
	}
	apellidos->Push(apellido[pp]); nombres->Push(nombre[pp]); camisetas->Push(camiseta[pp]); platos->Push(plato[pp]);
	apellidos->Push(apellido[ps]); nombres->Push(nombre[ps]); camisetas->Push(camiseta[ps]); platos->Push(plato[ps]);
	apellidos->Push(apellido[pt]); nombres->Push(nombre[pt]); camisetas->Push(camiseta[pt]); platos->Push(plato[pt]);
	for (int i = 0; i < cant; i++) {
		if (i != pp && i != ps && i != pt) {
			apellidos->Push(apellido[i]);
			nombres->Push(nombre[i]);
			camisetas->Push(camiseta[i]);
			platos->Push(plato[i]);
		}
	}
	ofile << left << setw(15) << "APELLIDOS" << setw(15) << "NOMBRES" << setw(5) << "Nro" << setw(5) << "Platos" << '\n';
	while (!platos->Empty()) {
		ofile << left << setw(15) << apellidos->Front() << setw(15) << nombres->Front() << setw(5) << camisetas->Front() << setw(5) << platos->Front() << '\n';
		apellidos->Pop();
		nombres->Pop();
		camisetas->Pop();
		platos->Pop();
	};

	return 0;
}
