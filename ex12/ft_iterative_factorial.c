/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:00:27 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/09 22:32:59 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	resul;

	resul = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		resul *= nb;
		nb--;
	}
	return (resul);
}
