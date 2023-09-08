#pragma once //���� �������
class Car
{
private:
	//���������� ������ - �������� �����
	char* model;
	char* color; 
	int year;
	double price;
public: //��������� ������ - �������� �����
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();
	void input();
	void print();

	//����������
    char* getModel();
	char* getColor();
	int getYear();
	double getPrice();

	//������������
	void setModel(const char* m);
	void setColor(const char* c);
	void setYear(int y);
	void setPrice(double pr);

};

