#define GL_SILENCE_DEPRECATION

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include "cube.h"
#include "rubic_cube.h"

#ifdef __APPLE__
#include <OpenGL/glu.h> // macOS
#else
#include <GL/glu.h> // Windows/Linux
#endif



void set_viewport(int width, int height) {
    const float ar = (float)width / (float)height;

    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
    gluLookAt(0, -5, 3, 0, 0, 0, 0, 0, 1);

//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
}

int main() {
    // create the window
    sf::Window window(sf::VideoMode(1024, 768), "SFML OpenGL Template", sf::Style::Default, sf::ContextSettings(32));
    window.setVerticalSyncEnabled(true);

    // activate the window
    window.setActive(true);

    // set viewport according to current window size
    set_viewport(window.getSize().x, window.getSize().y);

    glClearColor(1, 1, 1, 1);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_SMOOTH);
    glShadeModel(GL_SMOOTH);

    // setup lights

    GLfloat light_position[] = { 2.0, 0.0, 2.0, 1.0 };
    GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat light_diffuse[] = { 0.8, 0.8, 0.8, 1.0 };
    GLfloat light_specular[] = { 0.0, 0.0, 0.0, 1.0 };

    glLightfv( GL_LIGHT0, GL_POSITION, light_position);
    glLightfv( GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv( GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv( GL_LIGHT0, GL_SPECULAR, light_specular);
    glEnable( GL_LIGHTING );
    glEnable( GL_LIGHT0 );

    GLfloat global_ambient[] = {0.3, 0.3, 0.3, 0.1};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

    glEnable(GL_NORMALIZE) ;

    // load resources, initialize the OpenGL states, ...

    // run the main loop
    bool running = true;



    sf::Clock clk;

    rubic_cube rubic_cube_1;

    while (running) {
        // handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                // end the program
                running = false;
            } else if (event.type == sf::Event::Resized) {
                // adjust the viewport when the window is resized
                set_viewport(event.size.width, event.size.height);
            }
        }



        // clear the buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glColorMaterial (GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE) ;
        glEnable (GL_COLOR_MATERIAL);

        // draw stuff

        sf::Time time = clk.getElapsedTime();
        clk.restart();
        float rot = time.asSeconds()* 45;
        rubic_cube_1.draw_rubic_cube(rot);
//        glPushMatrix();
//        glRotated(rot,0,0,1);
//        glPopMatrix();
//        glPushMatrix();

//        glPopMatrix();/**/










        // end the current frame (internally swaps the front and back buffers)
        window.display();
    }

    return 0;
}
