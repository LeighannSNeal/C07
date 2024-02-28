/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lneal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:56:17 by lneal             #+#    #+#             */
/*   Updated: 2024/02/26 13:28:54 by lneal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*str_dup(char *src)
{
	int		len;
	int		i;
	char	*dup_str;

	if (src == 0)
		return (0);
	len = 0;
	while (src[len] != '\0')
		len++;
	dup_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
/*
#include <stdio.h>

int	main()
{
	char	*og = "Hello, world!";
	char	*dup = str_dup(og);

	if (dup != 0)
	{
		printf("original string: %s\n", og);
		printf("duplicate string: %s\n", dup);
		free(dup);
	}
	else
		printf("error\n");
	return (0);
}*/
