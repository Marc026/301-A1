//
// Assignment Created by Varick Erickson
//

#ifndef IMAGEMAKER_H
#define IMAGEMAKER_H

#include <string>
#include <cmath>
#include <fstream>

const int MAX_WIDTH = 800;
const int MAX_HEIGHT = 800;
const int MAX_COLOR = 255;
enum COLOR { RED, GREEN, BLUE };

using namespace std;

//  Please put your pre and post comments in this file. See page 139 in the textbook

class ImageMaker
{
public:
    //Function:
    // Default Constructor sets the default values to 0
    //Precondition:
    // None
    //Postcondition:
    // sets default sizes of width, height, and pen colors to 0. throw error if default sizes are not set to 0
    ImageMaker();

    //Function:
    // 2nd Constructor to open and a certain file and set the default values for each variable
    //Precondition:
    // A ofstream and ifstream object must have been initialized in the Save/LoadImage function
    //Width, height, as well as max color value and pixel color value must be positive and within bounds.
    //Postcondition:
    // returns and saves image that is loaded and copied into a copy file with the exact values. throw error
    //if default sizes are not 0, color values or image matrix variables are not max or preset variables
    ImageMaker(string filename);
    // Opens image with filename and stores information into

    //Function:
    // Loads image and copies down all the values and correct information from opened file
    //Precondition:
    // ifstream object has been initialized. color, size, and pixel color values must be within bounds
    //and positive integers.
    //Postcondition:
    // file opened and has populated all pixel color values and header information into the image matrix. throw error
    //if header variables or pixel color values are not correct
    void LoadImage(string filename);

    //Function:
    // Saves image after population image matrix with correct values
    //Precondition:
    // ofstream object has been initialized. color, size, and pixel color values must be within bounds
    //and positive integers.
    //Postcondition:
    // file saved and populated all correct pixel color values and header information
    // into the image matrix. throw error if header variables or pixel color values are not correct
    void SaveImage(string filename);

    // Size functions
    //Function:
    // retrieves width
    //Precondition:
    // positive integer and within bounds of MAX_WIDTH
    //Postcondition:
    // retrieves and sets width. throw error that default size is not 0
    int GetWidth();

    //Function:
    // retrieves height
    //Precondition:
    // positive integer and within bounds of MAX_HEIGHT
    //Postcondition:
    // retrieves and sets height. throw error that default size is not 0
    int GetHeight();

    //Function:
    // set width variable
    //Precondition:
    // GetWidth function must have retrieved positive integer
    //Postcondition:
    // sets width size to width variable. throw error that default size is not GetWidth
    void SetWidth(int width);

    //Function:
    // set height variable
    //Precondition:
    // GetHeight function must have retrieved positive integer
    //Postcondition:
    // sets height size to height variable. throw error that default size is not GetHeight
    void SetHeight(int height);

    // Color functions
    //Function:
    // get the pen color Red
    //Precondition:
    // positive integer and within bounds of MAX_COLOR
    //Postcondition:
    // Sets the pen color red to newR otherwise throw error that the pen color is not newR
    int GetPenRed();

    //Function:
    // get the pen color Green
    //Precondition:
    // positive integer and within bounds of MAX_COLOR
    //Postcondition:
    // Sets the pen color green to newG otherwise throw error that the pen color is not newG
    int GetPenGreen();

    //Function:
    // get the pen color Blue
    //Precondition:
    // positive integer and within bounds of MAX_COLOR
    //Postcondition:
    // Sets the pen color blue to newB otherwise throw error that the pen color is not newB
    int GetPenBlue();

    //Function:
    // set pen color variable to newR
    //Precondition:
    // pen_red function must have retrieved positive integer
    //Postcondition:
    // sets pencolor to newR variable. throw error that it is not equal to the pen color
    void SetPenRed(int newR);

    //Function:
    // set pen color variable to newG
    //Precondition:
    // pen_red function must have retrieved positive integer
    //Postcondition:
    // sets pencolor to newR variable. throw error that it is not equal to the pen color
    void SetPenGreen(int newG);

    //Function:
    // set pen color variable to newB
    //Precondition:
    // pen_red function must have retrieved positive integer
    //Postcondition:
    // sets pencolor to newR variable. throw error that it is not equal to the pen color
    void SetPenBlue(int newB);

    // Drawing methods
    // These methods will use the current red, green, blue values of the pen
    //Function:
    //draws pixel onto the canvas using the pencolors
    //Precondition:
    //pen colors must be set, image matrix must be initialized, and image must be loaded
    //Postcondition:
    //Pixel was drawn on a certain point. Throw error that point was out of bounds.
    void DrawPixel(int x, int y);

    //Function:
    //draws rectangle onto the image matrix
    //Precondition:
    //DrawPixel must have passed and two points must be calculated to draw the rectangle.
    //Postcondition:
    //Rectangle is drawn. throw error if point is out of bounds
    void DrawRectangle(int x1, int y1, int x2, int y2);

    //Function:
    //draws line onto the image matrix
    //Precondition:
    //DrawPixel and DrawRectangle must have passed and able to draw on the image matrix.
    //Postcondition:
    //Line is drawn. throw error if point is out of bounds
    void DrawLine(int x1, int y1, int x2, int y2);

private:
    string magic;
    int width;
    int height;
    int pen_red;    // Used by draw functions
    int pen_green;  // Used by draw functions
    int pen_blue;   // Used by draw functions
    bool PointInBounds(int x, int y);  // Not a bad idea to implement

               //   x          y
    short image[MAX_WIDTH][MAX_HEIGHT][3];
};

#endif //IMAGEMAKER_H
