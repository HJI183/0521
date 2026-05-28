#include "div.h"

int div1(int a, int b) {

	int div;
	int count = 0;
	while (a >= b) {
		div = minusFunc(a, b);
		a = div;
		count += 1;
		if (a >= b)
			continue;
	}
	return count;
}
