
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main(void)
{
	int stat, numbers;
	FILE* num, * pos, * neg;
	num = fopen("numbers.txt", "r");
	if (num == NULL)
		printf("folder couldnt fint it");
	else {
		pos = fopen("positive.txt", "w");
		neg = fopen("negative.txt", "w");
		stat = fscanf(num, "%d", &numbers);
		while (stat != EOF) {
			if (numbers > 0)
				fprintf(pos, "%d\n", numbers);
			else if (numbers < 0)
				fprintf(neg, "%d\n", numbers);
			stat = fscanf(num, "%d", &numbers);

		}
		fclose(num);
		fclose(pos);
		fclose(neg);
	}
	return(0);
}