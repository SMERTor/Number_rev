
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_num_int_rev(int *num, int size)
{

	int i;
	int temp;
	i = -1;

	while(++i < --size)
	{
		temp = num[i];
		num[i] = num[size];
		num[size] = temp;

	}
}


void ft_num_int_print(int *num, int size)
{
	int i;
	i = 0;

	while(i < size)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
}




int 	main(void)
{
	int num[] = {1, 2, 3, 4, 5};
	ft_num_int_rev(num, 5);
	ft_num_int_print(num, 5);
	ft_putchar('\n');
	return(0);
}

