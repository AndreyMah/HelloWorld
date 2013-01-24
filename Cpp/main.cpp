#include "HelloWorld.hpp"
#include <GL/glut.h>  //OpenGL library

void Draw(); //drawing function. 
void Initialize(); //created by me to create parameters in which there is no need to reupdate during program work (no need to repaint them).

HelloWorld *mes = new HelloWorld();

int main(int argc, char** argv)
{

	
	//initialization
	glutInit(&argc, argv); // glut initialization (like int main() for Opengl)
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);  //static display | colors RED/GREEN/BLUE
	glutInitWindowSize(400, 400); // window size
	glutInitWindowPosition(100,200); //window position (where window will appear on the screen)
	glutCreateWindow("Hello World"); //create window with title
	
	//registration
	glutDisplayFunc(Draw); //selecting drawing function when window is created, resized or restored (as I understand, each time when screen updates)
	Initialize(); //was cerated by me. 

	glutMainLoop(); //starting infinite window drawing loop wiht created objects/parameters
	
	delete mes;
	return 0;
}


void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT); //freeing image buffer and puts defined color instructions to image buffer (glClearColor, etc.) (only program window)
	mes->fHelloWorld();
	glFlush(); //IMPORTANT only for GLUT_SINGLE
}

void Initialize()
{
	glClearColor(1.0, 1.0, 1.0, 1.0); //background Color (last 1.0 -visibility (visible/invisible))
}



