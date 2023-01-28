#include "ImageMaker.h"

// Your code goes here...
ImageMaker::ImageMaker() {
    width = 0;
    height = 0;
    pen_red = 0;
    pen_green = 0;
    pen_blue = 0;
}

ImageMaker::ImageMaker(string filename) {

}

void ImageMaker::LoadImage(string filename) {

}

void ImageMaker::SaveImage(string filename) {

}

int ImageMaker::GetWidth() {
    return 0;
}

int ImageMaker::GetHeight() {
    return 0;
}

void ImageMaker::SetWidth(int width) {
    if(width < 0){
        throw "Width out of bounds";
    }
    this->width = width;
}

void ImageMaker::SetHeight(int height) {
    if(height < 0){
        throw "Height out of bounds";
    }
    this->height = height;
}

int ImageMaker::GetPenRed() {
    return pen_red;
}

int ImageMaker::GetPenGreen() {
    return pen_green;
}

int ImageMaker::GetPenBlue() {
    return pen_blue;
}

void ImageMaker::SetPenRed(int newR) {
    if  (newR != pen_red) {
        throw "Color value invalid";
    }
    else
        pen_red = newR;
}

void ImageMaker::SetPenGreen(int newG) {
    if (newG != pen_green) {
        throw "Color value invalid";
    }
    else
        pen_green = newG;
}

void ImageMaker::SetPenBlue(int newB) {
    if (newB != pen_blue) {
        throw "Color value invalid";
    }
    else
        pen_blue = newB;
}

void ImageMaker::DrawPixel(int x, int y) {

}

void ImageMaker::DrawRectangle(int x1, int y1, int x2, int y2) {

}

void ImageMaker::DrawLine(int x1, int y1, int x2, int y2) {

}

bool ImageMaker::PointInBounds(int x, int y) {
    return false;
}
