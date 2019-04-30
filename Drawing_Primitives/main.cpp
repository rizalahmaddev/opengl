/*This source code copyrighted by rizal ahmad' Productions (2019)
and may not be redistributed without written permission.*/

#include <windows.h>
#include <GL/glut.h>

void render()
{
    glBegin(GL_LINE_LOOP);//start drawing a line loop
      glVertex3f(-1.0f,0.0f,0.0f);//left of window
      glVertex3f(0.0f,-1.0f,0.0f);//bottom of window

      glVertex3f(1.0f,0.0f,0.0f);//right of window
      glVertex3f(0.0f,1.0f,0.0f);//top of window
    glEnd();//end drawing of line loop

    glutSwapBuffers();
}

void gambar()
{
    glClearColor(0.000, 0.110, 0.392, 0.0); // JMU Gold

    glColor3f(0.0f, 1.0f, 0.0f); // JMU Purple

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(250, 200);
   glutCreateWindow("Drawing Primitives");
   glutDisplayFunc(render);
   gambar();
   glutMainLoop();
}
