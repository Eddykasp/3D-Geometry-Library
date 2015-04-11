#ifndef THREE_DGEOM_H_INCLUDED
#define THREE_DGEOM_H_INCLUDED

#include <math.h>

#define VECTOR_PRT_LGTH 19

typedef struct vect{
    float x;
    float y;
    float z;
}VECTOR;

typedef struct line{
    VECTOR l;   //vector parallel to line
    VECTOR p;   //point on the line
}LINE;

typedef struct plane{
    VECTOR n;   //normal vector
    VECTOR p;   //point on the plane
}PLANE;

typedef struct cuboid{
    VECTOR o;   //cuboid origin
    VECTOR d;   //diagonal through cuboid
}CUBOID;

//vector functions
//init
VECTOR init_vector_coords(float x, float y, float z);
VECTOR init_vector_points(VECTOR p1, VECTOR p2);

//operations
VECTOR vsum(VECTOR a, VECTOR b);
VECTOR vsmul(VECTOR v, float n);
float get_length(VECTOR v);
float dot_product(VECTOR a, VECTOR b);
VECTOR cross_product(VECTOR a, VECTOR b);

//tools
char * print_vector(char * str, VECTOR v);

//line functions
//init
LINE init_line(VECTOR l, VECTOR p);

//plane functions
//init
PLANE init_plane(VECTOR n, VECTOR p);


//cuboid functions
//init
CUBOID init_cuboid(VECTOR o, VECTOR d);

//operations
float get_cuboid_area(CUBOID c);
float get_cuboid_volume(CUBOID c);

#endif // THREE_3DGEOM_H_INCLUDED
