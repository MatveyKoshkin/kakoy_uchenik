#include "header.h"
void func(int* p, int count)
{
	int level = avarege(p, count);
	switch (level)
	{
	case 5: {std::printf("\notlichnik"); break; }
	case 4: {std::printf("\nkhoroshist"); break; }
	case 3: {std::printf("\nudovletvoritelno"); break; }
	case 2: {std::printf("\nzavalil sessiju"); break; }
	default: std::printf("nerror: net takoj ocenki");
	}
}
