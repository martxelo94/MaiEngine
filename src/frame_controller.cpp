#include <iostream>
#include <GLFW/glfw3.h>
#include "frame_controller.h"


FrameController fc;


void FrameController::init(){
	_frameCount = 0;
	_frameTime = _timeCount = _frameStartTime = 0.0f;
	_frameRate = targetFrameRate;
}

void FrameController::start_frame(){
	_frameStartTime = (float)glfwGetTime();
}

void FrameController::end_frame(){
	float targetFrameTime = 1.0f / targetFrameRate;
	_frameTime = (float)glfwGetTime() - _frameStartTime;

	while(_frameTime < targetFrameTime)
		_frameTime = (float)glfwGetTime() - _frameStartTime;

	_frameCount++;
	_frameRate = 1.0f / _frameTime;
	_timeCount += _frameTime;

}