#include "Convert.cpp"

class Grayscale_To_Negative : public Convert_Image {
public:
	Grayscale_To_Negative(std::string src) :Convert_Image(src){}
	void Display() {
		Mat image = imread(GetSrc(), IMREAD_GRAYSCALE);
		for (int i = 0;i < image.rows;i++) {
			for (int j = 0;j < image.cols;j++) {
				image.at<uchar>(i, j) = 255 - image.at<uchar>(i, j);
			}
		}
		namedWindow("Grayscale_To_Negative", 1);
		imshow("Grayscale_To_Negative", image);
		waitKey(0);
	}
};