/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:40:41 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/20 16:47:55 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int ft_operators(int n1, char *op, int n2)
{
        int     result;

	if (*op != '+' && *op != '/' && *op != '-'&& *op != '*' && *op != '%')
		return 0;
        result = 0;
        if (*op == '+')
                result = n1 + n2;
        else if (*op == '-')
                result = n1 - n2;
        else if (*op == '/')
                result = n1 / n2;
        else if (*op == '%')
                result = n1 % n2;
        else if (*op == '*')
                result = n1 * n2;
        return (result);
}
