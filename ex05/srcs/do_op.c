/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:52:58 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/21 23:14:29 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


int get_ope(char *op)
{
	int	i;
	char	*list;

	list = "+-/*%";
	i = -1;
	while(list[++i])
	{
		if(list[i] == op[0] && op[1] == '\0')
			return (i);
	}
	return -1;
}

void do_op(char *n1, char *op, char *n2)
{
	int (*p[5]) (int x, int y);
	int nb1 = ft_atoi(n1);
	int nb2 = ft_atoi(n2);
	int ope = get_ope(op);

	p[0] = sum;
	p[1] = sub;
	p[2] = div;
	p[3] = mult;
	p[4] = mod;

	ft_putnbr(p[ope] (nb1, nb2));
	ft_putchar('\n');
}


