#pragma once
#include <iostream>
class Goods
{
	std::string name;
	std::string date;
	int price;
	int count;
	int number;
public:
	Goods();
	Goods(std::string _name, std::string _date, int _price, int _count, int _number);
	~Goods() {};
	std::string getName();
	std::string getDate();
	int getPrice();
	int getCount();
	int getNumber();
	void changePrice(int _price);
	void changeCount(bool increase, int _count);
	std::string toString();
};

