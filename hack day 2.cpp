#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	int i=4;
	double d=4.0;
	string s="Hackerrank ";
	
	int input_i;
	double input_d;
	string input_s;
	
	cin >> input_i;
	cin >> input_d;
	//cin >> s2;
	cin.sync();
	getline(cin, input_s);
	
	cout << i+input_i << endl;
	cout << fixed << setprecision(1) << d+input_d << endl;
	
	s = s + input_s;
	cout << s;	
}
