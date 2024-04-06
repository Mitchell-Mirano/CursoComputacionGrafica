/*
Autor: Mitchell Mirano
Fecha: 06/04/2024
Descripcion: Programa que dibuja un cuadrados con diferentes colores
*/

// Importar modulos de OpenGL 
//#include<windows.h>(Descomentar para Windows)
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

// Importar modulos de C++
#include <stdlib.h>
#include <iostream>

// Importar modulos locales de archivos de C++
#include "src/figures.cpp"
#include "src/colors.cpp"


using namespace std; // para usar cout

void windowRange(){
    gluOrtho2D(-10,10,-10,10);// redefinir rango de pantalla
}

void display(void) // funcion de renderizado
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //linea 1 de cuadrados
    cuadrado(-7,2,4,mostaza);
    cuadrado(-2,2,4,verde);
    cuadrado(3,2,4,azul);

    //linea 2 de cuadrados
    cuadrado(-7,-6,4,verdeLima);
    cuadrado(-2,-6,4,rojoRosa);
    cuadrado(3,-6,4,morado);

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);// incializa la ventana
    glutInitWindowSize(1080,1000);//tamaño de la ventana
    glutInitWindowPosition(460,0);//(0,0) superior izquierda
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//tipo de modo de visualizacion
    glutCreateWindow("TestOpenGL");//Nombre de la pantalla

    glutDisplayFunc(display); // llamada de renderizado
    windowRange(); // redefinir rango de pantalla
    glutMainLoop(); // bucle de renderizado
    return EXIT_SUCCESS;
}


