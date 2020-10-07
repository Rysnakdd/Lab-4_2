#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
  float y, x, a=-M_PI,b=M_PI,dx=M_PI/10;
  printf("\n_________________\n\n");
  printf("\tX\t\tY\n");
  while (x<=b)
  {
y=cos(x)*sin(x);
printf("%7.3lf\t%7.3lf\n", x, y);
x+=dx;
  }
  printf("\n_________________\n");
return 0;
}
