#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale>
void main()
{
	setlocale(LC_ALL, "RUS");
	float x,y,R;
	int N;
	printf_s("������� x, y � ������ �����:");
	scanf_s(" %f %f %f", &x, &y, &R);
	if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) N = 1;
		else N = 0;
	if (N == 1) printf_s("����� ����� � ������� �����");
		else printf_s("����� �� ����� � ������� �����");
	_getch();
}