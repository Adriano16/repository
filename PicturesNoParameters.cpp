#include "TXLib.h"

void drawCat ();
void drawHouse ();
void drawSun ();
void drawGround ();
void drawCar ();
void drawLeafyTree ();
void drawConiferousTree ();

int main()
    {
    txCreateWindow (800, 600);

    txSetFillColor (TX_LIGHTMAGENTA);
    txRectangle (0,0,800,600);

    drawGround();

    drawSun ();

    drawHouse ();

    drawCar();

    drawCat ();

    drawLeafyTree ();

    drawConiferousTree ();

    return 0;

    }

void drawConiferousTree ()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(50-0.15*50,500,50+50*0.15,500-300);
    txSetColor (TX_GREEN,5);
    txLine(50-0.15*50,500-300,50-0.5*50,500-0.8*300);
    txLine(50-0.15*50,500-0.9*300,50-0.5*50,500-0.7*300);
    txLine(50-0.15*50,500-0.8*300,50-0.5*50,500-0.6*300);
    txLine(50-0.15*50,500-0.7*300,50-0.5*50,500-0.5*300);
    txLine(50-0.15*50,500-0.6*300,50-0.5*50,500-0.4*300);
    txLine(50-0.15*50,500-0.5*300,50-0.5*50,500-0.3*300);
    txLine(50-0.15*50,500-0.4*300,50-0.5*50,500-0.2*300);
    txLine(50-0.15*50,500-0.3*300,50-0.5*50,500-0.1*300);

    txLine(50+0.15*50,500-300,50+0.5*50,500-0.8*300);
    txLine(50+0.15*50,500-0.9*300,50+0.5*50,500-0.7*300);
    txLine(50+0.15*50,500-0.8*300,50+0.5*50,500-0.6*300);
    txLine(50+0.15*50,500-0.7*300,50+0.5*50,500-0.5*300);
    txLine(50+0.15*50,500-0.6*300,50+0.5*50,500-0.4*300);
    txLine(50+0.15*50,500-0.5*300,50+0.5*50,500-0.3*300);
    txLine(50+0.15*50,500-0.4*300,50+0.5*50,500-0.2*300);
    txLine(50+0.15*50,500-0.3*300,50+0.5*50,500-0.1*300);
}

void drawLeafyTree ()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(150-0.15*50,500,150+50*0.15,500-200);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle(150,500-200,50);
}

void drawCar ()
{
    txSetFillColor(TX_PINK);
    txCircle (250+100*0.2,500-0.2*100,0.2*100);
    txCircle (250+100*0.8,500-0.2*100,0.2*100);
    txRectangle (250-0.1*100,500-0.3*100,250+1.1*100,500-0.65*100);
}

void drawGround ()
{
    txSetColor (TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle (0,800,800,500);
}

void drawSun ()
{
    txSetColor (TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle (550,105,50);
    txLine (550+50,105,550+2*50,105);
    txLine (550-50,105,550-2*50,105);
    txLine (550,105+50,550,105+2*50);
    txLine (550,105-50,550,105-2*50);
}

void drawHouse ()
{
    txSetColor (TX_BLACK,5);
    txSetFillColor (TX_RED);
    txRectangle (420,500,420+150,500-150);

    POINT roof [3] = {{420,500-150},{420+150*0.5,500-150*1.5},{420+150,500-150}};
    txSetColor (TX_BLACK,5);
    txPolygon (roof, 3);

    txSetColor (TX_BLUE);
    txSetFillColor(TX_WHITE);
    txRectangle (420+150*0.25,500-150*0.25,420+150*0.75,500-150*0.75);
    txLine (420+150*0.5,500-150*0.25,420+150*0.5,500-150*0.75);
    txLine (420+150*0.25,500-150*0.5,420+150*0.75,500-150*0.5);
}

void drawCat ()
{
    double sizeY = 70/3;
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txEllipse (650, 455,650+70, 455+sizeY);
    txCircle (650,455,0.2*70);
    txRectangle (650+70*0.2,455+sizeY*0.5,650+70*0.3,455+2*sizeY);
    txRectangle (650+70*0.7,455+sizeY*0.5,650+70*0.8,455+2*sizeY);
}
