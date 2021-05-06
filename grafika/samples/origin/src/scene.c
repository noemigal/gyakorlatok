#include "scene.h"

#include <GL/glut.h>

void init_scene(Scene* scene)
{
	scene->teapot_rotation = 0.0;
}

void update_scene(Scene* scene, double time)
{
	scene->teapot_rotation += 10.0 * time;
}

void draw_scene(const Scene* scene)
{
    draw_origin();
	
	glPushMatrix();
	glTranslatef(0, 0, 2);
	glRotatef(scene->teapot_rotation, 0, 1, 0);
	glutWireTeapot(1);
	glPopMatrix();
	
	/*
	glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0);
    glVertex3f(1, 0, 0);

    glColor3f(0, 1, 0);
    glVertex3f(0, 1, 0);

    glColor3f(0, 0, 1);
    glVertex3f(0, 0, 1);
	*/

    glEnd();
}

void draw_origin()
{
    glBegin(GL_LINES);

    glColor3f(1, 0, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(1, 0, 0);

    glColor3f(0, 1, 0);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 1, 0);

    glColor3f(0, 0, 1);
    glVertex3f(0, 0, 0);
    glVertex3f(0, 0, 1);

    glEnd();
}
