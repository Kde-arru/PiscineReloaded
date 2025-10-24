/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:26:58 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/08 14:34:35 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (min >= max)
		return (0);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (0);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
