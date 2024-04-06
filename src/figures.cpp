//#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <iostream>

using namespace std;

void cuadrado(float xInfLeft,float yInfLeft,float lado, float colorRGB[3]){

    glBegin(GL_QUADS);
    glColor3f(colorRGB[0]/255.0, colorRGB[1]/255.0,colorRGB[2]/255.0); // colores transformados al rango[0,1]
        glVertex2f(xInfLeft,yInfLeft);
        glVertex2f(xInfLeft,yInfLeft+lado);
        glVertex2f(xInfLeft+lado,yInfLeft+lado);
        glVertex2f(xInfLeft+lado,yInfLeft);
    glEnd();
    
}
