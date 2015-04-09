#include "3dgeom.h"

//vector functions

VECTOR init_vector(int x, int y, int z)
{
    VECTOR vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

//plane functions

PLANE init_plane(VECTOR n, VECTOR p)
{
    PLANE plane;
    plane.n = n;
    plane.p = p;
    return plane;
}
