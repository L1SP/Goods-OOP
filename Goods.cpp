#include <iostream>
#include <string>
#include "Goods.h"
Goods::Goods() {
	name = "none";
	date = "1970.01.01";
	price = 0;
	count = 0;
	number = 0;
}
Goods::Goods(std::string _name, std::string _date, int _price, int _count, int _number) {
	name = _name;
	date = _date;
	price = _price;
	count = _count;
	number = _number;
}
std::string Goods::getName() {
	return name;
}
std::string Goods::getDate() {
	return date;
}
int Goods::getPrice() {
	return price;
}
int Goods::getCount() {
	return count;
}
int Goods::getNumber() {
	return number;
}
void Goods::changePrice(int _price) {
	price = _price;
}
void Goods::changeCount(bool increase, int _count) {
	if (increase)
		count += _count;
	else
		count -= _count;
}
std::string Goods::toString() {
	std::string ans = "Товар: "+name+"\nВ наличии: "+std::to_string(count)+"\nЦена за единицу товара: "+std::to_string(price);
	ans += "\nДата поступления: "+date+"\nНомер накладной: "+std::to_string(number);
	return ans;
}
