#include "web_url.h"

Web_url::Web_url(std::string url)
{
	this->url = url;
	State state = State::scheme;
	for (auto &ch : this->url) {
		if (state == State::scheme) {
			if (ch == '/') {
				state = State::authority1;
				authority += ch;
			} else {
				scheme += ch;
			}
		} else if (state == State::authority1) {
			state = State::authority2;
			authority += ch;
		} else if (state == State::authority2) {
			if (ch == '/') {
				state = State::path;
				path += ch;
			} else {
				authority += ch;
			}
		} else if (state == State::path) {
			path += ch;
		}
	}
}

std::string Web_url::get_url()
{
	return scheme + authority + path;
}

std::string Web_url::get_scheme()
{
	return scheme;
}

std::string Web_url::get_authority()
{
	return authority;
}

std::string Web_url::get_path()
{
	return path;
}
