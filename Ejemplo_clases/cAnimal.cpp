#include "cAnimal.h"

using namespace std;

cAnimal::cAnimal(string _especie, int _tamanio, char _sexo, float _peso, bool _dormido) {
	this->Especie = _especie;
	this->tamanio = _tamanio;

	if (_sexo == 'M' || _sexo == 'F') {
		this-> sexo = _sexo;
	}
	else {
		sexo = 'F';

	}
	setPeso(_peso);
	this->dormido = _dormido;
}

cAnimal::~cAnimal(){}