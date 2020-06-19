#include <iostream>
#include <GL/freeglut.h>


void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	//Pertama
	for (float x = 0; x <= 500; x = x + 80) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //1
		glVertex2f(x, y + 65);
		glVertex2f(x, 100);
		glVertex2f(x + 499, y + 100);
		glVertex2f(x + 499, y + 65);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex2f(x + 10, y + 0);
		glVertex2f(x + 10, y + 55);
		glVertex2f(x + 60, y + 55);
		glVertex2f(x + 60, y + 30);
		glVertex2f(x + 50, y + 30);
		glVertex2f(x + 50, y + 45);
		glVertex2f(x + 20, y + 45);
		glVertex2f(x + 20, y + 0);
		glVertex2f(x + 10, y + 0);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex2f(x + 30, y + 10);
		glVertex2f(x + 80, y + 10);
		glVertex2f(x + 80, y + 65);
		glVertex2f(x + 70, y + 65);
		glVertex2f(x + 70, y + 20);
		glVertex2f(x + 40, y + 20);
		glVertex2f(x + 40, y + 35);
		glVertex2f(x + 30, y + 35);
		glVertex2f(x + 30, y + 10);
		glEnd();
		x = +delta_x;
	}
	glFlush();

	//kedua
	for (float x = 0; x <= 500; x = x + 120) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //2
		glVertex2f(x, y + 150);
		glVertex2f(x, y + 185);
		glVertex2f(x + 499, y + 185);
		glVertex2f(x + 499, y + 150);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(x + 5, y + 110);
		glVertex2f(x + 5, y + 140);
		glVertex2f(x + 45, y + 140);
		glVertex2f(x + 45, y + 100);
		glVertex2f(x + 35, y + 100);
		glVertex2f(x + 35, y + 130);
		glVertex2f(x + 15, y + 130);
		glVertex2f(x + 15, y + 120);
		glVertex2f(x + 25, y + 120);
		glVertex2f(x + 25, y + 110);
		glVertex2f(x + 5, y + 110);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(x + 55, y + 110);
		glVertex2f(x + 95, y + 110);
		glVertex2f(x + 95, y + 140);
		glVertex2f(x + 75, y + 140);
		glVertex2f(x + 75, y + 130);
		glVertex2f(x + 85, y + 130);
		glVertex2f(x + 85, y + 120);
		glVertex2f(x + 65, y + 120);
		glVertex2f(x + 65, y + 150);
		glVertex2f(x + 55, y + 150);
		glVertex2f(x + 55, y + 110);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 105, y + 100);
		glVertex2f(x + 105, y + 150);
		glVertex2f(x + 115, y + 150);
		glVertex2f(x + 115, y + 100);
		glEnd();
		x = +delta_x;
	}
	glFlush();

	//Ketiga
	for (float x = 0; x <= 500; x = x + 80) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //3
		glVertex2f(x, y + 235);
		glVertex2f(x, y + 270);
		glVertex2f(x + 499, y + 270);
		glVertex2f(x + 499, y + 235);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 5, y + 185);
		glVertex2f(x + 5, y + 215);
		glVertex2f(x + 15, y + 215);
		glVertex2f(x + 15, y + 185);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 5, y + 215);
		glVertex2f(x + 5, y + 225);
		glVertex2f(x + 55, y + 225);
		glVertex2f(x + 55, y + 215);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 25, y + 195);
		glVertex2f(x + 25, y + 205);
		glVertex2f(x + 65, y + 205);
		glVertex2f(x + 65, y + 195);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 65, y + 195);
		glVertex2f(x + 65, y + 235);
		glVertex2f(x + 75, y + 235);
		glVertex2f(x + 75, y + 195);
		glEnd();
		x = +delta_x;
	}
	glFlush();

	//Keempat
	for (float x = 0; x <= 500; x = x + 60) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //4
		glVertex2f(x, y + 320);
		glVertex2f(x, y + 355);
		glVertex2f(x + 499, y + 355);
		glVertex2f(x + 499, y + 320);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 5, y + 270);
		glVertex2f(x + 5, y + 300);
		glVertex2f(x + 15, y + 300);
		glVertex2f(x + 15, y + 270);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 5, y + 300);
		glVertex2f(x + 5, y + 310);
		glVertex2f(x + 35, y + 310);
		glVertex2f(x + 35, y + 300);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 25, y + 280);
		glVertex2f(x + 25, y + 290);
		glVertex2f(x + 45, y + 290);
		glVertex2f(x + 45, y + 280);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 45, y + 280);
		glVertex2f(x + 45, y + 320);
		glVertex2f(x + 55, y + 320);
		glVertex2f(x + 55, y + 280);
		glEnd();
		x = +delta_x;
	}
	glFlush();

	//Kelima
	for (float x = 0; x <= 500; x = x + 60) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //5
		glVertex2f(x, y + 405);
		glVertex2f(x, y + 440);
		glVertex2f(x + 499, y + 440);
		glVertex2f(x + 499, y + 405);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 10, y + 355);
		glVertex2f(x + 10, y + 385);
		glVertex2f(x + 20, y + 385);
		glVertex2f(x + 20, y + 355);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x, y + 385);
		glVertex2f(x, y + 395);
		glVertex2f(x + 30, y + 395);
		glVertex2f(x + 30, y + 385);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 30, y + 365);
		glVertex2f(x + 30, y + 375);
		glVertex2f(x + 60, y + 375);
		glVertex2f(x + 60, y + 365);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(x + 40, y + 375);
		glVertex2f(x + 40, y + 405);
		glVertex2f(x + 50, y + 405);
		glVertex2f(x + 50, y + 375);
		glEnd();
		x = +delta_x;
	}
	glFlush();

	//Keenam
	for (float x = 0; x <= 500; x = x + 40) {
		float y = 0;
		float delta_x = x;
		glBegin(GL_QUADS); //6
		glVertex2f(x, y + 490);
		glVertex2f(x, y + 499);
		glVertex2f(x + 499, y + 499);
		glVertex2f(x + 499, y + 490);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 5, y + 440);
		glVertex2f(x + 5, y + 480);
		glVertex2f(x + 15, y + 480);
		glVertex2f(x + 15, y + 440);
		glEnd();

		glBegin(GL_QUADS);
		glVertex2f(x + 25, y + 450);
		glVertex2f(x + 25, y + 490);
		glVertex2f(x + 35, y + 490);
		glVertex2f(x + 35, y + 450);
		glEnd();
		x = +delta_x;
	}
	glFlush();
}

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.2, 0.1, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2.0);
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TTS GrafKom");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}