#include "Dustbin.h"
#include <iostream>
using namespace std;

void Dustbin::throwOutGarbage(Garbage obj)
{
	HouseWasteContent.push_back(obj);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage obj)
{
	if (obj.squeezed == false) {
		std::cout << "Error!";
	}
	else
		paperContent.push_back(obj);
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage obj)
{
	if (obj.clean == true) {
		std::cout << "Error!";
	}
	else
		paperContent.push_back(obj);
}
