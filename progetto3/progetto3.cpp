

#include <iostream>
using namespace std;


int main()
{
	int number;
	cout << "please insert number ";
	cin >> number;
	if (number % 2 == 0) {
		cout << "even number" << endl;

	}
	else {
		cout << "odd number" << endl;
	}
	int lato1, lato2, lato3;
	cout << "insert 3 number";
	cin >> lato1 >> lato2 >> lato3;
	if (lato1 == lato2 && lato2 == lato3) {
		cout << "triangle equilatero"<<endl;
	}
	else if (lato1 != lato2 && lato2 != lato3 && lato3 != lato1) {
		cout << "scaleno" <<endl;
	}
	else
		cout << "iso" <<endl;
	cout << "bye";
	system("pause>0");
}

 