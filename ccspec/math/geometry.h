/*
 * rectangle.h
 *
 *  Created on: Feb 17, 2019
 *      Author: lzy
 */

#ifndef CCSPEC_RECTANGLE_H_
#define CCSPEC_RECTANGLE_H_

struct Rectangle {
	int width;
	int height;
};

struct Cycle {
	int radius;
};

struct Square {
	int width;
};

int rectangle_area(Rectangle* rect);
int square_area(Square* square);
double cycle_area(Cycle*);

#endif /* CCSPEC_RECTANGLE_H_ */
