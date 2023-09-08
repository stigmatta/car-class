#include "Car.h"
#include<iostream>
using namespace std;
Car::Car()
{
	this->model = this->color = nullptr;
	this->year = 0;
	this->price = 0;
}

Car::Car(const char* model, const char* color, int year, double price)
{
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	this->year = year;
	this->price = price;
}

Car::~Car()
{
	delete[] this->model;
	delete[]this->color;
}

void Car::input()
{
	char buff[20];
	if (model != nullptr)
		delete[]model;
	cout << "Type the model of a car:" << endl;
	cin >> buff;
	this->model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);
	if (color != nullptr)
		delete[]color;
	cout << "Type the color of a car:" << endl;
	cin >> buff;
	this->color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);
	cout << "Type the year of a car:" << endl;
	cin >> year;
	cout << "Type the price of a car:" << endl;
	cin >> price;
}

void Car::print()
{
	if (model == nullptr)
		cout << "Unknown model" << endl;
	else
		cout << "Model: " << this->model << endl;
	if (color == nullptr)
		cout << "Unknown color" << endl;
	else
		cout << "Color: " << this->color << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
}

char* Car::getModel()
{
	return model;
}

char* Car::getColor()
{
	return color;
}

int Car::getYear()
{
	return year;
}

double Car::getPrice()
{
	return price;
}

void Car::setModel(const char* model)
{
	if (this->model != nullptr)
		delete[]this->model;
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}

void Car::setColor(const char* color)
{
	if (this->color != nullptr)
		delete[]this->color;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

void Car::setYear(int year)
{
	this->year = year;
}

void Car::setPrice(double price)
{
	this->price = price;
}
