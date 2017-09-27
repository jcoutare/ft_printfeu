/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_modif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:11:24 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/27 17:50:37 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

int	check_signe(t_struct *data)
{
	if (data->flags[ft_strlen(data->flags) - 1] == 'o' ||
		data->flags[ft_strlen(data->flags) - 1] == 'u' ||
		data->flags[ft_strlen(data->flags) - 1] == 'x' ||
		data->flags[ft_strlen(data->flags) - 1] == 'X')
		return (1);
	return (0);
}

void	modif_l(t_struct *data)
{
	int i;
	int lol;

	i = 0;
	lol = 0;
	data->modif = 1;
	while (data->flags[i])
	{
		if (data->flags[i] == 'l')
			lol++;
		i++;
	}
	if (check_signe(data) == 1)
	{
		printf(">%d<>%d<\n", check_signe(data), lol);
		if (lol == 2)
			data->arg = va_arg(*data->ap, unsigned long long int);
		else
		{
			data->arg = va_arg(*data->ap, unsigned long int);
			printf(">%d<\n", data->arg);
		}
	}
	else
	{
		if (lol == 2)
			data->arg = va_arg(*data->ap, long long int);
		else
			data->arg = va_arg(*data->ap, long int);
	}
}

void	modif_h(t_struct *data)
{
	int i;
	int lol;

	lol = 0;
	i = 0;
	data->modif = 1;
	while (data->flags[i])
	{
		if (data->flags[i] == 'h')
			lol++;
		i++;
	}
	if (lol == 2)
		data->arg = (signed char)va_arg(*data->ap, int);
	else
		data->arg = (short int)va_arg(*data->ap, int);

}

void	modif_j(t_struct *data)
{
	data->modif = 1;
	if (data->modif_j == 1)
		return ;
	data->modif_j = 1;
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, unsigned long);
	else
		data->arg = va_arg(*data->ap, long);

}

void	modif_z(t_struct *data)
{
	data->modif = 1;
	if (data->modif_z == 1)
		return ;
	data->modif_z = 1;
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, size_t);
	else
		data->arg = va_arg(*data->ap, ssize_t);

}
