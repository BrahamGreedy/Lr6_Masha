#ifndef TASK_HPP
#define TASK_HPP

struct point
{
   int x;
   int y;
};

class Figure
{
   int n_ver;
   point *points;
   point center;
public:
   Figure(int n);
   ~Figure()=default;
   void up();
   void down();
   void left();
   void right();
   void l_rotate();
   void r_rotate();
   void more();
   void less();
   void draw();
};

#endif