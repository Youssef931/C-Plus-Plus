#include <iostream>
using namespace std;
string Wd[7] = { "sat","sun","mon","tue","wed","thur","fri" };
//******************************************************
//enum Week { sat = 1, sun, mon, tue, wed, thur, fri };
//******************************************************
enum Week { sat = 1, sun, mon, tue, wed, thur, fri };
class Weekc {
	Week Wa[7];
public:
	void set_Day(Week W[])
	{
		for (size_t i = 0; i < 7; i++)
		{
			Wa[i] = W[i];
		}
	}
	void p()
	{
		for (size_t i = 0; i < 7; i++)
		{
			cout << "The number of Day" << Wd[i] << " = " << Wa[i] << endl;
		}
	}
};
int main()
{
	
	/*Week W[7] = { sat,sun,mon,tue,wed,thur,fri };
	for (size_t i = 0; i < 7; i++)
	{
		cout
			<< W[i] << endl;
	}*/
	/*string Wd[7]={"sat","sun","mon","tue","wed","thur","fri"};
	Week W[7] = { sat,sun,mon,tue,wed,thur,fri };
	for (size_t i = 0; i < 7; i++)
	{
		cout << W[i] << " - " << Wd[i] << endl;
	}*/
	//***************************************************
	Week D[7] = { sat,sun,mon,tue,wed,thur,fri };
	Weekc g;
	g.set_Day(D);
	g.p();
}