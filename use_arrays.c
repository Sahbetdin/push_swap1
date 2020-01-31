#include "ps_header.h"

void	set_array(int *a)
{
	//23 числа
a[0] = 27;		a[1] = 54;		a[2] = 30;		a[3] = 20;
a[4] = 5;		a[5] = 25;		a[6] = 19;		a[7] = 32;
a[8] = 1;		a[9] = 17;		a[10] = 38;		a[11] = 3;
a[12] = 36;		a[13] = 15;		a[14] = 18;		a[15] = 40;
a[16] = 4;		a[17] = 37;		a[18] = 42;		a[19] = 10;
a[20] = 34;		a[21] = 12;		a[22] = 44;
}

void	update_piece_info(t_piece *all_charact, int i)
{
	int mid_index;
	int end_index;

	mid_index = (all_charact[i].begin + all_charact[i].end) / 2;
	printf("here: mid_index = %d\n", mid_index);
	if (all_charact[i].where == 'A')
		all_charact[i + 1].where = 'B';
	else if (all_charact[i].where == 'B')
		all_charact[i + 1].where = 'A';
	all_charact[i + 1].begin = all_charact[i].begin;
	all_charact[i + 1].end = mid_index; //след элем, потом посм для малых знач
	all_charact[i + 1].amount = all_charact[i + 1].end - all_charact[i + 1].begin;
	all_charact[i + 1].sorted = 0;
	all_charact[i].begin = mid_index;
	all_charact[i].amount = all_charact[i].end - all_charact[i].begin;
}



int	main()
{
	t_piece		all_charact[30];
	t_stacks	*st;
	int			*sorted_mass;

	int			n;
	int			i;
	int			j;
	int			mid;
	int			left_bound;
	int			right_bound;
	

	n = 23;
//initiate both stacks
	st = (t_stacks *)malloc(sizeof(t_stacks));
	st->arr_a = (int *)malloc(sizeof(int) * n);
	st->arr_b = (int *)malloc(sizeof(int) * n);
	st->ptr_a = 0;
	st->ptr_b = n - 1;
	set_array(st->arr_a);
	set_arr_to_zero(st->arr_b, n);

//get sorted array [massive]
	sorted_mass = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n)
		sorted_mass[i] = st->arr_a[i];
	sort_array(sorted_mass, n);

//print sorted array
	i = -1;
	printf("               ");
	while (++i < n)
		printf(" %2d ", i);
	printf("\n");
	i = -1;
	printf("\033[0;32m sorted array:\033[0m ");
	while (++i < n)
		printf(" %2d ", sorted_mass[i]);
	printf("\n");



	print_arr(st, n, 'A');
	print_arr(st, n, 'B');

//set 1st piece characteristic
	all_charact[0].refer = st->arr_a;
	all_charact[0].begin = 0;
	all_charact[0].end = n;
	all_charact[0].amount = all_charact[0].end - all_charact[0].begin;
	all_charact[0].sorted = 0;
	all_charact[0].where = 'A';
	

	// update_piece_info(all_charact, 0);
	// print_piece(all_charact[0]);
	// print_piece(all_charact[1]);


//первая итерация переноса в b
	// push_1_to_2(arr_b, arr_a);
	// push_1_to_2(arr_b, arr_a);

	// print_arr(arr_a, n);
	// print_arr(arr_b, n);

// 	print_arr(arr_a, n);
// 	print_piece(all_charact[0]);
// 	update_piece_info(all_charact, 0);
// 	print_piece(all_charact[0]);
// 	print_piece(all_charact[1]);
	
// 	// print_piece(all_charact[1]);
// 	mid = sorted_mass[all_charact[1].end];
// 	left_bound = all_charact[1].begin;
// 	right_bound = mid;
// 	printf("mid = %d\n", mid);

// 	i = arr_a->ptr;
// 	j = i;
// 	while (j < n)
// 	{
// 		if (arr_a->mass[i] > left_bound && arr_a->mass[i] < right_bound)
// 		{
// 			push_1_to_2('A', arr_a, arr_b);
// 			i++;
// 		}
// 		else
// 			rotate(arr_a, n);
// 		j++;
// 	}

// /////
// 	print_arr(arr_a, n);
// 	print_arr(arr_b, n);


// 	update_piece_info(all_charact, 1);
// 	print_piece(all_charact[0]);
// 	print_piece(all_charact[1]);
// 	print_piece(all_charact[2]);

// 	mid = sorted_mass[all_charact[2].end];
// 	left_bound = mid;
// 	right_bound = all_charact[2].begin;
// 	printf("mid = %d\n", mid);
// 	i = arr_b->ptr;
// 	j = i;
// 	while (j < n)
// 	{
// 		if (arr_a->mass[i] > left_bound && arr_a->mass[i] < right_bound)
// 		{
// 			push_1_to_2('B', arr_a, arr_b);
// 			i++;
// 		}
// 		else
// 			rotate(arr_a, n);
// 		j++;
// 	}



	// print_arr(arr_a, n);
	// print_arr(arr_b, n);

	free(st->arr_a);
	free(st->arr_b);
	free(st);
	free(sorted_mass);
	return (0);
}