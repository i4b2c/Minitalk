#include "minitalk.h"

static void	char_to_bits(int pid, char i)
{
	int	bit;

	bit = 8;
	while (bit--)
	{
		if (i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i >>= 1;
		usleep(10);
	}
}

int main(int ac, char **av)
{
	int i;
	int pid;
	if(ac == 3)
	{
		pid = ft_atoi(av[1]);
		i = 0;
		while(av[2][i] != '\0')
		{
			char_to_bits(pid , av[2][i]);
			i++;
		}
		char_to_bits(pid, '\n');
	}
	return 0;
}
