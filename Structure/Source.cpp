#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
struct exam {
	float first;
	float second;
	float final;
	void f() {
		cout << "Struct\n";
	}
};
class subject
{
	char name[10];
	exam Exam;
public:
	subject()
	{
		strcpy_s(name, "No name");
		Exam = { 0,0,0 };
	}
	subject(char n[], float fi1, float se2, float fi)
	{
		Exam.f();
		strcpy_s(name, n);
		Exam = { fi1,se2,fi };
	}
	float total()
	{
		return Exam.first + Exam.second + Exam.final;
	}
	void print()
	{
		cout << "The Subject is " << name << "\n" <<
			"First Exam = " << Exam.first << "\n" <<
			"Second Exam = " << Exam.second << "\n" <<
			"Final Exam = " << Exam.final << "\n" <<
			"The Total = " << total() << endl;
	}
};
int main()
{
	subject E((char*)"OPP", 25, 24, 49);
	E.print();
}