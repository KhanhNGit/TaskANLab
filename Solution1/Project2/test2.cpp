#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main()
{
    Mat img = imread("E:/Aimeddoc/ngothaingo2.jpg", IMREAD_GRAYSCALE);

    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            img.at<uchar>(i, j) = 255 - img.at<uchar>(i, j);
        }
    }
    namedWindow("negative image", WINDOW_AUTOSIZE);
    imshow("negative image", img);
    waitKey(0);
}