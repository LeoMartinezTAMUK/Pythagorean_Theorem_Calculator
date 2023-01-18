#include <iostream>
#include <cmath>

using namespace std;

void pythagorean_theoremA();
void pythagorean_theoremB();
void pythagorean_theoremC();

int main() 
{
	char variable_to_solve;

	cout << "Pythagorean Theorem Caclulator\n" << " \n";

	cout << "What side are you looking for? (a,b,or c) \n";
	cin >> variable_to_solve;

	switch (variable_to_solve)
	{
	case 'a': 

		pythagorean_theoremA();
			break;

	case 'b' :

		pythagorean_theoremB();
			break;

	case 'c' :

		pythagorean_theoremC();
			break;

	default:

		char R;

		cout << "\nInvalid value, press R followed by Enter to restart the program if you want to restart.\n";
		cout << "Otherwise, press any other key followed by Enter to exit the program\n";
		cin >> R;

		if (R == 'R' || R == 'r')
		{
			cout << "\n\n";
			main();
		}

		break;
	}

	
}

void pythagorean_theoremA() 
{
	double a;
	double b;
	double c;

	cout << "\nEnter a value for 'b': \n";
	cin >> b;
	cout << "\nEnter a value for 'c': \n";
	cin >> c;

	a = sqrt(pow(c, 2) - pow(b, 2));
	cout << "\nThe value of 'a' is: " << a << endl;
	
	system("pause");

}

void pythagorean_theoremB()
{
	double a;
	double b;
	double c;

	cout << "\nEnter a value for 'a': \n";
	cin >> a;
	cout << "\nEnter a value for 'c': \n";
	cin >> c;

	b = sqrt(pow(c, 2) - pow(a, 2));
	cout << "\nThe value of 'b' is: " << b << endl;

	system("pause");

}

void pythagorean_theoremC()
{
	double a;
	double b;
	double c;

	cout << "\nEnter a value for 'a': \n";
	cin >> a;
	cout << "\nEnter a value for 'b': \n";
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "\nThe value of 'c' is: " << c << endl;

	system("pause");

}