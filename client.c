/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:34:57 by icaldas           #+#    #+#             */
/*   Updated: 2023/01/24 16:35:18 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		usleep(50);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		i = 0;
		while (av[2][i] != '\0')
		{
			char_to_bits(pid, av[2][i]);
			i++;
		}
		char_to_bits(pid, '\n');
	}
	return (0);
}
