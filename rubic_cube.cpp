#include "rubic_cube.h"
#include "cube.h"
#include <GL/glu.h>
#include <iostream>


rubic_cube::rubic_cube(){
    
    float p =d+2.0f*half_cube_size;
    float m = -d-2.0f*half_cube_size;
    
    parts.emplace_back(Cube('t','r','l','g','f','y'));
    parts.emplace_back(Cube('t','r','x','x','f','y'));
    parts.emplace_back(Cube('t','r','r','b','f','y'));
    parts.emplace_back(Cube('t','r','l','g'));
    parts.emplace_back(Cube('t','r'));
    parts.emplace_back(Cube('t','r','r','b'));
    parts.emplace_back(Cube('t','r','l','g','B','w'));
    parts.emplace_back(Cube('t','r','x','x','B','w'));
    parts.emplace_back(Cube('t','r','r','b','B','w'));
    
    parts[0].set_position(m,m,p);
    parts[1].set_position(0,m,p);
    parts[2].set_position(p,m,p);
    parts[3].set_position(m,0,p);
    parts[4].set_position(0,0,p);
    parts[5].set_position(p,0,p);
    parts[6].set_position(m,p,p);
    parts[7].set_position(0,p,p);
    parts[8].set_position(p,p,p);
    
    parts.emplace_back(Cube('x','x','l','g','f','y'));
    parts.emplace_back(Cube('x','x','x','x','f','y'));
    parts.emplace_back(Cube('x','x','r','b','f','y'));
    parts.emplace_back(Cube('x','x','l','g'));
    parts.emplace_back(Cube('x','x','r','b'));
    parts.emplace_back(Cube('x','x','l','g','B','w'));
    parts.emplace_back(Cube('x','x','x','x','B','w'));
    parts.emplace_back(Cube('x','x','r','b','B','w'));

    parts[9].set_position(m,m,0);
    parts[10].set_position(0,m,0);
    parts[11].set_position(p,m,0);
    parts[12].set_position(m,0,0);
    parts[13].set_position(p,0,0);
    parts[14].set_position(m,p,0);
    parts[15].set_position(0,p,0);
    parts[16].set_position(p,p,0);
    
    parts.emplace_back(Cube('b','o','l','g','f','y'));
    parts.emplace_back(Cube('b','o','x','x','f','y'));
    parts.emplace_back(Cube('b','o','r','b','f','y'));
    parts.emplace_back(Cube('b','o','l','g','x','x'));
    parts.emplace_back(Cube('b','o'));
    parts.emplace_back(Cube('b','o','r','b','x','x'));
    parts.emplace_back(Cube('b','o','l','g','B','w'));
    parts.emplace_back(Cube('b','o','x','x','B','w'));
    parts.emplace_back(Cube('b','o','r','b','B','w'));

    parts[17].set_position(m,m,m);
    parts[18].set_position(0,m,m);
    parts[19].set_position(p,m,m);
    parts[20].set_position(m,0,m);
    parts[21].set_position(0,0,m);
    parts[22].set_position(p,0,m);
    parts[23].set_position(m,p,m);
    parts[24].set_position(0,p,m);
    parts[25].set_position(p,p,m);


  }


void rubic_cube::draw_rubic_cube(const float &rot){
    
    for(int i = 0 ; i <parts.size() ; i++){







        if(rotation == "z1p"){
            if(i==0){
            angle_left = angle_left-rot;
            }
            if(i < 9){
                parts[i].set_rot_angle(parts[i].return_rot_angle()+rot);
                glPushMatrix();
                glRotated(parts[i].return_rot_angle(),0,0,1);
                parts[i].draw_cube(2*half_cube_size);
                glPopMatrix();
                std::cout << angle_left << std::endl;





            }
            else{
                parts[i].draw_cube(2*half_cube_size);
            }

            if(angle_left <=0 ){
                rotation ="x";
                angle_left = 90;
            }
        }

        if(rotation == "x"){
            glPushMatrix();
            glRotated(parts[i].return_rot_angle(),0,0,1);
            parts[i].draw_cube(2*half_cube_size);
            glPopMatrix();
        }



    }
}
