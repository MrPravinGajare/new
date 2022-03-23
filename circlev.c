#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
void plot_point(int x,int y)
  {
  	glBegin(GL_LINES);
  	glColour3f(0.0f,1.0f,0.0f);
  	glVertex2i(-320,0);
  	glVertex2i(320,0);
  	glVertex2i(0,-240);
  	glVertex2i(0,240);
  	glEnd();
  	
  glBegin(GL_POINTS);
  glColor3f(1.0f,1.0f,1.0f);
  glVertex2i(x,y);
  glVertex2i(x,-y);
  glVertex2i(y,x);
  glVertex2i(y,-x);
  glVertex2i(-x,-y);
  glVertex2i(-y,-x);
  glVertex2i(-x,y);
  glVertex2i(-y,x);
  glEnd();
  }
void bresenham_Circle(int r)
  {
  	int x=0,y=r;
  	float pk=3
