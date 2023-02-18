#include <iostream>
#include <string>

#include "frame_controller.h"

void Foo();
void Foo();

int variable;

int main() {
	int frames = 0;
	bool run = true;
	std::string input;

	fc._time = 0.0;
	
	Foo();
	while (run) {
		std::cout << frames++ << std::endl;
		std::cin >> input;
		run = input != "0";
	}

	return 0;
}
void Foo() {}
