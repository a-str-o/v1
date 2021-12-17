#include "../includes/v1.h"

void    ft_print_error(char *str)
{
    ft_putendl(str);
    exit(0);
}

void	ft_pars(t_data *all, char *str)
{
    return;
}

void	ft_check(char *str)
{
    int i;
    int e;

    i = 0;
    e = 0;
    while (str[i])
    {
        if (str[i] != '*' && str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != ' ' && 
            str[i] != '=' && str[i] != '^' && ft_isalnum(str[i]) != 1)
            ft_print_error("input error");
        if (str[i] == '=')
            e++;
        i++;
    }
    if (e == 2)
                ft_print_error("input error");

    ft_putnbr(e);
}