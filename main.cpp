#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416


int windowWidth=1000;
int windowHeight=500;

double xboat=0;
double yboat=0;
double sun=0;
double cld=0;

bool flagScale=false;



//sun
void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 100; //of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


//cloud 1
void cloud (void)
{
   glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(60,180,9.5);
   glPopMatrix();

   glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(86,180,9.5);
   glPopMatrix();

    glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(75,185,10.5);
   glPopMatrix();

    glPushMatrix();
   glColor3f(1.000, 1.000, 1.000);
   glTranslatef(cld,0,0);
   drawFilledCircle(71,175,10.5);
   glPopMatrix();
}



void pahar (void)
{
      glPushMatrix();
  glBegin(GL_TRIANGLES);

  glColor3f(0.000, 0.392, 0.000);
  glVertex2f(0,135);
  glVertex2f(50,135);
  glVertex2f(25,160);

   glEnd();
glPopMatrix();
}


//tree 1
void tree1 (void)
{
       glPushMatrix();
   glBegin(GL_QUADS);
   glColor3f(0.622, 0.425, 0.033);

   glVertex2f(165,153);
   glVertex2f(171,153);
   glVertex2f(171,128);
   glVertex2f(165,128);

 glEnd();
glPopMatrix();

   glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(163,155,6.5);
   glPopMatrix();

   glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(173,155,6.5);
   glPopMatrix();

    glPushMatrix();
   glColor3f(0.133, 0.545, 0.133);
   drawFilledCircle(168,161,6.5);
   glPopMatrix();
}

//house 1
void house1(void)
{
//top
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(	0.275, 0.510, 0.706);

  glVertex2f(226,142);
  glVertex2f(261,135);
  glVertex2f(255,121);
  glVertex2f(217.5,129);

 glEnd();
glPopMatrix();

//right triangle
  glPushMatrix();
  glBegin(GL_TRIANGLES);
  glColor3f(	0.275, 0.510, 0.706);

  glVertex2f(261,135);
  glVertex2f(255,121);
  glVertex2f(269,123);

 glEnd();
glPopMatrix();

//right rectangle
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.000, 0.000, 0.545);

  glVertex2f(256.5,121.2);
  glVertex2f(256.5,100);
  glVertex2f(268,103);
  glVertex2f(268,123);

 glEnd();
glPopMatrix();

//large rectangle
  glPushMatrix();
  glBegin(GL_POLYGON);
glColor3f(0.000, 0.000, 0.545);

  glVertex2f(256.5,121.2);
  glVertex2f(255,121);
  glVertex2f(219,129);
  glVertex2f(219,110.5);
  glVertex2f(256.5,100);

 glEnd();
glPopMatrix();

//door
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(1.000, 0.000, 0.000);

  glVertex2f(232.7,124.5);
  glVertex2f(232.7,106.5);
  glVertex2f(240.3,104.4);
  glVertex2f(240.3,122.72);

 glEnd();
glPopMatrix();


//window 1
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(1.000, 0.000, 0.000);

  glVertex2f(222.3,115.5);
  glVertex2f(222.3,123.7);
  glVertex2f(229,122.5);
  glVertex2f(229,114);

   glEnd();
glPopMatrix();

//window 2
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(1.000, 0.000, 0.000);

  glVertex2f(244.8,110);
  glVertex2f(244.8,118.6);
  glVertex2f(251.5,117.2);
  glVertex2f(251.5,108.2);

   glEnd();
glPopMatrix();

//window 3
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(1.000, 0.000, 0.000);

  glVertex2f(259,117.2);
  glVertex2f(259,108.7);
  glVertex2f(266,110.3);
  glVertex2f(266,118.5);

   glEnd();
glPopMatrix();

//siri 1
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.275, 0.510, 0.706);

  glVertex2f(221,110);
  glVertex2f(220,108.2);
  glVertex2f(252.5,99);
  glVertex2f(253.5,100.8);

   glEnd();
glPopMatrix();

//siri 2
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.275, 0.510, 0.706);

  glVertex2f(220,108.2);
  glVertex2f(220,107.4);
  glVertex2f(252.5,98);
  glVertex2f(252.5,99);

   glEnd();
glPopMatrix();
}


