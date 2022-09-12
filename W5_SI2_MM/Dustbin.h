#pragma once
#include <string>
#include <vector>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
#include "Garbage.h"
#include "Dustbin.cpp"


class Dustbin
{
public:
	std::string color = "grey";
	std::vector <PaperGarbage> paperContent;
	std::vector <PlasticGarbage> plasticContent;
	std::vector <Garbage> HouseWasteContent;

	Dustbin();
	void setGarbage(Garbage obj, int);
	void setPaperGarbage(Garbage obj, int);
	void setPlasticGarbage(Garbage obj, int);
	void throwOutGarbage(Garbage obj);
	void throwOutPaperGarbage(PaperGarbage obj);
	void throwOutPlasticGarbage(PlasticGarbage obj);
	//void getGarbage(Garbage HouseWasteContent, int n);

};

