#include <iostream>

using namespace std;

int main()
{
	int n;

	setlocale(LC_ALL, "");

	cout << "введите число: ";
	cin >> n;

	if (n < 10) {
		cout << "это число меньше 10" << endl;
	}
	else if (n == 10)
	{
		cout << "это число равно 10" << endl;
	}
	else
	{
		cout << "это число больше 10" << endl;
	}
	return 0;
}