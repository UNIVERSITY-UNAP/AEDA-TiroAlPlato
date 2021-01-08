//#pragma once
//#include "Nodo.h"
//class Cola {
//protected:
//	Nodo* cabeza;
//	Nodo* cola;
//public:
//	Cola() {
//		cabeza = NULL;
//		cola = NULL;
//	}
//	virtual void Encolar(int) = 0;
//	virtual void Desencolar() = 0;
//	void VaciarCola() {
//		while (cabeza != NULL)
//			Desencolar();
//	}
//	int RetCima() {
//		return cabeza->RetDato();
//	}
//	bool EstadoCima() {
//		return cabeza == NULL && cola ==NULL;
//	}
//	Nodo* RetCola() {
//		//cabeza = c;
//		return cola;
//	}
//	Nodo* RetCabeza() {
//		//cola = c;
//		return cabeza;
//	}
//};
//class Simple :public Cola {
//public:
//	Simple() :Cola() {}
//	void Encolar(int dato) {
//		Nodo* n = new Nodo(dato);
//		if (cola != NULL && cabeza != NULL)
//			cola->Unir(n);
//		else
//			cabeza = n;
//		cola = n;
//	}
//	void Desencolar() {
//		if (cabeza != NULL) {
//			Nodo* temp = cabeza;
//			cabeza = cabeza->RetSig();
//			if (cabeza == NULL)
//				cola = NULL;
//			delete temp;
//		}
//	}
//};
//class Circular :public Cola {
//public:
//	Circular() :Cola() {}
//	void Encolar(int dato) {
//		Nodo* n = new Nodo(dato);
//		if (!EstadoCima()) {
//			RetCola()->Unir(n);
//			n->Unir(RetCabeza());
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
//};