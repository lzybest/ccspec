/*
 * rectangle.cc
 *
 *  Created on: Feb 17, 2019
 *      Author: lzy
 */
#include "ccspec/math/geometry.h"

int rectangle_area(Rectangle* rect) {
	return rect->width * rect->height;
}

#define PI 3.14

double cycle_area(Cycle* cycle) {
	return cycle->radius * cycle->radius * PI;
}


int square_area(Square* square) {
	return square->width * square->width;
}
