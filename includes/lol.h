/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:19:43 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/04 17:42:07 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LOL_H
# define LOL_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef union mon_union
{
    int i;
    double d;
    char *str;
}			the_union;

typedef struct t_struct
{
	char *c;
	void (*flag_tab[127])(va_list ap);
	int octet;
}				s_struct;
#endif
