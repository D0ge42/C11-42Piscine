/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:59:43 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/20 16:39:25 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void		ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_operators(int n1, char *op, int n2);
int		main(int ac, char **av);

#endif
