/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:34:09 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/08 14:01:24 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_arv(int arc, char *arv[])
{
	int	i;

	i = 1;
	while (i < arc)
	{
		ft_putstr(arv[i]);
		i++;
	}
}

int	main(int arc, char *arv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < arc)
	{
		j = 1;
		while (j < arc)
		{
			if (ft_strcmp(arv[i], arv[j]) < 0)
			{
				temp = arv[i];
				arv[i] = arv[j];
				arv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_arv(arc, arv);
}
