/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:07:49 by franalme          #+#    #+#             */
/*   Updated: 2022/07/25 15:07:50 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	ls;
	int	i;

	i = 0;
	ls = ft_strlen(src);
	while (i < ls && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char n[] = "hello";
    char *src = n;
    char dest[] = "teste";
    
    printf( "%s \n", dest);
    ft_strcpy (dest, src);
    printf( "%s", dest);
    return (0);
}*/