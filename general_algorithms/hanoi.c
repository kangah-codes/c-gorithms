// author = Joshua Akangah
// program to solve towers of hanoi in cpp

#include <stdio.h>

int steps;

void hanoi(int tiles, int start, int end){
	if (tiles){
		hanoi(tiles-1, start, 6-start-end);
		printf("Move disk %d from %d to %d\n", tiles, start, end);
		hanoi(tiles-1, 6-start-end, end);
		++steps;
	}
}

int main(){
	hanoi(20, 1, 3);
	printf("Completed in %d moves\n", steps);
	return 0;
}
