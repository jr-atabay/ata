#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, sum;

	cout << "������� 2 �����: " << endl;
	cin >> a >> b;

	cout << "�������� ���������: " << endl <<
		"1. �������� " << endl <<
		"2. �������� " << endl <<
		"3. ���������" << endl <<
		"4. ������� " << endl;

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
		cout << "������! �������� ���������!";
		break;
	}
}