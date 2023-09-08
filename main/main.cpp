#include<iostream>
#include "Car.h"
using namespace std;
int main()
{
	Car a;
	system("chcp 1251");
	a.input();
	a.print();
	a.getModel();
	a.getColor();
	a.getPrice();
	a.getYear();
	a.setModel("Audi A5");
	a.setColor("White");
	a.setPrice(24000);
	a.setYear(2021);
	a.print();
}