/*
 * Program1.c
 *
 *  Created on: Feb 8, 2023
 *      Author: Liv Sutton
 */

#include <stdio.h>
int main() {
	int i, TD, FG, Safety, TD2pt, TD1pt;
	printf("Input a number: ");
	scanf("%d", & n);
	if (i >= 1) {
		int count = 0;
		for (TD = 0; TD <= i; TD++) {
			for (Safety = 0; Safety <= i; Safety++) {
				for (TD2pt = 0; TD2pt <= i; TD2pt++) {
					for (TD1pt = 0; TD1pt <= n; TD1pt++) {
						if ((6 * TD) + (3 * FG) + (2 * Safety) + (8 * TD2pt) + (7 *TD1pt) == i) {
							printf("\n%d TD | %d FG | %d Safety | %d TD + 2pt | %d TD + 1pt FG", TD, FG, Safety, TD2pt, TD1pt);
							count;
						}
					}
				}
			}
		}
		printf("\n\n%d Combination\n", count);
	}
	return 0;
}