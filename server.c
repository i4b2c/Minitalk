#include "minitalk.h"

static void bits_to_char(int signal)
{
	static int i;
	static int bit;
	if (signal == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}


int main(void)
{
	int pid = getpid();
	ft_printf("PID:%d\n",pid);
	while(1){
		signal(SIGUSR1,bits_to_char);
		signal(SIGUSR2,bits_to_char);
		pause();
	}
	return 0;
}
