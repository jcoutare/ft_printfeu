/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:44:30 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/12 17:31:42 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

t_struct	*fill_struct(t_struct *data, va_list *ap)
{
	if (!(data = malloc(sizeof(t_struct))))
		return (NULL);
	data->ap = ap;
	data->fstring = malloc(sizeof(char *));
	data->fstring[0] = 0;
	data->resolved = malloc(sizeof(char *));
	data->resolved[0] = 0;
	data->flags = NULL;
	data->conv = 0;
	data->larg = -1;
	data->prec = -1;
	data->flag = 0;
//	data->flag_tab['0'] = &flag_zero;
	data->flag_tab['d'] = &flag_d_signed;
	data->flag_tab['i'] = &flag_d_signed;
	data->flag_tab['o'] = &flag_o_unsigned;
	data->flag_tab['u'] = &flag_d_unsigned;
	data->flag_tab['x'] = &flag_hex_unsigned;
	data->flag_tab['X'] = &flag_hex_unsigned_maj;
	data->flag_tab['c'] = &flag_c;
	data->flag_tab['s'] = &flag_s;
	data->flag_tab['p'] = &flag_p;
	data->flag_tab['-'] = &flag_moins;
	data->flag_tab['+'] = &flag_plus;
	data->flag_tab[' '] = &flag_space;
	data->flag_tab['#'] = &flag_diese;
/*	data->flag_tab['*'] = ; < bonus
	data->flag_tab['h'] = ;
	data->flag_tab['l'] = ;
	data->flag_tab['j'] = ;
	data[->flag_tab['z'] = ; */
	return (data);
}
