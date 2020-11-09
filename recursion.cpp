#include<iostream>

using namespace std;

double recursion(int, double);

int main()
{
	int x{};
	double balance{ 0.01 };

	cout << "enter number of days: ";
	cin >> x;

	balance = recursion(x, balance);
	cout << endl << balance;

	return 0;
}

double recursion(int days, double balance)
{
	if (days <= 1)
		return balance;
	else {
		balance = 2 * recursion(days - 1, balance);
		return balance;
	}
}
