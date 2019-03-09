#include "TXLib.h"

void drawCat (double leftX, double leftY, double sizeX, COLORREF color);
void drawHouse (double leftX, double leftY, double houseSize);
void drawSun (double centerX, double centerY, double radius);
void drawGround (double depth);
void drawCar (double leftX, double leftY, double carSize, COLORREF color);
void drawLeafyTree (double baseX, double baseY, double width, double height);
void drawConiferousTree (double baseX, double baseY, double width, double height);

int main()
    {
    txCreateWindow (800, 600);

    txSetFillColor (TX_LIGHTMAGENTA);
    txRectangle (0,0,800,600);

    drawGround(100);

    drawSun (500,105,50);

    drawHouse (420,500,150);

    drawCar(250,500,100,  TX_PINK);

    drawCat (650,455,70, TX_ORANGE);

    drawLeafyTree (150,500,50,200);

    drawConiferousTree (50,500,50,300);

    drawConiferousTree (770,500,40,130);

    return 0;

    }

void drawConiferousTree (double baseX, double baseY, double width, double height)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(baseX-0.15*width,baseY,baseX+width*0.15,baseY-height);
    txSetColor (TX_GREEN,5);
    txLine(baseX-0.15*width,baseY-height,baseX-0.5*width,baseY-0.8*height);
    txLine(baseX-0.15*width,baseY-0.9*height,baseX-0.5*width,baseY-0.7*height);
    txLine(baseX-0.15*width,baseY-0.8*height,baseX-0.5*width,baseY-0.6*height);
    txLine(baseX-0.15*width,baseY-0.7*height,baseX-0.5*width,baseY-0.5*height);
    txLine(baseX-0.15*width,baseY-0.6*height,baseX-0.5*width,baseY-0.4*height);
    txLine(baseX-0.15*width,baseY-0.5*height,baseX-0.5*width,baseY-0.3*height);
    txLine(baseX-0.15*width,baseY-0.4*height,baseX-0.5*width,baseY-0.2*height);
    txLine(baseX-0.15*width,baseY-0.3*height,baseX-0.5*width,baseY-0.1*height);

    txLine(baseX+0.15*width,baseY-height,baseX+0.5*width,baseY-0.8*height);
    txLine(baseX+0.15*width,baseY-0.9*height,baseX+0.5*width,baseY-0.7*height);
    txLine(baseX+0.15*width,baseY-0.8*height,baseX+0.5*width,baseY-0.6*height);
    txLine(baseX+0.15*width,baseY-0.7*height,baseX+0.5*width,baseY-0.5*height);
    txLine(baseX+0.15*width,baseY-0.6*height,baseX+0.5*width,baseY-0.4*height);
    txLine(baseX+0.15*width,baseY-0.5*height,baseX+0.5*width,baseY-0.3*height);
    txLine(baseX+0.15*width,baseY-0.4*height,baseX+0.5*width,baseY-0.2*height);
    txLine(baseX+0.15*width,baseY-0.3*height,baseX+0.5*width,baseY-0.1*height);
}

void drawLeafyTree (double baseX, double baseY, double width, double height)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(baseX-0.15*width,baseY,baseX+width*0.15,baseY-height);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle(baseX,baseY-height,width);
}

void drawCar (double leftX, double leftY, double carSize, COLORREF color)
{
    txSetFillColor(color);
    txCircle (leftX+carSize*0.2,leftY-0.2*carSize,0.2*carSize);
    txCircle (leftX+carSize*0.8,leftY-0.2*carSize,0.2*carSize);
    txRectangle (leftX-0.1*carSize,leftY-0.3*carSize,leftX+1.1*carSize,leftY-0.65*carSize);
}

void drawGround (double depth)
{
    txSetColor (TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle (0,800,800,600-depth);
}

void drawSun (double centerX, double centerY, double radius)
{
    txSetColor (TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle (centerX,centerY,radius);
    txLine (centerX+radius,centerY,centerX+2*radius,centerY);
    txLine (centerX+radius,centerY,centerX-2*radius,centerY);
    txLine (centerX,centerY+radius,centerX,centerY+2*radius);
    txLine (centerX,centerY-radius,centerX,centerY-2*radius);
}

void drawHouse (double leftX, double leftY, double houseSize)
{
    txSetColor (TX_BLACK,5);
    txSetFillColor (TX_RED);
    txRectangle (leftX,leftY,leftX+houseSize,leftY-houseSize);
    POINT roof [3] = {{leftX,leftY-houseSize},{leftX+houseSize*0.5,leftY-houseSize*1.5},{leftX+houseSize,leftY-houseSize}};
    txSetColor (TX_BLACK,5);
    txPolygon (roof, 3);
    txSetColor (TX_BLUE);
    txSetFillColor(TX_WHITE);
    txRectangle (leftX+houseSize*0.25,leftY-houseSize*0.25,leftX+houseSize*0.75,leftY-houseSize*0.75);
    txLine (leftX+houseSize*0.5,leftY-houseSize*0.25,leftX+houseSize*0.5,leftY-houseSize*0.75);
    txLine (leftX+houseSize*0.25,leftY-houseSize*0.5,leftX+houseSize*0.75,leftY-houseSize*0.5);
}

void drawCat (double leftX, double leftY, double sizeX, COLORREF color)
{
    double sizeY = sizeX/3;
    txSetColor (color);
    txSetFillColor (color);
    txEllipse (leftX, leftY,leftX+sizeX, leftY+sizeY);
    txCircle (leftX,leftY,0.2*sizeX);
    txRectangle (leftX+sizeX*0.2,leftY+sizeY*0.5,leftX+sizeX*0.3,leftY+2*sizeY);
    txRectangle (leftX+sizeX*0.7,leftY+sizeY*0.5,leftX+sizeX*0.8,leftY+2*sizeY);
}
