#include "ft_printf.h"

int len(char const *str)
{
    int i=0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int ft_printchar(int c)
{
    write(1,&c,1);
    return 1;
}

int ft_printstr(char *str)
{
    int i=0;
    int a= len(str);
    a=a-1;
    while(a>=i)
    {
        ft_printchar(str[i]);
        i++;
    }

    return i;

}

int	ft_put_unsigned(unsigned int num)
{
    int	i;

    i = 0;
    if (num >= 10)
    {
        i += ft_put_unsigned(num / 10);
        i += ft_put_unsigned(num % 10);
    }
    else{
        i=i+ft_printchar(num + '0');

    }
    return (i);
}

int	ft_printf_unsigned(unsigned int num)
{
    int	lenght;

    lenght = 0;
    lenght=lenght + ft_put_unsigned(num);
    return (lenght);
}
