#include "OpenCVHelloWorld.h"



void OpenCVHelloWorld::ReadImage(std::string path)

{ 
	cv::Mat image = cv::imread(path); 
	cv::Mat gray;
	cv::cvtColor(image, gray, CV_BGR2GRAY);

	cv::namedWindow("test", 0);
	cv::imshow("test", image);
	cv::waitKey();

}



