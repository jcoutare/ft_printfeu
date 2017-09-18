/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_modif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:11:24 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/18 13:52:51 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	modif_l(t_struct *data)
{
	data->modif = 1;
	if (data->modif_l == 1)
	{
		modif_ll(data);
		return ;
	}
	data->modif_l = 1;
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, unsigned long int);
	else
		data->arg = va_arg(*data->ap, long int);
}

void	modif_ll(t_struct *data)
{
	data->modif = 1;
	if (data->modif_ll == 1)
		return ;
	data->modif_ll = 1;
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, unsigned long long int);
	else
		data->arg = va_arg(*data->ap, long long int);
}

void	modif_h(t_struct *data)
{
	data->modif = 1;
	if (data->modif_h == 1)
	{
		modif_hh(data);
		return ;
	}
	data->modif_h = 1;
	data->arg = va_arg(*data->ap, int);

}

void	modif_hh(t_struct *data)
{
	data->modif = 1;
	if (data->modif_hh == 1)
		return ;
	data->modif_hh = 1;
	data->arg = va_arg(*data->ap, int); // normalement c signed char

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
