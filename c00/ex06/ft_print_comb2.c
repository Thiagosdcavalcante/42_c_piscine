#include <unistd.h>

int	str_size(const char *src)
{
	int	i_size;

	i_size = 0;
	while (src[i_size] != '\0')
	{
		i_size++;
	}
	return (i_size);
}

void	ft_printstr(char const *str)
{
	int	size;

	size = str_size(str);
	write(1, str, size);
}

void	ft_num_creator_print(char thous, char cent, char dec, char uni)
{
	char	newnum[6];
			
	newnum[0] = thous;
	newnum[1] = cent;
	newnum[2] = ' ';
	newnum[3] = dec;
	newnum[4] = uni;
	newnum[5] = '\0';
	if (newnum[0] == '9' && newnum[1] == '8')
		ft_printstr(newnum); 
    else
	{
		ft_printstr(newnum);
		ft_printstr(", ");
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	a;
	char	b;
	char	c;
	char	d;

	num1 = 0;
	num2 = 1;
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			a = (num1 / 10) + '0';
			b = (num1 % 10) + '0';
			c = (num2 / 10) + '0';
			d = (num2 % 10) + '0';
			ft_num_creator_print(a, b, c, d);
			num2++;
		}
	num1++;
	}
}
