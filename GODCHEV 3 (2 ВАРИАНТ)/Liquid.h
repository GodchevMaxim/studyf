#pragma once
#include <iostream>

class Liquid
{
protected:
	char* name;
	float density;//плотность
public:
	Liquid() {};
	Liquid(char* name, float density) {
		this->name = name;
		this->density = density;
	}

	char* getName() const {
		return this->name;
	}
	float getDensity() const {
		return this->density;
	}
	char* setName(char* name) {
		this->name = name;
	}
	float* setDensity(float density) {
		this->density = density;
	}

	void CLperenaznachenie(char* name) {
		this->name = name;
	};
	void DensityChange(float density) {
		this->density = density;
	};
};