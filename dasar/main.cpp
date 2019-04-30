/* Copyright © 2019 rizalahmaddev 
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 */

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
