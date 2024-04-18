#include "ft_printf.h"

 int ft_findintlen(int a)
{
	int i = 0;

	if (a < 0)
	{
		i++;
		a *= -1;
	}

	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return i;
}

char *ft_itoa(int nb)
{
	int a = ft_findintlen(nb);
	char *dest;
	dest = (char *)malloc(a * sizeof(char) + 1);
	if (!dest)
	{
		return NULL;
	}
	dest[a] = '\0';
	a = a - 1;
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
	}
	while (a > 0)
	{
		dest[a] = nb % 10 + '0';
		nb = nb / 10;
		a--;
	}
	return (dest);
}
