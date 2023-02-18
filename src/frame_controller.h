#ifndef FRAME_CONTROLLER_H
#define FRAME_CONTROLLER_H



class FrameController {
private:
	int _frameCount;
	float _deltaTime;
	float _timeCount;
	float _frameRate;
	float _frameStartTime;
public:
	const int& frameCount = _frameCount;
	const float& deltaTime = _deltaTime;
	const float& timeCount = _timeCount;
	const float& frameRate = _frameRate;

	void init();
	void start_frame();
	void end_frame();
};

extern FrameController fc;

#endif