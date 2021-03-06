/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:50:06 by epimenta          #+#    #+#             */
/*   Updated: 2016/12/06 17:50:08 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_table(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->size)
		ft_putendl(map->tab[i++]);
}

void	ft_delmap(t_map **map)
{
	int	i;

	i = 0;
	while ((*map)->tab[i] != NULL)
	{
		free((*map)->tab[i]);
		(*map)->tab[i] = NULL;
		i++;
	}
	free((*map)->tab);
	(*map)->tab = NULL;
	free(*map);
	*map = NULL;
}

t_coord	*ft_init_point(int i, int j)
{
	t_coord	*point;

	point = (t_coord *)malloc(sizeof(t_coord));
	if (!point)
		ft_error();
	point->i = i;
	point->j = j;
	return (point);
}

void	ft_delcoord(t_coord **coord)
{
	free(*coord);
	*coord = NULL;
}
