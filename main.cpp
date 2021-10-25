#include <iostream>
#include "Goods.h"
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Введите название товара: ";
	cin >> name;
	string date;
	cout << "Введите дату поступления товара: ";
	cin >> date;
	int price;
	cout << "Введите цену товара: ";
	cin >> price;
	int count;
	cout << "Введите количество позиций товара: ";
	cin >> count;
	int number;
	cout << "Введите номер накладной: ";
	cin >> number;
	Goods* A = new Goods(name, date, price, count, number);
	char c=' ';
	while (c != '4') {
		cout << "Выберите пункт меню: \n";
		cout << "1. Изменить цену товара.\n";
		cout << "2. Изменить количество позиций товара.\n";
		cout << "3. Вывести информацию о товаре.\n";
		cout << "4. Завершить работу программы.\n";
		cin >> c;
		switch (c) {
		case '1': {
			cout << "Введите новую цену:\n";
			cin >> price;
			A->changePrice(price);
			break;
		}
		case '2': {
			cout << "1. Увеличить количество позиций.\n";
			cout << "2. Уменьшить количество позиций\n";
			char t;
			int diff;
			cin >> t;
			if (t == '1') {
				cout << "Введите на сколько увеличить количество позиций:\n";
				cin >> diff;
				A->changeCount(1, diff);
			}
			else {
				cout << "Введите на сколько уменьшить количество позиций:\n";
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