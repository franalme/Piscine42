/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:20:45 by franalme          #+#    #+#             */
/*   Updated: 2022/07/24 16:20:46 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char font[] = "Salut, comMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str;

	printf("input is %s\n", font);
	str = ft_strcapitalize(font);
	printf("return is %s\n", str);
}*/