#include <unistd.h>
#include <stdlib.h>

int	ft_strsize(char const *src)
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

	size = ft_strsize(str);
	write(1, str, size);
}

void    num_to_print(char *src)
{
    if (src[0] != '7')
    {
        ft_printstr(src);
		ft_printstr(", ");
    }
    else
    {
        ft_printstr(src);
    }
}

void	ft_numcreator(char cent, char dec, char uni)
{
	char	newnum[4];
	if (cent < dec && dec < uni)
	{
		if(cent != dec && cent != uni && dec != uni)
		{
			newnum[0] = cent;
			newnum[1] = dec;
			newnum[2] = uni;
			newnum[3] = '\0';
			num_to_print(newnum);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_numcreator(a, b, c);
				c++;
			}
		b++;
		c = '0';
		}
	a++;
	b = '0';
	}
}
