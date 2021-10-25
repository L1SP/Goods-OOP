#include <iostream>
#include "Goods.h"
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "������� �������� ������: ";
	cin >> name;
	string date;
	cout << "������� ���� ����������� ������: ";
	cin >> date;
	int price;
	cout << "������� ���� ������: ";
	cin >> price;
	int count;
	cout << "������� ���������� ������� ������: ";
	cin >> count;
	int number;
	cout << "������� ����� ���������: ";
	cin >> number;
	Goods* A = new Goods(name, date, price, count, number);
	char c=' ';
	while (c != '4') {
		cout << "�������� ����� ����: \n";
		cout << "1. �������� ���� ������.\n";
		cout << "2. �������� ���������� ������� ������.\n";
		cout << "3. ������� ���������� � ������.\n";
		cout << "4. ��������� ������ ���������.\n";
		cin >> c;
		switch (c) {
		case '1': {
			cout << "������� ����� ����:\n";
			cin >> price;
			A->changePrice(price);
			break;
		}
		case '2': {
			cout << "1. ��������� ���������� �������.\n";
			cout << "2. ��������� ���������� �������\n";
			char t;
			int diff;
			cin >> t;
			if (t == '1') {
				cout << "������� �� ������� ��������� ���������� �������:\n";
				cin >> diff;
				A->changeCount(1, diff);
			}
			else {
				cout << "������� �� ������� ��������� ���������� �������:\n";
				cin >> diff;
				A->changeCount(0, diff);
			}
			break;

		}
		case '3':
			cout << A->toString() << '\n';
			break;
		}
	}
	delete A;
	return 0;
}