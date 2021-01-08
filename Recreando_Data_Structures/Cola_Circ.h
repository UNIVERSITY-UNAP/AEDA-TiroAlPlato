//#pragma once
//#include "Nodo.h"
//class ColaCircular {
//	Nodo* cabeza;
//	Nodo* cola;
//public:
//	ColaCircular() {
//		cabeza = NULL;
//		cola = NULL;
//	}
//	void Encolar(int dato) {
//		Nodo* n = new Nodo(dato);
//		if (cola != NULL && cabeza != NULL) {
//			cola->Unir(n);
//			n->Unir(cabeza);
//		}
//		else
//			cabeza = n;
//		cola = n;
//	}
//	void Desencolar() {
//		if (cabeza != NULL) {
//			Nodo* temp = cabeza;
//			cabeza = cabeza->RetSig();
//			cola->Unir(cabeza);
//			delete temp;
//		}
//	}
//	void VaciarCola() {
//		while (cabeza != NULL)
//			Desencolar();
//	}
//	int RetCima() {
//		return cabeza->RetDato();
//	}
//	bool EstadoCima() {
//		return cabeza == NULL;
//	}
//};