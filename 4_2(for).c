#include <stdio.h>
#include <math.h>
int main()
{
	int s=0, i, d;
for(i=1;i<=10;i++)
{
  if(i%2==0)
s += i;
}
d=pow(s,2);
printf(" Квадрат суми всіх парних чисел у діапазоні[1;10] %d\n",d);
	return 0;
}
