/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:21:25 by franalme          #+#    #+#             */
/*   Updated: 2022/07/24 16:21:25 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);

void ft_putstr_non_printable(char *str)
{

int len;
char hex1;
char hex2;

len = ft_strlen(str)

while (i <= len)
{
	if (str [i] < 33 && str[i] > 126)
}	{
		hex1 = (str[i] / 16);
		hex2 = (str[i] mod 16);
}
}