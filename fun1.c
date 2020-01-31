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
	printf("begin = %d\n", pp.begin);
	printf("end = %d\n", pp.end);
	printf("amount = %d\n", pp.amount);
	printf("sorted = %d\n", pp.sorted);
	printf("where = %c\n", pp.where);
}

void	print_arr(int *a, int n)
{
	int i;

	i = -1;
	while (++i < n)
		printf("%4d ", a[i]);
	printf("\n");
}

void	set_arr_to_zero(int *b, int n)
{
	int i;
	i = -1;
	while (++i < n)
		b[i] = 0;
}

