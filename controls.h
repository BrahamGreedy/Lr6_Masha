#ifndef CONTROLS_H
#define CONTROLS_H
#define HEIGHT 800
#define WIDTH 800

struct button
{
   int x;
   int y;
}

enum CONTROLS{LEFT, RIGHT, UP, DOWN, COUNTERCLOCK_WISE, CLOCKWISE, MORE, LESS, SAVE, EXIT}



void create_controls();


#endif