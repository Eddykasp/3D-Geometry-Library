#ifndef THREE_DGEOM_H_INCLUDED
#define THREE_DGEOM_H_INCLUDED

typedef struct{
    int x;
    int y;
    int z;
}VECTOR;

typedef struct{
    VECTOR n;   //normal vector
    VECTOR p;   //point on the plane
}PLANE;

//vector functions
VECTOR init_vector(int x, int y, int z);

//operations
VECTOR vsum(VECTOR a, VECTOR b);

//plane functions
PLANE init_plane(VECTOR n, VECTOR p);

#endif // THREE_3DGEOM_H_INCLUDED
