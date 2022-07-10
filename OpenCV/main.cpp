#include <iostream>
#include "opencv2/opencv.hpp"
int main()
{
	cv::Mat img = cv::imread("C:\\Users\\yoonw\\Downloads\\lena.jpg", cv::IMREAD_GRAYSCALE);
	cv::imshow("img", img);
	cv::waitKey(0);
	return 0;
}