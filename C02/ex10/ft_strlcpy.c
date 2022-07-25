/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:21:08 by franalme          #+#    #+#             */
/*   Updated: 2022/07/24 16:21:09 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	signsize;

	signsize = size;
	i = 0;
	while (i <= signsize)
	{
		dest[i] = src[i];
		i++;
	}
	return (signsize);
}

/*int main(void)
{
	char *font;
	char pros[6];

	font = "Maracuja";
	printf("fonte	: %s\n", font);
	printf("tamanho da string copiado %d\n", ft_strlcpy(pros, font, 5));
	printf("destino	: %s\n", pros);
}*/
