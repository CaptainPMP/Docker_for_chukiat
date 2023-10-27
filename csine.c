#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
 double x;
 printf("x\tsin(x)\n");
 for (x = -2.0 * PI; x <= 2.0 * PI; x += PI/3.0)
 printf("%.3lf\t%.3lf\n", x, sin(x));
 return 0;
}
