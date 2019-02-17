/*
 * main.cc
 *
 *  Created on: Feb 17, 2019
 *      Author: lzy
 */

#include <stdio.h>
#include "ccspec/math/geometry.h"

int main(int argc, char** argv) {
	Rectangle rect;
	rect.width = 3;
	rect.height = 4;

	printf("rect(3, 4) area:%d\n", rectangle_area(&rect));

	Square square;
	square.width = 3;

	printf("suare(3) area:%d\n", square_area(&square));

	Cycle cycle;
	cycle.radius=5;

	printf("cycle(5) area:%f\n", cycle_area(&cycle));
}

