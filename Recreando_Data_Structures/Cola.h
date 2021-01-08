#pragma once
#include "Nodo.h"
template <class C>
class Cola {
	Nodo<C>* cima;
	Nodo<C>* base;
public:
	Cola() {
		cima = NULL;
		base = NULL;
	}
	void Push(C dato) {
		Nodo<C>* nuevo = new Nodo<C>(dato);
		if (cima != NULL) {
			base->Unir(nuevo);
		}
		else {// nuevo == NULL
			cima = nuevo;
		}
		base = nuevo;
	}
	void Pop() {
		if (!Empty()) {
			Nodo<C>* temp = cima;
			cima = cima->RetSig();
			delete temp;
			if (cima == NULL)
				base = NULL;
		}
	}
	int Size() {
		Nodo<C>* aux = cima;
		int counter = 0;
		while (aux != NULL) {
			aux = aux->RetSig();
			counter++;
		}
		return aux;
	}
	C Front() {
		return cima->RetDato();
	}
	C Back() {
		return base->RetDato();
	}
	bool Empty() {
		return cima == NULL;
	}
};