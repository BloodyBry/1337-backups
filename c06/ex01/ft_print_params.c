/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-yazi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:38:57 by ael-yazi          #+#    #+#             */
/*   Updated: 2024/08/09 21:57:59 by ael-yazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char  **argv)
{
	int i;
	
	i = 1;
	if (argc > 1)
	{
		while (i <= argc - 1)
		{	
			ft_putstr(argv[i]);
			write (1, "\n", 1);
		i++;
		}
	}
}
