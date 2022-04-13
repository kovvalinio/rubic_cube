#pragma once
#ifndef RUBIC_CUBE_H
#define RUBIC_CUBE_H
#include <cube.h>
#include <string>


class rubic_cube{
public:

    rubic_cube();
    void draw_rubic_cube(const float &rot);

private:
    std::vector<Cube> parts;
    double half_cube_size = 0.5;
    float d = 0.01;
    std::string rotation = "z1p";
    float angle_left=90;
};

#endif // RUBIC_CUBE_H
