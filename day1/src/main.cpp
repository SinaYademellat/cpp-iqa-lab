#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("test.jpg", cv::IMREAD_COLOR);

    // Check if the image was successfully loaded
    if (image.empty()) {
        std::cerr << "Error: Image 'test.jpg' not found! Please place an image with this name next to the executable." << std::endl;
        return -1;
    }

    // Print image specifications
    std::cout << "--- Loaded Image Specifications ---" << std::endl;
    std::cout << "Width    : " << image.cols << " pixels" << std::endl;
    std::cout << "Height   : " << image.rows << " pixels" << std::endl;
    std::cout << "Channels : " << image.channels() << " (e.g., 3 for BGR)" << std::endl;

    return 0;
}