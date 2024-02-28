/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lneal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:45 by lneal             #+#    #+#             */
/*   Updated: 2024/02/28 15:43:34 by lneal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *sep)
{
	int	len;

	len = 0;
	while (chr[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*des;
	int	length;
	int	i;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = ft_len(sep) * size;
	while (i < size)
	{
		if (*strs != '\0')
		{
			i++;

	}
	des = (char *)malloc(length + 1);
	i = 0;
	while (size != 0)
	{
		des[i] = src[i];
		i++;
	return (des);
}

#include <stdio.h>

int     main(void)
{
        char    *tab[5];
        tab[0] = "tab0";
        tab[1] = "tab1";
        tab[2] = "tab2";
        tab[3] = "tab3";
        tab[4] = "tab4";
        printf("%s", ft_strjoin(5, tab, "//"));
        return (0);
}
