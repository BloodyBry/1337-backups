/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-yazi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 01:41:21 by ael-yazi          #+#    #+#             */
/*   Updated: 2024/08/14 02:38:17 by ael-yazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (str[j][i])
			i++;
		k += i;
		i = 0;
		j++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tab = (char *)malloc(ft_strlen(strs, size)
			+ (size - 1) * ft_strlen(&sep, 1) + 1);
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			tab[k++] = strs[j][i++];
		i = 0;
		while (sep[i] && j != size - 1)
			tab[k++] = sep[i++];
		j++;
	}
	tab[k] = 0;
	return (tab);
}

/*int main()
{
	char *tab[] = {"hello", "world", "adnane"};
	char *sep = " ";
	
	printf("%s\n", ft_strjoin(3, tab, sep));
}*/
