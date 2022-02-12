#include "store.h"

Item::Item(std::string name, long id, double price, int cnt)
{
	this->name = name;
	this->id = id;
	if (price >= 0)
		this->price = price;
	else
		this->price = 0;
	if (this->cnt >= 0)
		this->cnt = cnt;
	else
		this->cnt = 0;
}

void Item::set_name(std::string name)
{
	this->name = name;
}

std::string Item::get_name()
{
	return name;
}

void Item::set_id(long id)
{
	this->id = id;
}

long Item::get_id()
{
	return id;
}

void Item::set_price(double price)
{
	if (price > 0) {
		this->price = price;
	}
}

double Item::get_price()
{
	return price;
}

void Item::set_count(int cnt)
{
	if (cnt >= 0) {
		this->cnt = cnt;
	}
}

int Item::get_count()
{
	return cnt;
}

void Store::add_item(Item item)
{
	items.push_back(item);
}

std::vector<Item> Store::get_items()
{
	return items;
}

void print_store_info(Store store)
{
	std::cout << "Store:\n";
	for (Item item : store.get_items()) {
		std::cout << item.get_name() << " x " << item.get_count() << '\n';
	}
}

void Order::add_item(Item item)
{
	items.push_back(item);
}

double Order::get_total_price()
{
	double total = 0;
	for (Item item : items) {
		total += item.get_price() * item.get_count();
	}
	return total;
}
