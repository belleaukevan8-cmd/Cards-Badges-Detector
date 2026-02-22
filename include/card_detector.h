# include/card_detector.h

#ifndef CARD_DETECTOR_H
#define CARD_DETECTOR_H

#include <opencv2/opencv.hpp>

// Structure to define a card
typedef struct {
    cv::Rect boundingBox;
    std::string cardType;
} Card;

// Function to detect cards in an image
std::vector<Card> detectCards(const cv::Mat& image);

// Function to draw detected cards on an image
void drawDetectedCards(cv::Mat& image, const std::vector<Card>& cards);

#endif // CARD_DETECTOR_H