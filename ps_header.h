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

typedef struct	s_stacks
{
	int			*arr_a;
	int			ptr_a;
	int			*arr_b;
	int			ptr_b;
}				t_stacks;

/*
**	fun1.c
*/
void    ft_swap(int *a, int *b);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     *sort_array(int *arr, int n);
void	print_piece(t_piece pp);
void	print_arr(t_stacks *st, int n, char c);
void	set_arr_to_zero(int *b, int n);
void	push_1_to_2(t_stacks *st, char c); //c == 'A' means pushes FROM A to B
// void	rotate(t_arr *dest, int n);
// void	reverse_rotate(t_arr *dest, int n);

/*
** methods.c
*/

/*
**	ps.c
*/

#endif
