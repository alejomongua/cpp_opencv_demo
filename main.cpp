#include <iostream>
#include <opencv2/opencv.hpp>

#define UNICODE
#define _UNICODE

int main(int, char **)
{
    std::cout << "Hello, world!" << std::endl;
    cv::VideoCapture cap(0);

    if (!cap.isOpened())
    {
        std::cout << "cannot open camera" << std::endl;
    }

    cv::Mat image;

    cap >> image;

    cv::imshow("Image", image);
    cv::waitKey();
}
