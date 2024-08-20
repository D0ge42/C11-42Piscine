/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:31:47 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/19 18:03:35 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int	k;

	i = 0;
	while (i < lenght)
	{
		k = i + 1;
		if (f(tab[i], tab[k]) < 0)
			return (-1);
		else if (f(tab[i], tab[k]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int compare_ascending(int a, int b)
{
    return a - b;
}
#include <stdio.h>
int main()
{
    int array_sorted[] = {5, 4, 3, 2, 1};
    int array_unsorted[] = {1, 2, 3, 4, 5};

    // Testa l'array ordinato
    int result_sorted = ft_is_sort(array_sorted, sizeof(array_sorted) / sizeof(array_sorted[0]), compare_ascending);
    printf("Array sorted: %s\n", result_sorted == 1 ? "Yes" : (result_sorted == 0 ? "Equal elements" : "No"));

    // Testa l'array non ordinato
    int result_unsorted = ft_is_sort(array_unsorted, sizeof(array_unsorted) / sizeof(array_unsorted[0]), compare_ascending);
    printf("Array unsorted: %s\n", result_unsorted == 1 ? "Yes" : (result_unsorted == 0 ? "Equal elements" : "No"));

    return 0;
}*/
