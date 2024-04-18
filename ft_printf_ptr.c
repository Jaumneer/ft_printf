#include "ft_printf.h"

int	ft_put_ptr(unsigned long long num)
{
    int	i;

    i = 0;
    if (num >= 16)
    {
        i += ft_put_ptr(num / 16);
        i += ft_put_ptr(num % 16);
    }
    else
    {
        if (num <= 9){
            ft_printchar(num + 48);
            i++;
        }
        else{
            ft_printchar(num - 10 + 'a');
            i++;
        }
    }
    return (i);
}


int        ft_printnum(int num)
{
    char *num1;

    num1 = ft_itoa(num);
    ft_printstr(num1);
    free( num1);
    return (ft_findintlen(num));
}



int	ft_printf_ptr(unsigned long long num)
{
    int	lenght;

    lenght = 0;
    ft_printstr("0x");
    lenght =lenght+2;
    if (num == 0)
    {
        write(1, "0", 1);
        lenght=lenght+1;
    }
    else
    {
        lenght += ft_put_ptr(num);
    }
    return (lenght);
}
