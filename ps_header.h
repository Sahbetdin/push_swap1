/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btrifle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:22:51 by btrifle           #+#    #+#             */
/*   Updated: 2020/01/27 12:22:55 by btrifle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_HEADER_H
# define PS_HEADER_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

/*
** this structure describes piece having elements 
** between 'begin' and 'end'. 'end' is not included.
** it contains 'amount' elements.
** 'where' is equal to 'A' or 'B'
*/
typedef struct	s_piece
{
	int			*refer; //reference array
	int			begin; 
	int			end;
	int			amount;
	int			sorted;
	char		where;
}				t_piece;

typedef struct	s_arr
{
	int			*mass;
	int			ptr;
}				t_arr;

/*
**	fun1.c
*/
void    ft_swap(int *a, int *b);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     *sort_array(int *arr, int n);
void	print_piece(t_piece pp);
void	print_arr(int *a, int n);
void	set_arr_to_zero(int *b, int n);
/*
** methods.c
*/

/*
**	ps.c
*/

#endif
