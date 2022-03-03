#pragma once
#include <opencv2/opencv.hpp>

using namespace cv;

class Convert_Image {
private:
	std::string src;
public:
	Convert_Image(std::string src) {
		this->src = src;
	}
	std::string GetSrc() {
		return src;
	}
	virtual void Display() = 0;
};
