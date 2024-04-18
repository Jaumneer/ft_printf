#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>



int        ft_findformat(va_list args, char format);
int        ft_printf(const char *format, ...);

int        ft_printchar(int c);
int        ft_printstr(char *str);
char    *ft_itoa(int n);
int        ft_printnum(int num);
int        len(char const *str);
int         ft_findintlen(int a);

int        ft_put_ptr(unsigned long long num);
int        ft_printf_ptr(unsigned long long num);
int        ft_put_hex(unsigned int num, char format);
int        ft_printf_hex(unsigned int num, char format);
int        ft_printf_unsigned(unsigned int num);
int        ft_put_unsigned(unsigned int num);



#endif
