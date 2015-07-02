#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;

int main(int argc, char** argv)
{
    cv::VideoCapture cap(0);
    if(!cap.isOpened())
        return -1;

    cv::namedWindow("video",1);
    for(;;)
    {
        cv::Mat frame;
        cap >> frame;
        cv::imshow("video",frame);
        if(cv::waitKey(30) >= 0) break;
    }

    return 0;
}
