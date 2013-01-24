#include "HelloWorld.hpp"


void HelloWorld::fHelloWorld()
{
	glColor3f(0.0, 0.0, 0.0); //drawing image/text color (GL_POINTS, GL_LINES, etc.)
	char message[13] ="Hello World!"; //message, which I want to print.
	int temp = 0; 
	glRasterPos2f(-0.9, 0.8); //pointer position (where text will be printed).
	while(temp!=12)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[temp]); //selecting (text FONT_SIZE, char to print). Printed text size later cannot be changed (constant).
		temp++;
	}
}
