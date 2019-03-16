#include "TXLib.h"

void drawCat (int leftX, int leftY, int sizeX, COLORREF color);
void drawHouse (int leftX, int leftY, int houseSize);
void drawSun (int centerX, int centerY, int radius);
void drawGround (int depth);
void drawCar (int leftX, int leftY, int carSize, COLORREF color);
void drawLeafyTree (int X, int Y, int width, int height);
void drawConiferousTree (int X, int Y, int width, int height);

int main()
{
    txCreateWindow (800, 600);

    txSetFillColor (TX_LIGHTMAGENTA);
    txRectangle (0, 0, 800, 600);

    drawGround (100);

    drawSun (500, 105, 50);

    drawHouse (420, 500, 150);

    drawCar(250, 500, 100, TX_PINK);

    drawCat (650, 455, 70, TX_ORANGE);

    drawLeafyTree (150, 500, 50, 200);

    drawConiferousTree (50, 500, 50, 300);

    drawConiferousTree (770, 500, 40, 130);

    return 0;
}

void drawConiferousTree (int X, int Y, int width, int height)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(X-0.15*width, Y, X+0.15*width, Y-height);
    txSetColor (TX_GREEN, 5);
    txLine(X-0.15*width, Y-1.0*height, X-0.5*width, Y-0.8*height);
    txLine(X-0.15*width, Y-0.9*height, X-0.5*width, Y-0.7*height);
    txLine(X-0.15*width, Y-0.8*height, X-0.5*width, Y-0.6*height);
    txLine(X-0.15*width, Y-0.7*height, X-0.5*width, Y-0.5*height);
    txLine(X-0.15*width, Y-0.6*height, X-0.5*width, Y-0.4*height);
    txLine(X-0.15*width, Y-0.5*height, X-0.5*width, Y-0.3*height);
    txLine(X-0.15*width, Y-0.4*height, X-0.5*width, Y-0.2*height);
    txLine(X-0.15*width, Y-0.3*height, X-0.5*width, Y-0.1*height);
    txLine(X+0.15*width, Y-1.0*height, X+0.5*width, Y-0.8*height);
    txLine(X+0.15*width, Y-0.9*height, X+0.5*width, Y-0.7*height);
    txLine(X+0.15*width, Y-0.8*height, X+0.5*width, Y-0.6*height);
    txLine(X+0.15*width, Y-0.7*height, X+0.5*width, Y-0.5*height);
    txLine(X+0.15*width, Y-0.6*height, X+0.5*width, Y-0.4*height);
    txLine(X+0.15*width, Y-0.5*height, X+0.5*width, Y-0.3*height);
    txLine(X+0.15*width, Y-0.4*height, X+0.5*width, Y-0.2*height);
    txLine(X+0.15*width, Y-0.3*height, X+0.5*width, Y-0.1*height);
}

void drawLeafyTree (int X, int Y, int width, int height)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    POINT trunk [4] = {{X-0.15*width, Y}, {X+0.15*width, Y}, {X+0.15*width, Y-height}, {X-0.15*width, Y-height}};
    txPolygon (trunk, 4);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle(X, Y-height, width);
}

void drawCar (int leftX, int leftY, int carSize, COLORREF color)
{
    txSetFillColor(color);
    txCircle (leftX+carSize*0.2, leftY-0.2*carSize, 0.2*carSize);
    txCircle (leftX+carSize*0.8, leftY-0.2*carSize, 0.2*carSize);
    txRectangle (leftX-0.1*carSize, leftY-0.3*carSize, leftX+1.1*carSize, leftY-0.65*carSize);
}

void drawGround (int depth)
{
    txSetColor (TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle (0, 800, 800, 600-depth);
}

void drawSun (int centerX, int centerY, int radius)
{
    txSetColor (TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle (centerX, centerY, radius);
    txLine (centerX+radius, centerY,        centerX+2*radius, centerY);
    txLine (centerX+radius, centerY,        centerX-2*radius, centerY);
    txLine (centerX,        centerY+radius, centerX,          centerY+2*radius);
    txLine (centerX,        centerY-radius, centerX,          centerY-2*radius);
}

void drawHouse (int leftX, int leftY, int houseSize)
{
    txSetColor (TX_BLACK, 5);
    txSetFillColor (TX_RED);
    txRectangle (leftX, leftY, leftX+houseSize, leftY-houseSize);
    POINT roof [3] = {{leftX, leftY-houseSize}, {leftX+houseSize*0.5, leftY-houseSize*1.5}, {leftX+houseSize, leftY-houseSize}};
    txSetColor (TX_BLACK, 5);
    txPolygon (roof, 3);
    txSetColor (TX_BLUE);
    txSetFillColor(TX_WHITE);
    txRectangle (leftX+houseSize*0.25, leftY-houseSize*0.25, leftX+houseSize*0.75, leftY-houseSize*0.75);
    txLine      (leftX+houseSize*0.50, leftY-houseSize*0.25, leftX+houseSize*0.50, leftY-houseSize*0.75);
    txLine      (leftX+houseSize*0.25, leftY-houseSize*0.50, leftX+houseSize*0.75, leftY-houseSize*0.50);
}

void drawCat (int leftX, int leftY, int sizeX, COLORREF color)
{
    txSetColor (color);
    txSetFillColor (color);
    txEllipse (leftX, leftY, leftX+sizeX, leftY+sizeX/3);
    txCircle (leftX, leftY, 0.2*sizeX);
    txRectangle (leftX+0.2*sizeX, leftY+0.5*sizeX/3, leftX+0.3*sizeX, leftY+2*sizeX/3);
    txRectangle (leftX+0.7*sizeX, leftY+0.5*sizeX/3, leftX+0.8*sizeX, leftY+2*sizeX/3);
}
