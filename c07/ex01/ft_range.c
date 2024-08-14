/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-yazi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:42:03 by ael-yazi          #+#    #+#             */
/*   Updated: 2024/08/13 22:30:20 by ael-yazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * (size));
	if (res == 0)
	{
		return (0);
	}
	i = 0;
	while (i <= size)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

/*int main()
{
	int i = 0;
	int *tab;

	tab = ft_range(1, 5);
	while (i < 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
