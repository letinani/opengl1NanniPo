#ifndef LDR_INTERSECTION___
#define LDR_INTERSECTION___

#include "geometry/Point3D.h"
#include "geometry/Vector3D.h"
#include "geometry/Color3f.h"
#include "geometry/Sphere.h"
#include "geometry/Cube.h"
#include "geometry/Union.h"
#include "geometry/Shape.h"

typedef struct struct_intersection {
	Point3D position;
	Color3f color;
	Vector3D normal;
}Intersection;

int TestRaySphereIntersection(Ray3D, Sphere,Intersection*);
int TestRayShapeIntersection(Ray3D, Shape,Intersection*);

#endif
