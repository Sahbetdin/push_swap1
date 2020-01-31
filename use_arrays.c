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



int	main()
{
	t_piece	all_charact[10];
	int *arr_a;
	int *arr_b;

	int n;
	int i;
	int mid;
	

	n = 23;
	arr_a = (int *)malloc(sizeof(int) * 23);
	arr_b = (int *)malloc(sizeof(int) * 23);
	set_array(arr_a);
	set_arr_to_zero(arr_b, n);
	print_arr(arr_a, n);
	print_arr(arr_b, n);

//set 1st piece characteristic
	all_charact[0].refer = arr_a;
	all_charact[0].begin = 0;
	all_charact[0].end = n;
	all_charact[0].amount = all_charact[0].end - all_charact[0].begin;
	all_charact[0].sorted = 0;
	all_charact[0].where = 'A';
	// print_piece(all_charact[0]);

//первая итерация переноса в b
	


	return (0);
}