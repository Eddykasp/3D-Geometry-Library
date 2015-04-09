#ifndef THREE_DGEOM_H_INCLUDED
#define THREE_DGEOM_H_INCLUDED

#include <math.h>

typedef struct vect{
    float x;
    float y;
    float z;
}VECTOR;

typedef struct plane{
    VECTOR n;   //normal vector
    VECTOR p;   //point on the plane
}PLANE;

//vector functions
VECTOR init_vector(float x, float y, float z);

//operations
VECTOR vsum(VECTOR a, VECTOR b);
float get_length(VECTOR v);
float dot_product(VECTOR a, VECTOR b);
VECTOR cross_product(VECTOR a, VECTOR b);

//plane functions
PLANE init_plane(VECTOR n, VECTOR p);

#endif // THREE_3DGEOM_H_INCLUDED
