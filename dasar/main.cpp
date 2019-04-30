/* copyright rizal ahmad */
#include <stdio.h>
#include <SDL2/SDL.h>
#include <GL/freeglut.h>

static void rendersesuatu()
{
    glClear(GL_COLOR_BUFFER_BIT);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(600, 350);
    glutInitWindowPosition(270, 190);
    glutCreateWindow("simple OpenGL");

    glutDisplayFunc(rendersesuatu);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
}
