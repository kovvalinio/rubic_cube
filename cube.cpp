#include "cube.h"
#include <GL/glu.h>
#include <iostream>

Cube::Cube(const char &s1, const char &c1, const char &s2, const char &c2, const char &s3, const char &c3)
{
        walls.emplace_back(s1);
        colors.emplace_back(c1);
        walls.emplace_back(s2);
        colors.emplace_back(c2);
        walls.emplace_back(s3);
        colors.emplace_back(c3);

    }

void Cube::draw_cube(double size){
    double half_cube_size = size / 2.0;

    glPushMatrix();
    glTranslated(position[0],position[1],position[2]);

    // bottom
    if(walls[0] == 'b'){

        if(colors[0] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[0] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[0] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[0] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[0] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[0] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }
    }
    else{
        glColor3d(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex3d(-half_cube_size, half_cube_size, -half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, -half_cube_size);
    glVertex3d(half_cube_size, -half_cube_size, -half_cube_size);
    glVertex3d(-half_cube_size, -half_cube_size, -half_cube_size);
    glEnd();

    // top
    if(walls[0] == 't'){

        if(colors[0] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[0] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[0] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[0] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[0] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[0] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }
    }
    else{
        glColor3d(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex3d(-half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, -half_cube_size, half_cube_size);
    glVertex3d(-half_cube_size, -half_cube_size, half_cube_size);
    glEnd();

    // left
    if(walls[1] == 'l'){

        if(colors[1] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[1] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[1] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[1] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[1] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[1] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }
    }
    else{
        glColor3d(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex3d(-half_cube_size, -half_cube_size, half_cube_size);
    glVertex3d(-half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(-half_cube_size, half_cube_size, -half_cube_size);
    glVertex3d(-half_cube_size, -half_cube_size, -half_cube_size);
    glEnd();

    // right
    if(walls[1] == 'r'){

        if(colors[1] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[1] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[1] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[1] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[1] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[1] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }
    }
    else{
        glColor3d(0,0,0);
    }

    glBegin(GL_POLYGON);
    glVertex3d(half_cube_size, -half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, -half_cube_size);
    glVertex3d(half_cube_size, -half_cube_size, -half_cube_size);
    glEnd();

    // front
    if(walls[2] == 'f'){

        if(colors[2] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[2] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[2] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[2] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[2] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[2] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }
    }
    else{
        glColor3d(0,0,0);
    }

    glBegin(GL_POLYGON);
    glVertex3d(-half_cube_size, -half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, -half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, -half_cube_size, -half_cube_size);
    glVertex3d(-half_cube_size, -half_cube_size, -half_cube_size);
    glEnd();

    // back
    if(walls[2] == 'B'){

        if(colors[2] == 'r'){

            glColor3d(1.0, 0.0, 0.0);
        }
        if(colors[2] == 'g'){

            glColor3d(0.0, 1.0, 0.0);
        }
        if(colors[2] == 'w'){

            glColor3d(1.0, 1.0, 1.0);
        }
        if(colors[2] == 'y'){

            glColor3d(1.0, 1.0, 0.0);
        }
        if(colors[2] == 'b'){

            glColor3d(0.0, 0.0, 1.0);
        }
        if(colors[2] == 'o'){

            glColor3d(1.0, 0.5, 0.0);
        }

    }
    else{
        glColor3d(0,0,0);
    }

    glBegin(GL_POLYGON);
    glVertex3d(-half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, half_cube_size);
    glVertex3d(half_cube_size, half_cube_size, -half_cube_size);
    glVertex3d(-half_cube_size, half_cube_size, -half_cube_size);
    glEnd();

    glPopMatrix();

}

void Cube::set_position(const float &x, const float &y, const float &z){
    position.emplace_back(x);
    position.emplace_back(y);
    position.emplace_back(z);
}

std::vector<float> Cube::return_position(){
    return position;
}


void Cube::set_rot_angle(const float &ang){
    rot_angle = ang;
}

float Cube::return_rot_angle(){
    return rot_angle;
}
