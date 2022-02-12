#pragma once

#include <iostream>
#include <string>
#include <vector>

class Item
{
private:
	std::string name;
	long id;
	double price;
	int cnt;
public:
	Item(std::string name, long id, double price, int cnt);
	void set_name(std::string name);
	std::string get_name();
	void set_id(long id);
	long get_id();
	void set_price(double price);
	double get_price();
	void set_count(int cnt);
	int get_count();
};

class Store
{
private:
	std::vector<Item> items;
public:
	void add_item(Item item);
	std::vector<Item> get_items();
};

void print_store_info(Store store);

class Order
{
private:
	std::vector<Item> items;
public:
	void add_item(Item item);
	double get_total_price();
};
