//#include <GL/gl.h>
//#include <GL/GLU.h>
#include <GL/glut.h> //Provides functions that facilitate the use of gl

void display();
void reshape(int, int);
void init();
void draw();


void Hummingbird();

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(500, 500);

	glutCreateWindow("Title"); //Window title
	glutDisplayFunc(display);
	init();
	glutReshapeFunc(reshape); //Window resized behavior
	glutMainLoop(); //Start the loop

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Clear frame
	//glLoadIdentity(); //Resets metrics - transformations

		//Draw something
	draw();

	glFlush(); //Draw frame
}
void init()
{
	glClearColor(0, 90, 0, 1.0); //Background color
}
void reshape(int WindowWidth, int WindowHeight)
{
	//Viewport - everything will be drawn in this area
	glViewport(0, 0, WindowWidth, WindowHeight); //Position and size of the viewport relative to the bottom left corner of the window

	//Projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-15, 15, -15, 15); //2D cartesian plane
	glMatrixMode(GL_MODELVIEW);
}
void draw()
{

	//glTranslatef(0.5, 0.5, 0);
	//glRotatef(25.0, 0, 0, 1);
	//glScalef(1.1, 1.1, 0);
	Hummingbird();
}





void Hummingbird()
{
	//=============================================================
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(-9.2, 4.4);
	glVertex2f(-6.7, 4.3);
	glVertex2f(-6.1, 3.4);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-6.7, 4.3);
	glVertex2f(-6.1, 3.4);
	glVertex2f(-3.8, 4.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-6.1, 3.4);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-3.8, 4.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-0.7, 2.9);
	glVertex2f(-3.8, 4.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-0.6, -2.7);
	glVertex2f(-0.7, 2.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -2.7);
	glVertex2f(2.8, -1.0);
	glVertex2f(-0.7, 2.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.7, 2.9);
	glVertex2f(2.8, -1.0);
	glVertex2f(9.5, 9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -2.7);
	glVertex2f(2, -4);
	glVertex2f(2.8, -1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -2.7);
	glVertex2f(-0.3, -5.5);
	glVertex2f(2, -4);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.4, -4.6);
	glVertex2f(-1.4, -5.7);
	glVertex2f(-0.3, -5.5);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(2.8, -1);
	glVertex2f(2, -4);
	glVertex2f(4, -5.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(2, -4);
	glVertex2f(4.3, -9.3);
	glVertex2f(4, -5.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(2.8, -1);
	glVertex2f(4, -5.3);
	glVertex2f(7.4, -6.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(4, -5.3);
	glVertex2f(4.3, -9.3);
	glVertex2f(7.4, -6.9);
	glEnd();








	glLineWidth(3);
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-9.2, 4.4);
	glVertex2f(-6.7, 4.3);
	glVertex2f(-6.1, 3.4);
	glVertex2f(-9.2, 4.4);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-6.7, 4.3);
	glVertex2f(-6.1, 3.4);
	glVertex2f(-3.8, 4.3);
	glVertex2f(-6.7, 4.3);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-6.1, 3.4);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-3.8, 4.3);
	glVertex2f(-6.1, 3.4);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-0.7, 2.9);
	glVertex2f(-3.8, 4.3);
	glVertex2f(-4.3, 1.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-4.3, 1.6);
	glVertex2f(-0.6, -2.7);
	glVertex2f(-0.7, 2.9);
	glVertex2f(-4.3, 1.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.6, -2.7);
	glVertex2f(2.8, -1.0);
	glVertex2f(-0.7, 2.9);
	glVertex2f(-0.6, -2.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.7, 2.9);
	glVertex2f(2.8, -1.0);
	glVertex2f(9.5, 9);
	glVertex2f(-0.7, 2.9);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.6, -2.7);
	glVertex2f(2, -4);
	glVertex2f(2.8, -1);
	glVertex2f(-0.6, -2.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.6, -2.7);
	glVertex2f(-0.3, -5.5);
	glVertex2f(2, -4);
	glVertex2f(-0.6, -2.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.4, -4.6);
	glVertex2f(-1.4, -5.7);
	glVertex2f(-0.3, -5.5);
	glVertex2f(-0.4, -4.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(2.8, -1);
	glVertex2f(2, -4);
	glVertex2f(4, -5.3);
	glVertex2f(2.8, -1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(2, -4);
	glVertex2f(4.3, -9.3);
	glVertex2f(4, -5.3);
	glVertex2f(2, -4);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(2.8, -1);
	glVertex2f(4, -5.3);
	glVertex2f(7.4, -6.9);
	glVertex2f(2.8, -1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(4, -5.3);
	glVertex2f(4.3, -9.3);
	glVertex2f(7.4, -6.9);
	glVertex2f(4, -5.3);
	glEnd();
}