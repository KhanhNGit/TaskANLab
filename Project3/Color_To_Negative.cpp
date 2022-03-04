#include "Convert.cpp"

class Color_To_Negative : public Convert_Image {
public:
	Color_To_Negative(std::string src) :Convert_Image(src){}
	void Display() {
		Mat image = imread(GetSrc(), IMREAD_COLOR);
		bitwise_not(image, image);
		namedWindow("Color_To_Negative", 1);
		imshow("Color_To_Negative", image);
		waitKey(0);
	}
};
