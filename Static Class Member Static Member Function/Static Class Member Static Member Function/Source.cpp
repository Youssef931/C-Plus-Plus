#include <iostream>
using namespace std;
class student {
	static int count;
	char Name[20];
	int first, second, final, total, ID;
public:
	static void Print_count()
	{
		cout << "Student constructed : " << count << endl;
	}
	student()
	{
		strcpy_s(Name, "No name");
		ID = 0;
		first = second = final = 0;
		count++;
		Print_count();
	}
};
int student::count = 0;
//*********************************************************
//1 - void f()
//{
//	int x = 0;
//	x++;
//	cout << x << endl;
//}
int main()
{
	/*1 - f();
	f();
	f();
	f();*/
	/*2 - cout << "\nConstruct 2 Objects\n";
	student S1, S2;
	cout << "\nConstruct 3 Objects\n";
	student S3[3];*/
	student::Print_count();
	cout << "\nConstruct 2 objects\n";
	student S1, S2;
	cout << "\nConstruct 3 Objects\n";
	student S3[3];
}