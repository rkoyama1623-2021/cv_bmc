#include <iostream>
#include <chrono>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
    std::cout << cv::getBuildInformation() << std::endl;
#ifdef WITH_OPENCL
    std::cout << "Use OpenCL" << std::endl;
    Mat _input(3648, 5472, CV_8UC1); // 20M image
    UMat input, output;
    _input.copyTo(input);
#else
    Mat input(3648, 5472, CV_8UC1); // 20M image
    Mat output;
#endif
    std::chrono::system_clock::time_point  start, end;

    start = std::chrono::system_clock::now();
    for (unsigned int i=0; i<10;i++) {
        threshold(input, output, 0, 255, cv::THRESH_BINARY);
    }
    end = std::chrono::system_clock::now();
    double process_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    std::cout << "average process time: " << process_time << "[ms]"<< std::endl;

}
