#include <iostream>
#include <string>

#include "web_url.h"
#include "camera_image.h"
#include "store.h"

void run_section_a()
{
	Web_url url {"https://example.com/about-us/"};
	std::cout << "url = " << url.get_url() << '\n';
	std::cout << "scheme = " << url.get_scheme() << '\n';
	std::cout << "authority = " << url.get_authority() << '\n';
	std::cout << "path = " << url.get_path() << '\n';
}

void run_section_b()
{
	Camera_image image;
	print_camera_image_info(image);
	Camera_image image2 {
		"mountains",
		"JPEG",
		"2022-01-01",
		1.5,
		"Khang",
		200,
		300,
		8,
		30,
		600,
		true,
	};
	std::cout << '\n';
	print_camera_image_info(image2);
	Camera_image image3 {
		"cats",
		"SVG",
		"2022-01-05",
		1.5,
		"Khang",
		-200,
		-300,
		0,
		-30,
		600,
		false,
	};
	std::cout << '\n';
	print_camera_image_info(image3);
}

void run_section_c()
{
	Item book {"Book", 1, 20, 1000};
	Item laptop {"Laptop", 2, 500, 2000};
	Item printer {"Printer", 3, 200, 3000};
	Store store;
	Item book_in_order {"Book", 1, 20, 2};
	Item laptop_in_order {"Laptop", 2, 500, 1};
	Order order;
	store.add_item(book);
	store.add_item(laptop);
	store.add_item(printer);
	print_store_info(store);
	order.add_item(book_in_order);
	order.add_item(laptop_in_order);
	std::cout << "\nTotal price:" << order.get_total_price() << '\n';
}

int main()
{
	std::cout << "Section A\n";
	std::cout << "=========\n";
	run_section_a();
	std::cout << "\nSection B\n";
	std::cout << "=========\n";
	run_section_b();
	std::cout << "\nSection C\n";
	std::cout << "=========\n";
	run_section_c();
	return 0;
}
