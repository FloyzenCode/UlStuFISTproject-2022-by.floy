#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

namespace color_text {
	class ColorText {
	public:
		void cout_yellow(int yellow) {
			cout << "\x1b[33m" << yellow << "\x1b[0m";
		}

		void cout_red(int red) {
			cout << "\x1b[31m" << red << "\x1b[0m";
		}

		void cout_green(int green) {
			cout << "\x1b[32m" << green << "\x1b[0m";
		}

		void cout_purple(int purple) {
			cout << "\x1b[35m" << purple << "\x1b[0m";
		}

		void cout_blue(int blue) {
			cout << "\x1b[34m" << blue << "\x1b[0m";
		}

		void cout_cyan(int cyan) {
			cout << "\x1b[36m" << cyan << "\x1b[0m";
		}

	};
}