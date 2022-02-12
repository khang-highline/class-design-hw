#include "camera_image.h"

Camera_image::Camera_image()
{
	filename = "";
	type = "PNG";
	date = "";
	size = 0;
	author_name = "";
	width = 100;
	height = 100;
	aperture_size_denominator = 8;
	exposure_time_denominator = 30;
	iso_value = 600;
	flash_enabled = false;
}

void Camera_image::set_filename(std::string name)
{
	filename = name;
}

std::string Camera_image::get_filename()
{
	return filename;
}

void Camera_image::set_type(std::string type)
{
	if (type == "PNG" || type == "GIF" || type == "JPEG") {
		this->type = type;
	}
}

std::string Camera_image::get_type()
{
	return type;
}

void Camera_image::set_date(std::string date)
{
	this->date = date;
}

std::string Camera_image::get_date()
{
	return date;
}

void Camera_image::set_size(double size)
{
	if (size >= 0) {
		this->size = size;
	}
}

double Camera_image::get_size()
{
	return size;
}

void Camera_image::set_author_name(std::string name)
{
	author_name = name;
}

std::string Camera_image::get_author_name()
{
	return author_name;
}

void Camera_image::set_dimension(double width, double height)
{
	if (width > 0) {
		this->width = width;
	}
	if (height > 0) {
		this->height = height;
	}
}

std::string Camera_image::get_dimension()
{
	return std::to_string(width) + ":" + std::to_string(height);
}

void Camera_image::set_aperture_size(int denominator)
{
	if (denominator > 0) {
		aperture_size_denominator = denominator;
	}
}

std::string Camera_image::get_aperture_size()
{
	return "f/" + std::to_string(aperture_size_denominator);
}

void Camera_image::set_exposure_time(int denominator)
{
	if (denominator > 0) {
		exposure_time_denominator = denominator;
	}
}

std::string Camera_image::get_exposure_time()
{
	return "1/" + std::to_string(exposure_time_denominator);
}

void Camera_image::set_iso_value(int value)
{
	iso_value = value;
}

int Camera_image::get_iso_value()
{
	return iso_value;
}

void Camera_image::set_flash_enabled(bool enabled)
{
	flash_enabled = enabled;
}

bool Camera_image::is_flash_enabled()
{
	return flash_enabled;
}

void print_camera_image_info(Camera_image image)
{
	std::cout << "File Name: " << image.get_filename() << '\n';
	std::cout << "Image Type: " << image.get_type() << '\n';
	std::cout << "Date Created: " << image.get_date() << '\n';
	std::cout << "Size (MB): " << image.get_size() << '\n';
	std::cout << "Author Name: " << image.get_author_name() << '\n';
	std::cout << "Image Dimensions: " << image.get_dimension() << '\n';
	std::cout << "Aperture Size: " << image.get_aperture_size() << '\n';
	std::cout << "Exposure time: " << image.get_exposure_time() << '\n';
	std::cout << "ISO value: " << image.get_iso_value() << '\n';
	std::cout << "Flash enabled: ";
	if (image.is_flash_enabled())
		std::cout << "true\n";
	else
		std::cout << "false\n";
}
