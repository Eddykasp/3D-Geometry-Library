#include "3dgeom.h"

//global constants

VECTOR I = {1,0,0}, J = {0,1,0}, K = {0,0,1};

//vector functions
//init
VECTOR init_vector_coords(float x, float y, float z)
{
    VECTOR vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

VECTOR init_vector_points(VECTOR p1, VECTOR p2)
{
    return vsum(vsmul(p1, -1),p2);
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

//tools
char * print_vector(char * str, VECTOR v)
{
    snprintf(str, VECTOR_PRT_LGTH,"(%.1f, %.1f, %.1f)",v.x, v.y, v.z);
    return str;
}

//line functions
//init
LINE init_line(VECTOR l, VECTOR p)
{
    LINE line;
    line.l = l;
    line.p = p;
    return line;
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


//cuboid functions
//init
CUBOID init_cuboid(VECTOR o, VECTOR d)
{
    CUBOID cuboid;
    cuboid.o = o;
    cuboid.d = d;
    return cuboid;
}

//operations
float get_cuboid_area(CUBOID c)
{
    return 2*(c.d.x*c.d.y + c.d.y*c.d.z + c.d.z*c.d.x);
}

float get_cuboid_volume(CUBOID c)
{
    return c.d.x * c.d.y * c.d.z;
}

void move_cuboid(CUBOID c, VECTOR v)
{
    c.o = vsum(c.o, v);
}
