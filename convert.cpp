#include <iostream>
using namespace std;

int main()
{
	double hrn;

	cout << "Enter hrn : ";
	cin >> hrn;

	double usd = hrn / 29;
	double eur = hrn / 32;

	cout << "UAH to USD : " << usd << "\n";
	cout << "EUR to USD : " << eur << "\n";

	return 0;
}