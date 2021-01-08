#pragma once
#include "Nodo.h"
template <class P>
class Pila {
	Nodo<P>* cima;
public:
	Pila() {
		cima = NULL;
	}
	void Push(P dato) {
		Nodo<P>* nuevo = new Nodo<P>(dato);
		if (cima != NULL) {
			nuevo->Unir(cima);
		}
		cima = nuevo;
	}
	void Pop() {
		if (!Empty()) {
			Nodo<P>* temp = cima;
			cima = cima->RetSig();
			delete temp;
		}
	}
	int Size() {
		Nodo<P>* aux = cima;
		int counter = 0;
		while (aux != NULL) {
			aux = aux->RetSig();
			counter++;
		}
		return aux;
	}
	P Top() {
		return cima->RetDato();
	}
	bool Empty() {
		return cima == NULL;
	}
};