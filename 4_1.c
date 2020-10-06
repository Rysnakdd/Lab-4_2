#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "ua");
	double f;
	int end, x, y;
	
	do
{
		end = 0;

		printf("Задайте x = ");
		scanf_s("%d", &x);
		printf("Задайте y = ");
		scanf_s("%d", &y);
		f = (x * x + y * y) / (sqrt(x - y));
		if (sqrt(x - y) = 0)
		{
			printf("Помилка.Вiдбувається дiлення на 0, задайте iншi числа\n");
			end = 1;
		}
		else if(x<y)
		{
			printf("Помилка.Корiнь iз вiдємного числа, задайте iншi числа\n");
			end = 1;
		}




	} while (end == 1);

	printf("f= %g\n",f);

	return 0;
}
