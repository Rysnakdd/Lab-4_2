#include <stdio.h>
#include <math.h>
int main()
{
	int j, i, s, x, p=1;
  printf("Задайте ціле число x \n");
  scanf("%d",&x);
  for (i=1;i<=5;i++)
  {
    for(s=1,j=1;j<=i;j++)
    s*=i+pow(x,j);
    p+=s;
  }
  printf("Результат: %d\n",p);
	return 0;
}
