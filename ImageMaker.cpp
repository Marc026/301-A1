#include "ImageMaker.h"
#include <fstream>
#include <string>

// Your code goes here...
ImageMaker::ImageMaker() {
    width = 0;  //testing this
    height = 0;
    pen_red = 0;
    pen_green = 0;
    pen_blue = 0;
    SetWidth(MAX_WIDTH);
    SetHeight(MAX_HEIGHT);
    for(int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image[j][i][RED] = 255;
            image[j][i][GREEN] = 255;
            image[j][i][BLUE] = 255;
        }
    }
}

ImageMaker::ImageMaker(string filename) {

}

void ImageMaker::LoadImage(string filename) {
    string magic;
    ifstream imageInputFile;
    imageInputFile.open(filename);
    imageInputFile >> magic;
    imageInputFile >> width >> height;
    imageInputFile >> image[MAX_WIDTH][MAX_HEIGHT][3];  // writing to ofstream
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            imageInputFile >> image [j][i][RED];
            imageInputFile >> image [j][i][GREEN];
            imageInputFile >> image [j][i][BLUE];
        }
    }
}

void ImageMaker::SaveImage(string filename) {
    ofstream imageOutputFile;
    imageOutputFile.open(filename);
    imageOutputFile << "P3" << endl; // writing to ofstream
    imageOutputFile << height << " " << width << endl;
    imageOutputFile << MAX_COLOR << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            imageOutputFile << image [j][i][RED] << " ";
            imageOutputFile << image [j][i][GREEN] << " ";
            imageOutputFile << image [j][i][BLUE] << " ";
        }
        imageOutputFile << endl;
    }

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
