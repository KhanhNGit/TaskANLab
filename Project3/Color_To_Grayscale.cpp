#include "Convert.cpp"

class Color_To_Grayscale : public Convert_Image {
public:
	Color_To_Grayscale(std::string src) :Convert_Image(src) {}
	void Display() {
		Mat image = imread(GetSrc(), IMREAD_GRAYSCALE);
		namedWindow("Color_To_Grayscale", 1);
		imshow("Color_To_Grayscale", image);
		waitKey(0);
	}
};