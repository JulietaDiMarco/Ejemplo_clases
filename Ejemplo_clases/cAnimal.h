#pragma once
#include <iostream>
#include <string>

using namespace std;

class cAnimal {

private:
	string Especie;
	int tamanio;
	char sexo;
	float peso;
	bool dormido;

public:
	cAnimal(string _especie, int _tamanio, char _sexo, float _peso, bool _dormido = false);
	~cAnimal();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	string getEspecie() { return Especie; }
	
	/// <summary>
	/// Devuelve Peso
	/// </summary>
	/// <param name="peso_nuevo"></param>
	void setPeso(float peso_nuevo) {
		if (peso_nuevo > 0) {
			this->peso = peso_nuevo;
		}
		else {
			this->peso = 0;
		}
	}

};