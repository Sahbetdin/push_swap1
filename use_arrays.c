#include "ps_header.h"





void	set_array(int *a)
{
	//23 числа
a[0] = 24;		a[1] = 22;		a[2] = 30;		a[3] = 20;
a[4] = 5;		a[5] = 25;		a[6] = 19;		a[7] = 32;
a[8] = 1;		a[9] = 17;		a[10] = 38;		a[11] = 3;
a[12] = 36;		a[13] = 15;		a[14] = 18;		a[15] = 40;
a[16] = 4;		a[17] = 37;		a[18] = 42;		a[19] = 10;
a[20] = 34;		a[21] = 12;		a[22] = 44;
}

void	push_1_to_2(int *arr1, int *arr2, int n)
{

}

int	main()
{
	t_piece	all_charact[10];
	t_arr	*arr_a;
	t_arr	*arr_b;

	int n;
	int i;
	int mid;
	

	n = 23;
	arr_a = (t_arr *)malloc(sizeof(t_arr));
	arr_a->mass = (int *)malloc(sizeof(int) * n);
	set_array(arr_a->mass);
	arr_a->ptr = 0;


	arr_b = (t_arr *)malloc(sizeof(t_arr));
	arr_b->mass = (int *)malloc(sizeof(int) * n);
	set_arr_to_zero(arr_b->mass, n);

	print_arr(arr_a->mass, n);
	sort_array(arr_a->mass, n);
	print_arr(arr_a->mass, n);
	print_arr(arr_b->mass, n);


//set 1st piece characteristic
	all_charact[0].refer = arr_a->mass;
	all_charact[0].begin = 0;
	all_charact[0].end = n;
	all_charact[0].amount = all_charact[0].end - all_charact[0].begin;
	all_charact[0].sorted = 0;
	all_charact[0].where = 'A';
	// print_piece(all_charact[0]);

//первая итерация переноса в b
	mid = arr_a->mass[n / 2];
	printf("mid = %d\n", mid);
	// i = 0;
	// while (i < n)
	// {
	// 	if (arr_)
	// 	i++;
	// }


	return (0);
}