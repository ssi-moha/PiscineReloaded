/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 23:05:02 by ssi-moha          #+#    #+#             */
/*   Updated: 2017/11/07 14:31:41 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(fd, str[i]);
		i++;
	}
}

void	ft_display_file(char *file_name)
{
	int		file;
	char	buf;

	file = open(file_name, O_RDONLY);
	while (read(file, &buf, 1) == 1)
	{
		write(1, &buf, 1);
	}
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr_fd(2, "File name missing.\n");
	else if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc > 2)
		ft_putstr_fd(2, "Too many arguments.\n");
	return (0);
}
