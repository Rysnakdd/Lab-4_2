#include <stdio.h>
#include <math.h>
int main()
{
	int s=0, i=1, d;
do
{
  if(i%2==0)
s += i;
i++;
}
while (i <= 10);
d=pow(s,2);
printf(" Квадрат суми всіх парних чисел у діапазоні[1;10] %d\n",d);
	return 0;
}
