#ifndef V1_H
# define V1_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <math.h>

typedef struct  s_data
{
    char    *str;
    char    **tab;
    int     var;
    char    oper;
    char    equ;
    int     pow;
}               t_data;
void	ft_pars(t_data *all, char *str);
void	ft_check(char *str);
#endif