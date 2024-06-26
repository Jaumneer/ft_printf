#include "ft_printf.h"

int	ft_put_hex(unsigned int num, char format)
{

    int	i;

    i = 0;
    if (num >= 16)
    {
        i += ft_put_hex(num / 16, format);
        i += ft_put_hex(num % 16, format);
    }
    else
    {
        if (num <= 9)
            i += ft_printchar(num + 48);
        else
        {
            if (format == 'X')
                i += ft_printchar(num - 10 + 'A');
            else
                i += ft_printchar(num - 10 + 'a');
        }
    }
    return (i);

}



int	ft_printf_hex(unsigned int num, char format) {

    int lenght;

    lenght = 0;
    if (num == 0)
    {
        write(1, "0", 1);
        lenght = lenght + 1;
    }
    else
        lenght += ft_put_hex(num, format);
    return (lenght);

}
