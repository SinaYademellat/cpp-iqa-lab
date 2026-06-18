#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("test.jpg", cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cerr << "Error: Image 'test.jpg' not found! Please place an image with this name next to the executable." << std::endl;
        return -1;
    }

    cv::imshow("B", image);
    std::cout<< "----" << std::endl;
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}

// export QT_QPA_PLATFORM=xcb