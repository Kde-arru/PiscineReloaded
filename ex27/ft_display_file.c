/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:07 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/09 18:52:23 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_err("Cannot read file.\n");
		return ;
	}
	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr_err("File name missing.\n");
	else if (argc > 2)
		ft_putstr_err("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
