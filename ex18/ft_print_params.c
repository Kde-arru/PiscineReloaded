/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:39:54 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/09 19:15:18 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);	

int	main(int arc, char *arv[])
{
	int	i;
	int	p;

	p = 1;
	if (arc > 1)
	{
		while (p < arc)
		{
			i = 0;
			while (arv[p][i])
			{
				ft_putchar(arv[p][i]);
				i++;
			}
			ft_putchar('\n');
			p++;
		}
	}
	return (0);
}
