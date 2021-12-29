#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
    std::cout << "hello world!" << std::endl;
    cv::Mat image = cv::imread("lenna.jpeg", cv::IMREAD_GRAYSCALE);
    if(image.empty()){
        std::cerr << "File not found." << std::endl;
        return 1;
    }

    cv::namedWindow("window", cv::WINDOW_AUTOSIZE);
    cv::imshow("window", image);
    cv::waitKey(0);
    return 0;
}