#include "Convert.cpp"

class Grayscale_To_Negative : public Convert_Image {
public:
	Grayscale_To_Negative(std::string src) :Convert_Image(src){}
	void Display() {
		Mat image = imread(GetSrc(), IMREAD_GRAYSCALE);
		bitwise_not(image, image);
		namedWindow("Grayscale_To_Negative", 1);
		imshow("Grayscale_To_Negative", image);
		waitKey(0);
	}
};
