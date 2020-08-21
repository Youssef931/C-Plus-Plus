#include <iostream>
using namespace std;
//12 - class CRectangle {
//	int* width, * height;
//public:
//	CRectangle(int, int);
//	~CRectangle();
//	int area()
//	{
//		return (*width * *height);
//	}
//};
//CRectangle::CRectangle(int a, int b)
//{
//	width = new int;
//	height = new int;
//	*width = a;
//	*height = b;
//}
//CRectangle::~CRectangle()
//{
//	delete width;
//	delete height;
//}
//*********************************************************
int main()
{
	/*1 - int var1 = 11;
	int var2 = 22;
	cout << &var1 << endl;
	cout << &var2 << endl;*/
	//*****************************************************
	/*2 - int var1 = 11;
	int var2 = 22;
	cout << &var1 << endl;
	cout << &var2 << endl;
	int* ptr;
	ptr = &var2;
	*ptr = 5000;
	cout << *ptr << endl;
	cout << var2 << endl;*/
	//*****************************************************
	/*3 - int var1 = 11;
	int var2 = 22;
	cout << &var1 << endl;
	cout << &var2 << endl;
	int* ptr;
	ptr = &var2;
	*ptr = 5000;
	var2 = 50;
	cout << *ptr << endl;
	cout << var2 << endl;*/
	//*****************************************************
	/*4 - int var1 = 11;
	int var2 = 22;
	cout << &var1 << endl;
	cout << &var2 << endl;
	int* ptr;
	ptr = &var2;
	*ptr = 5000;
	var2 = 50;
	cout << ptr << endl;
	cout << var2 << endl;*/
	//*****************************************************
	/*5 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;*/
	//*****************************************************
	/*6 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;*/
	//*****************************************************
	/*7 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;
	cout << *p << endl;*/
	//*****************************************************
	/*8 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;
	cout << p << endl;*/
	//*****************************************************
	/*9 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;
	p = new int;
	*p = 20;
	cout << p << endl;*/
	//*****************************************************
	/*10 - int* p;
	p = new int;
	*p = 10;
	cout << *p << endl;
	delete p;
	p = new int;
	*p = 20;
	cout << *p << endl;*/
	//*****************************************************
	/*11 - int* p1, * p2;
	p1 = new int;
	*p1 = 10;
	cout << &p1 << endl;
	cout << "Memory location is " << p1 << "\n";
	cout << "Contains is " << *p1 << endl;
	p2 = new int;
	*p2 = 10;
	cout << &p2 << endl;
	cout << "Memory location 2 is " << p2 << "\n" << "Contains 2 is " << *p2 << endl;
	delete p1;
	delete p2;*/
	//*****************************************************
	/*12 - CRectangle rect(3, 4), recta(5, 6);
	cout << "rect area is " << rect.area() << endl;
	cout << "recta area is " << recta.area() << endl;*/
	//*****************************************************
}