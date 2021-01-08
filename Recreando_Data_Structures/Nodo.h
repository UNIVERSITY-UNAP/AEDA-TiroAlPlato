#pragma once
#ifndef NODO_H
#define NODO_H
template <class N>
class Nodo {
	N dato;
	Nodo<N>* siguiente;
public:
	Nodo() {
		dato = 0;
		siguiente = NULL;
	}
	Nodo(N v) {
		dato = v;
		siguiente = NULL;
	}
	void Unir(Nodo<N>* n) {
		siguiente = n;
	}
	Nodo<N>* RetSig() {
		return siguiente;
	}
	N RetDato() {
		return dato;
	}
};
#endif