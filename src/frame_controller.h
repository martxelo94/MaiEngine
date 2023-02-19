#ifndef FRAME_CONTROLLER_H
#define FRAME_CONTROLLER_H



class FrameController {
private:
	int _frameCount;
	float _frameTime;
	float _timeCount;
	float _frameRate;
	float _frameStartTime;

public:
	float targetFrameRate;
	const int& frameCount = _frameCount;
	const float& frameTime = _frameTime;
	const float& timeCount = _timeCount;
	const float& frameRate = _frameRate;

	void init();
	void start_frame();
	void end_frame();
};

extern FrameController fc;

#endif