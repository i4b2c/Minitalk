#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

int a = 0;

int main(int ag, char *av[])
{
	int pid;
	int op;
	pid = atoi(av[1]);
	op = atoi(av[2]);
	kill(pid,op);
	return 0;
}
