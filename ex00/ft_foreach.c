/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:47:31 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/19 16:57:49 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
		f(tab[i++]);
}

/*void print(int n)
{
	printf("%i\n", n);
}

int main()
{
	int array[] = {1, 3, 4, 2, 8};
	int lenght = sizeof(array) / sizeof(array[0]);

	ft_foreach(array, lenght, print);
}*/
