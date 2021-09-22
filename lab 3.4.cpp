//lab 3.4.cpp
//Федик Віталій
//Лабораторна робота №3.4
//Розгалуження, задане плоскою фігурою
//Варіант 11

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; //вхідний аргумент
	double y; //вхідний аргумент
	double R; //вхідний аргумент

	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "R="; cin >> R;

	//розгалуження в повній формі
	if (y <= 0 && y >= -x - R && x <= 0)
		cout << "Yes" << endl;
	else
		if (y <= sqrt(R * R - x * x) && y >= 0 && x <= R && x>=0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	cin.get();
	return 0;
}
