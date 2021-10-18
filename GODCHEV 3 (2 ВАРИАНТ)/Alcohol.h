#pragma once
#include "Liquid.h"

class Alcohol : Liquid
{
private:
	float fortress;
public:
	Alcohol() {};
	Alcohol(char* name, float density, float fortress) {
		this->name = name;
		this->density = density;
		this->fortress = fortress;
	};

	float getFortress() const {
		return this->fortress;
	}
	float* setFortress(float fortress) {
		this->fortress = fortress;
	}

	void CLperenaznachenie(char* name) {
		this->name = name;
	};
	void FortressChange(float fortress) {
		this->fortress = fortress;
	};
};