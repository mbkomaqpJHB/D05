/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:43:14 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 16:50:51 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int		i;
	
	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}}
