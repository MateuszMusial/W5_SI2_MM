#include "Dustbin.h"
#include <iostream>>
using namespace std;

void Dustbin::setGarbage(Garbage obj, int n)
{
	Dustbin :: HouseWasteContent[n] = obj;
}
/*
void Dustbin::getGarbage(Garbage HouseWasteContent, int n)
{
	cout << "Obiekt " << HouseWasteContent[n];
}
*/