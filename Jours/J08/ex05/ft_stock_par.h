/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 21:36:18 by adespond          #+#    #+#             */
/*   Updated: 2015/09/15 01:18:50 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H
# define __FT_STOCK_PAR_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
void				ft_show_tab(t_stock_par *par);
char				**ft_split_whitespaces(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
int					ft_strlen(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
#endif
