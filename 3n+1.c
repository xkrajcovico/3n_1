#include <stdio.h>
#include <process.h>
int main()
{
	int n;
	printf("zadaj svoje cislo: \n");
	scanf("%d",&n);
	FILE *file = fopen("output.csv","w");
	fprintf(file,"%d\n",n);	
	while (n != 1)
	{
		if (n%2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3*n + 1;
		}
		printf("%d\n",n);
		fprintf(file,"%d\n",n);		
	}
	fclose(file);
	system("C://Progra~1//gnuplot//bin//gnuplot < command.txt");
	return 0;
}