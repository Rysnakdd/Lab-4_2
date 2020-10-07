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

		printf("Çàäàéòå x = ");
		scanf("%d", &x);
		printf("Çàäàéòå y = ");
		scanf("%d", &y);
		f = (x * x + y * y) / (sqrt(x - y));
		if (sqrt(x - y) <= 0)
		{
			printf("Ïîìèëêà.Âiäáóâàºòüñÿ äiëåííÿ íà 0, çàäàéòå iíøi ÷èñëà\n");
			end = 1;
		}
		else if (x < y)
		{
			printf("Ïîìèëêà.Êîð³íü iç âiäºìíîãî ÷èñëà, çàäàéòå iíøi ÷èñëà\n");
			end = 1;
		}




	} while (end == 1);

	printf("f= %g\n", f);

	return 0;
}
