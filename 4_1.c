#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double f;
	int end, x, y;

	do
	{
		end = 0;

		printf("������� x = ");
		scanf("%d", &x);
		printf("������� y = ");
		scanf("%d", &y);
		f = (x * x + y * y) / (sqrt(x - y));
		if (sqrt(x - y) <= 0)
		{
			printf("�������.�i��������� �i����� �� 0, ������� i��i �����\n");
			end = 1;
		}
		else if (x < y)
		{
			printf("�������.����� i� �i������ �����, ������� i��i �����\n");
			end = 1;
		}




	} while (end == 1);

	printf("f= %g\n", f);

	return 0;
}