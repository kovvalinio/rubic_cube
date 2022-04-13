#pragma once
#ifndef CUBE_H

#define CUBE_H
#pragma once

#include <vector>

class Cube{

public:

    Cube(const char &s1 = 'x', const char &c1='x', const char &s2 = 'x', const char &c2='x', const char &s3='x', const char &c3='x');

    void draw_cube(double size);

    void set_position(const float &x, const float &y, const float &z);

    std::vector<float> return_position();

    void set_rot_angle(const float &ang);

    float return_rot_angle();

private:

    std::vector<char> walls;

    std::vector<char> colors;

    std::vector<float> position;

    float rot_angle = 0;


};

#endif // CUBE_H
