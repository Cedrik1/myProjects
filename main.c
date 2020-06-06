#include <stdio.h>
#include "sub.h"
#include "add.h"
	int main() {
	printf("This is my calculator");

	double x = 2;
	double y = 3;
	printf("%lf -%lf = %lf", x, y, mySubFcn(x, y));
	printf("This is my calculator");
	double x = 1;
	double y = 2;
	printf("%lf + %lf = %lf", x, y, myAddFcn(x, y));
	


}