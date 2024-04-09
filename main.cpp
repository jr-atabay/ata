#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, sum;

	cout << "Введите 2 числа: " << endl;
	cin >> a >> b;

	cout << "Выберите выражения: " << endl <<
		"1. сложения " << endl <<
		"2. вычитаня " << endl <<
		"3. умножения" << endl <<
		"4. деления " << endl;

	cin >> sum;

	switch (sum)
	{
	case 1:
		cout << a + b << endl;
		break;

	case 2:
		cout << a - b << endl;
		break;

	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a / b << endl;
		break;

	default:
		cout << "ошибка! выберите вырежения!";
		break;
	}
}