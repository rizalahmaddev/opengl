#include <windows.h>
#include <GL/glut.h>

void render()
{
    //clear color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();//load identity matrix
   //atur posisi
   glTranslatef(0.1f, 0.0f, 0.0f);//move forward 4 units

    glColor3f(0.0f, 1.0f, 0.0f); //green color

   glBegin(GL_POLYGON);//begin drawing of polygon
      glVertex3f(-0.5f,0.5f,0.0f);//first vertex
      glVertex3f(0.5f,0.5f,0.0f);//second vertex
      glVertex3f(1.0f,0.0f,0.0f);//third vertex
      glVertex3f(0.5f,-0.5f,0.0f);//fourth vertex
      glVertex3f(-0.5f,-0.5f,0.0f);//fifth vertex
      glVertex3f(-1.0f,0.0f,0.0f);//sixth vertex
    glEnd();//end drawing of polygon

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(1000, 480);
   glutInitWindowPosition(220, 180);
   glutCreateWindow("Drawingsd GL_POLYGON");

   glutDisplayFunc(render);
   glutMainLoop();
}
