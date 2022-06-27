#pragma once
#include "Garbage.h"
#include "PlasticGarbage.cpp"
#include <string>

class PlasticGarbage : public Garbage{

private:
	bool isClean;

public:
	PlasticGarbage() {
		std :: string name = " Nowy plastikowy smiec";
		isClean = 0;
	}
	void clean();

};

