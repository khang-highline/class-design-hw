#pragma once

#include <string>

enum class State {
	scheme,
	authority1,
	authority2,
	path,
};

class Web_url {
private:
	std::string url;
	std::string scheme;
	std::string authority;
	std::string path;
public:
	Web_url(std::string url);
	std::string get_url();
	std::string get_scheme();
	std::string get_authority();
	std::string get_path();
};
