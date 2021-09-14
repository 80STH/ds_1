#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale>
void main()
{
	setlocale(LC_ALL, "RUS");
	float x,y,R;
	int N;
	printf_s("Ââåäèòå x, y è ðàäèóñ êðóãà:");
	scanf_s(" %f %f %f", &x, &y, &R);
	if (pow(x, 2) + pow(y, 2) == pow(R, 2)) N = 1;
		else N = 0;
	if (N == 1) printf_s("Òî÷êà ëåæèò â îáëàñòè êðóãà");
		else printf_s("Òî÷êà íå ëåæèò â îáëàñòè êðóãà");
	_getch();
}
