/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_motif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:49:34 by epimenta          #+#    #+#             */
/*   Updated: 2016/12/06 17:49:36 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_motif(char **motif)
{
	int	i;
	int	j;

	if (!(ft_param(motif, &i, &j)))
		return (0);
	if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i][j + 2] == '#' && motif[i][j + 3] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 2][j] == '#' && motif[i + 3][j] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i + 1][j] == '#' && motif[i + 1][j + 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i + 1][j + 1] == '#' && motif[i + 1][j + 2] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 1][j + 1] == '#' && motif[i + 2][j + 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i + 1][j - 1] == '#' && motif[i + 1][j] == '#')
		return (1);
	else
		return (ft_motif_bis(motif));
}

int	ft_motif_bis(char **motif)
{
	int	i;
	int	j;

	if (!(ft_param(motif, &i, &j)))
		return (0);
	if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 1][j - 1] == '#' && motif[i + 2][j - 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 2][j] == '#' && motif[i + 2][j - 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i][j + 2] == '#' && motif[i + 1][j + 2] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i + 1][j] == '#' && motif[i + 2][j] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 1][j + 1] == '#' && motif[i + 1][j + 2] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 2][j] == '#' && motif[i + 2][j + 1] == '#')
		return (1);
	else
		return (ft_motif_ter(motif));
}

int	ft_motif_ter(char **motif)
{
	int	i;
	int	j;

	if (!(ft_param(motif, &i, &j)))
		return (0);
	if (motif[i][j] == '#' && motif[i + 1][j - 2] == '#' &&
		motif[i + 1][j - 1] == '#' && motif[i + 1][j] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i + 1][j + 1] == '#' && motif[i + 2][j + 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i][j + 2] == '#' && motif[i + 1][j] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j - 1] == '#' &&
		motif[i + 1][j] == '#' && motif[i + 1][j + 1] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i + 1][j - 1] == '#' &&
		motif[i + 1][j] == '#' && motif[i + 2][j] == '#')
		return (1);
	else if (motif[i][j] == '#' && motif[i][j + 1] == '#' &&
		motif[i][j + 2] == '#' && motif[i + 1][j + 1] == '#')
		return (1);
	else
		return (ft_motif_quater(motif));
}

int	ft_motif_quater(char **motif)
{
	int	i;
	int	j;

	if (!(ft_param(motif, &i, &j)))
		return (0);
	if (motif[i][j] == '#' && motif[i + 1][j] == '#' &&
		motif[i + 1][j + 1] == '#' && motif[i + 2][j] == '#')
		return (1);
	else
		return (0);
}
