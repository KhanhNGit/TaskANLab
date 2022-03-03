#include "Convert.cpp"

class Color_To_Negative : public Convert_Image {
public:
	Color_To_Negative(std::string src) :Convert_Image(src){}
	void Display() {
		Mat image = imread(GetSrc(), IMREAD_COLOR);
		for (int i = 0;i < image.rows;i++) {
			for (int j = 0;j < image.cols;j++) {
				image.at<uchar>(i, j) = 255 - image.at<uchar>(i, j);
			}
		}
		namedWindow("Color_To_Negative", 1);
		imshow("Color_To_Negative", image);
		waitKey(0);
	}
};