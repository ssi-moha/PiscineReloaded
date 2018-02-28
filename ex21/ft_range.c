/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:39:56 by ssi-moha          #+#    #+#             */
/*   Updated: 2017/11/07 01:10:01 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	while (min <= max - 1)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
