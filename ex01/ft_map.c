/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:58:03 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/19 17:07:11 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	ret = (int *)malloc(sizeof(int) * (length));
	while (i < length)
		ret[i] = (*f)(tab[i++]);
	return (ret);
}
