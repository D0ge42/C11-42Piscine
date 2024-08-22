/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:48:09 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/22 16:45:06 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		k;
	char	*str;
	int		len;

	len = 0;
	i = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		k = i + 1;
		while (k < len)
		{
			if (ft_strcmp(tab[i], tab[k]) > 0)
			{
				str = tab[i];
				tab[i] = tab[k];
				tab[k] = str;
			}
			k++;
		}
		i++;
	}
	tab[i] = NULL;
}

/*int main()
{
	char *str[5] = {"ciaoc", "ciao", "ciaoa", "ciaob"};
	int	i = -1;
	ft_sort_string_tab(str);
	while(str[++i])
		printf("%s\n", str[i]);
}*/