//boat
void boat1 (void)
{
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.0,0.0,0.0);

  glVertex2f(xboat+303,yboat+25);
  glVertex2f(xboat+313,yboat+15);
  glVertex2f(xboat+337,yboat+15);
  glVertex2f(xboat+347,yboat+25);

 glEnd();
glPopMatrix();


  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.282, 0.239, 0.545);

  glVertex2f(xboat+313,yboat+25);
  glVertex2f(xboat+313,yboat+32);
  glVertex2f(xboat+325,yboat+35);
  glVertex2f(xboat+337,yboat+32);
  glVertex2f(xboat+337,yboat+25);
  glVertex2f(xboat+325,yboat+21);

 glEnd();
glPopMatrix();
}

void display (void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(0, 400, 0, 200);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


//sky
  glPushMatrix();
  glBegin(GL_POLYGON);

  glColor3f(0.529, 0.808, 0.980);
  glVertex2f(0,135);
  glVertex2f(0,200);
  glVertex2f(400,200);
  glVertex2f(400,135);

 glEnd();
glPopMatrix();


//sun
   glPushMatrix();
   glColor3f(1.000, 1.000, 0.000);
   glTranslatef(sun,0,0);
   drawFilledCircle(180,185,7.5);
   glPopMatrix();


//cloud 2
cloud();
glPushMatrix();
glTranslatef(220,0, 0);
cloud();
glPopMatrix();



//pahar
pahar();

//pahar 2,4,6,8,10,12,14,16
glPushMatrix();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glPopMatrix();



//field
  glPushMatrix();
  glBegin(GL_POLYGON);
   glColor3f(0.804, 0.522, 0.247);

  glVertex2f(100,135);
  glVertex2f(400,135);
  glVertex2f(400,50);
  glVertex2f(150,50);

 glEnd();
glPopMatrix();



//tree 1
tree1();
glPushMatrix();
glTranslatef(-40,0,0);
tree1();
glTranslatef(80,0,0);
tree1();
glPopMatrix();

glPushMatrix();
glTranslatef(-20,-10,0);
tree1();
glTranslatef(40,0,0);
tree1();
glPopMatrix();


//tree 2

glPushMatrix();
glTranslatef(130,-2,0);
tree1();
glTranslatef(45,0,0);
tree1();
glTranslatef(45,0,0);
tree1();
glPopMatrix();

glPushMatrix();
glTranslatef(153,-10,0);
tree1();
glTranslatef(45,3,0);
tree1();
glPopMatrix();


house1();
//house 2
glPushMatrix();
glTranslatef(-10,-50,0);
glScalef(1.3,1.3,1);
house1();
glPopMatrix();



//river
  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.640,0.738,0.992);

  glVertex2f(400,0);
   glVertex2f(400,50);
   glVertex2f(150,50);
   glVertex2f(100,135);
  glVertex2f(0,135);
  glVertex2f(0,0);

   glEnd();
glPopMatrix();



boat1();
//boat 2
glPushMatrix();
glTranslatef(-340,-10,0);
glScalef(1.3,1.3,1);
boat1();
glPopMatrix();


glFlush();
glutSwapBuffers();
}



void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'r':
        xboat+=0.8;
        sun+=0.4;
        cld-=0.4;
        break;
    case 'l':
        xboat-=0.8;
        sun-=0.4;
        cld+=0.4;
        break;
    case 'u':
        yboat+=0.8;
        break;
    case 'd':
        yboat-=0.8;
        break;


    case 's':
        flagScale=true;
        break;
    case 'e':
        flagScale=false;
        break;


    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
//sun
	if (flagScale == true)
	{
		sun+= 0.01;
		if(sun > 240)
			sun = -190;

	}
	if (flagScale == false)
	{
		sun = 0;
	}


//cloud
    if (flagScale == true)
	{
		cld-= 0.015;
		if(cld < -320)
			cld = 350;
	}
	if (flagScale == false)
	{
		cld = 0;
	}
	glutPostRedisplay();


//boat1
    if (flagScale == true)
	{
		xboat += 0.05;
		if(xboat > 270)
			xboat = -375;
	}
	if (flagScale == false)
	{
		xboat = 0;
	}
	glutPostRedisplay();

}




int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("village view");

glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);

glutDisplayFunc(display);

glutMainLoop();
return 0;
}
