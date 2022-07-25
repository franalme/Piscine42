/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:53:14 by franalme          #+#    #+#             */
/*   Updated: 2022/07/24 15:53:15 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '!' && str[i] <= '~')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char *font;

	font = "D";
	printf("return is %d\n", ft_str_is_printable(font));
}*/