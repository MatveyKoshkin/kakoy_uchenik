#include "header.h"
int avarege(int* ar, int count)
{
	int summ = 0;
	for (int i = 0; i < count; i++)
	{
		summ += ar[i];
	}
	return summ / count;
}
