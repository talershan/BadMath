#include <iostream>
#include <iomanip>
using namespace std;

float average(float i1, float i2, float i3)//changed ints to floats to allow the user to enter decimals
{
	return (i1 + i2 + i3) / 3.0f;//can't forget the parenthesis  
}

int main()
{
	float n1 = 0, n2 = 0, n3 = 0, a;//changed to float for decimals and added a for easier organizing

	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;//fixed this

	a = average(n1, n2, n3);

	cout << setprecision(2) << fixed << "The average is " << a << endl; //added more precision since it's a float and the user can enter decimals now

	return 0;
}