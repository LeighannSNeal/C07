/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lneal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:31:15 by lneal             #+#    #+#             */
/*   Updated: 2024/02/28 15:15:46 by lneal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (size));
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int main()
{
	int	*range;
	int	size;
	size = ft_ultimate_range(&range, 3, 8);
	
	if (range != NULL)
	{
		printf("Range: %d\n", size);
		printf("Array: ");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
		free(range);
       	} 
	else 
	{
		printf("Test case 1: Invalid range (min >= max)\n");
	}
	return 0;
}*/
