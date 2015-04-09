#include "3dgeom.h"

//global constants

VECTOR I = {1,0,0}, J = {0,1,0}, K = {0,0,1};

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

VECTOR vsmul(VECTOR v, float n)
{
    VECTOR result;
    result.x = v.x*n;
    result.y = v.y*n;
    result.z = v.z*n;
    return result;
}

float get_length(VECTOR v)
{
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

float dot_product(VECTOR a, VECTOR b)
{
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

VECTOR cross_product(VECTOR a, VECTOR b)
{
    return vsum(vsum(vsmul(I,(a.y*b.z - b.y*a.z)), vsmul(J, -(a.x*b.z - b.x*a.z))), vsmul(K, (a.x*b.y - b.x*a.y)));
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
