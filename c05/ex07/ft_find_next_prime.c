/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-yazi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:46:08 by ael-yazi          #+#    #+#             */
/*   Updated: 2024/08/12 15:04:52 by ael-yazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*int main()
{
	printf("%d", ft_find_next_prime(6));
}*/
