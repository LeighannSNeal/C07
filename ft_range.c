/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lneal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:29:20 by lneal             #+#    #+#             */
/*   Updated: 2024/02/28 15:16:37 by lneal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * size);
	if (range == 0)
		return (0);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>


int	main(void)
{
	int	min = 5;
	int	max = 10; 
	int	*tab;
	int	i = 0;
	int	size;

	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
