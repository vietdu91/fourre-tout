/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manu <Manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:29:45 by Manu              #+#    #+#             */
/*   Updated: 2021/02/23 00:07:09 by Manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;`
	while (str[i])
		i++;
	return (i);
}

int			main(int argc, char **argv)
{
	int		i;
	int		actuel;
	int		check;
	char	text[ft_strlen(argv[1]) + ft_strlen(argv[2])];

	i = 0;
	actuel = 0;
	check = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			check = 0;
			while (check != actuel)
			{
				if (text[check] == argv[1][i])
					break;
				check++;
			}
			if (check == actuel)
			{
				ft_putchar(argv[1][i]);
				text[actuel] = argv[1][i];
				actuel++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			check = 0;
			while (check != actuel)
			{
				if (text[check] == argv[2][i])
					break;
				check++;
			}
			if (check == actuel)
			{
				ft_putchar(argv[2][i]);
				text[actuel] = argv[2][i];
				actuel++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}