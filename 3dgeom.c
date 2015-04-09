#include "3dgeom.h"

//vector functions
//init
VECTOR init_vector(float x, float y, float z)
{
    VECTOR vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}
//operations
VECTOR vsum(VECTOR a, VECTOR b)
{
    VECTOR result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

float get_length(VECTOR v)
{
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

//plane functions
//init
PLANE init_plane(VECTOR n, VECTOR p)
{
    PLANE plane;
    plane.n = n;
    plane.p = p;
    return plane;
}
