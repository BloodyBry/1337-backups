/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-yazi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:31:23 by ael-yazi          #+#    #+#             */
/*   Updated: 2024/08/14 15:02:56 by ael-yazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (size));
	if (*range == 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*int main()
{
	int i = 0;
	int *tab;
	int size = ft_ultimate_range(&tab, 1, 5);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
