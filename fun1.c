#include "ps_header.h"

void    ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (int)(p1[i] - p2[i]);
		i++;
	}
	return (0);
}


int     *sort_array(int *arr, int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = j + 1;
		while (i < n)
		{
			if (arr[i] < arr[j])
				ft_swap(arr + i, arr + j);
			i++;
		}
		j++;
	}
	return (arr);
}

void	print_piece(t_piece pp)
{
	// printf("begin = %d\n", pp.begin);
	// printf("end = %d\n", pp.end);
	// printf("amount = %d\n", pp.amount);
	// printf("sorted = %d\n", pp.sorted);
	// printf("where = %c\n", pp.where);

	printf("%3c %3d %3d %3d %3d\n", pp.where, pp.begin, pp.end, pp.amount, pp.sorted);
	// printf("~~~~~~~~~~~~~~~\n");
}

void	print_arr(t_stacks *st, int n, char c)
{
	int i;
	if (c == 'A')
	{
		printf("pointer = %3d, ", st->ptr_a);
		i = -1;
		while (++i < n)
			printf("%4d ", st->arr_a[i]);
	}
	else if (c == 'B')
	{
		printf("pointer = %3d, ", st->ptr_b);
		i = -1;
		while (++i < n)
			printf("%4d ", st->arr_b[i]);
	}
	printf("\n");
}

void	set_arr_to_zero(int *b, int n)
{
	int i;
	i = -1;
	while (++i < n)
		b[i] = 0;
}

//in case of 'A':
//pushes from 'first' to 'second'
//in case of 'B'
//pushes from 'second' to 'first'
// void	push_1_to_2(char c, t_stack *st)
// {
// 	if (c == 'A')
// 	second->mass[second->ptr] = first->mass[first->ptr];
// 	first->ptr++;
// 	second->ptr--;
// }

//pushes from whatever is in 'c'
void	push_1_to_2(t_stacks *st, char c)
{
	int i;

	if (c == 'A')
	{
		st->arr_b[st->ptr_b] = st->arr_a[st->ptr_a];
		st->ptr_a++;
		st->ptr_b--;
	}
	else if (c == 'B')
	{
		st->ptr_a--;
		st->ptr_b++???;
		st->arr_a[st->ptr_a] = st->arr_a[st->ptr_a];
	}
}

// void	rotate(int *arr, int ptr, int n)
// {
// 	int tmp;
// 	int i;

// 	tmp = arr[ptr];
// 	i = ptr;
// 	while (i < n - 1)
// 	{
// 		arr[i] = arr[i + 1];
// 		i++;
// 	}
// 	arr[n - 1] = tmp;
// }

// void	reverse_rotate(int *arr, int ptr, int n)
// {
// 	int tmp;
// 	int i;

// 	tmp = arr[n - 1];
// 	i = n - 1;
// 	while (i > ptr)
// 	{
// 		arr[i] = arr[i - 1];
// 		i--;
// 	}
// 	dest->mass[dest->ptr] = tmp;
// }