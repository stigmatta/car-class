#pragma once //файл дизайна
class Car
{
private:
	//реализация класса - закрытая часть
	char* model;
	char* color; 
	int year;
	double price;
public: //интерфейс класса - открытая часть
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();
	void input();
	void print();

	//инспекторы
    char* getModel();
	char* getColor();
	int getYear();
	double getPrice();

	//модификаторы
	void setModel(const char* m);
	void setColor(const char* c);
	void setYear(int y);
	void setPrice(double pr);

};

