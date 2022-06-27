#pragma once
#include <string>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "Garbage.h"
#include "Dustbin.cpp"


class Dustbin
{
public:
	std::string color = "grey";
	PaperGarbage paperContent[100];
	PlasticGarbage plasticContent[50];
	Garbage HouseWasteContent[25];
public:
	Dustbin();
	void setGarbage(Garbage obj, int);
	void setPaperGarbage(Garbage obj, int);
	void setPlasticGarbage(Garbage obj, int);
	//void getGarbage(Garbage HouseWasteContent, int n);

};

