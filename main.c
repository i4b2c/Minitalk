#include <unistd.h> 
#include <string.h> 
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

int a = 0;

void teste(int sinal)
{
	printf("Encerrou...\n");
	exit(1);
}

void teste2(int sinal)
{
	printf("o numero resetou...\n");
	a = 0;
}

int main(int argc, char *argv[])
{
	int pid = getpid();
	signal(1,teste);
	signal(2,teste2);
	printf("PID=%d\n",pid);
	while(1)
	{
		printf("Numero: %d\n",a);
		a++;
		sleep(1);
	}
	return 0;
}
