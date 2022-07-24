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



char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 'A' && str[i] > 'Z' || str[i] < 'a' && str[i] > 'z')
        {
            i++;
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
        {
            i++;
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
    }
    return (str);
}

int main(void)
{
	char font[] = "DdfsfgRRYYbsdg wete432 sfdgDTJeRGe 56467gFgFg";

    ft_strcapitalize(font);
    printf("return is %s\n", font);
}

