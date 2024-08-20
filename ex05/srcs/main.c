/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:42:03 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/20 16:48:58 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int main(int ac, char **av)
{
	int	n1;
	int	n2;
	char	*sign;
	int	result;

	if (ac != 4)
		return 0;
	n1 = ft_atoi(av[1]);
	sign = av[2];
	n2 = ft_atoi(av[3]);
	if(*sign == '/' && n2 == 0)
		ft_putstr("Stop: division by zero.\n");
	if(*sign == '%' && n2 == 0)
		ft_putstr("Stop: modulo by zero.\n");
	result = ft_operators(n1,sign,n2);
	ft_putnbr(result);
	ft_putchar('\n');
}
