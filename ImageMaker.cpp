#include "ImageMaker.h"
#include <fstream>
#include <string>

// Your code goes here...
ImageMaker::ImageMaker() {
    width = 0;              //Setting initial width to 0 in default constructor
    height = 0;             //Setting initial height to 0 in default constructor
    pen_red = 0;            //Setting pen colors to 0 in default constructor
    pen_green = 0;
    pen_blue = 0;
    SetWidth(MAX_WIDTH);    //setting width to the max for the canvas
    SetHeight(MAX_HEIGHT);
    for(int i = 0; i < height; i++) {       //Populating the pixel color values to white(max color value)
        for (int j = 0; j < width; j++) {   //to make canvas white
            image[j][i][RED] = 255;
            image[j][i][GREEN] = 255;
            image[j][i][BLUE] = 255;
        }
    }
}

ImageMaker::ImageMaker(string filename) {

}

void ImageMaker::LoadImage(string filename) {
    string magic;                                       //string for P3 to be used in
    ifstream imageInputFile;                            //initialized ifstream object
    imageInputFile.open(filename);                    //opens file
    imageInputFile >> magic;                            //scans file for the first text and determines image is in RGB
    imageInputFile >> width >> height;                  //scans file for the size of the image
    imageInputFile >> image[MAX_WIDTH][MAX_HEIGHT][3];  // writing to ofstream
    for(int i = 0; i < height; i++){                    //nested for loop to populate pixel color values
        for(int j = 0; j < width; j++){
            imageInputFile >> image [j][i][RED];
            imageInputFile >> image [j][i][GREEN];
            imageInputFile >> image [j][i][BLUE];
        }
    }
}

void ImageMaker::SaveImage(string filename) {
    ofstream imageOutputFile;                           //initialized ifstream object
    imageOutputFile.open(filename);                  //opens file
    imageOutputFile << "P3" << endl;                    // writing P3 to ofstream for image to be in RGB
    imageOutputFile << height << " " << width << endl;  //saves W&H values to determine image size
    imageOutputFile << MAX_COLOR << endl;               //puts down max color value for pixels
    for(int i = 0; i < height; i++){                    //nested for loop to populate pixel color values
        for(int j = 0; j < width; j++){
            imageOutputFile << image [j][i][RED] << " ";
            imageOutputFile << image [j][i][GREEN] << " ";
            imageOutputFile << image [j][i][BLUE] << " ";
        }
        imageOutputFile << endl;
    }

}

int ImageMaker::GetWidth() {                            //Gets the width for the image size
    return 0;
}

int ImageMaker::GetHeight() {                           //Gets the height for the image size
    return 0;
}

void ImageMaker::SetWidth(int width) {                  //checks for width if it is in bounds or not
    if(width < 0){
        throw "Width out of bounds";
    }
    this->width = width;
}

void ImageMaker::SetHeight(int height) {                //checks for height if it is in bounds or not
    if(height < 0){
        throw "Height out of bounds";
    }
    this->height = height;
}

int ImageMaker::GetPenRed() {                           //sets pen color to 0
    return pen_red;
}

int ImageMaker::GetPenGreen() {                         //sets pen color to 0
    return pen_green;
}

int ImageMaker::GetPenBlue() {                          //sets pen color to 0
    return pen_blue;
}

void ImageMaker::SetPenRed(int newR) {                  //if pen color is not in bounds of color, throw error
    if  (newR != pen_red) {                             //else set it to the pen color
        throw "Color value invalid";
    }
    else
        pen_red = newR;
}

void ImageMaker::SetPenGreen(int newG) {                //if pen color is not in bounds of color, throw error
    if (newG != pen_green) {                            //else set it to the pen color
        throw "Color value invalid";
    }
    else
        pen_green = newG;
}

void ImageMaker::SetPenBlue(int newB) {                 //if pen color is not in bounds of color, throw error
    if (newB != pen_blue) {                             //else set it to the pen color
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