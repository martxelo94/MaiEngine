#include <iostream>
#include <string>

#include "frame_controller.h"


int main() {
	bool run = true;

	fc.init();
	fc.targetFrameRate = 60;

	while (run) {
		fc.start_frame();

		// AQUI OCURRE TODO
		std::cout << "Hola" << std::endl;
		std::cout << fc.frameTime << std::endl;
		std::cout << fc.frameRate << std::endl;

		fc.end_frame();
	}

	return 0;
}
