#include "../includes/v1.h"

void    ft_print_error(char *str)
{
    ft_putendl(str);
    exit(0);
}

int     ft_spaces(char *str)
{
    int i;
    int spaces;

    i = 0;
    spaces = 0;
    while (str[i])
    {
        if (str[i] == ' ')
            spaces++;
        i++;
    }
    return (spaces);
}
int ft_words(char *str)
{
    int words;
	int		i;
	int		k;

	words = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] != ' ' && str[i])
		{
			if (k == 0)
			{
				k = 1;
				words++;
			}
			i++;
		}
		while (str[i] == ' ' && str[i])
		{
			k = 0;
			i++;
		}
	}
    return (words);
}
void	ft_pars(t_data *all, char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    all->str = (char *)malloc(sizeof(char) * (ft_strlen(str) - ft_spaces(str) + ft_words(str)));
    while (str[i])
    {
        if (str[i] != ' ')
        {
            all->str[j] = str[i];
            j++;
            if (str[i + 1] && str[i + 1] != ' ')
                if (ft_isalnum(str[i]) == 0 || ft_isalnum(str[i + 1]) == 0)
                {
                    all->str[j] = ' ';
                    j++;
                }
        }
        i++;
    }
    all->str[j] = '\0';
    ft_putendl(all->str);
}

void	ft_check(char *str)
{
    int i;
    int e;

    i = 0;
    e = 0;
    while (str[i])
    {
        if (str[i] != '*' && str[i] != '+' && str[i] != '-' 
            && str[i] != '/' && str[i] != ' ' && 
            str[i] != '=' && str[i] != '^' && ft_isalnum(str[i]) != 1)
            ft_print_error("input error");
        if (str[i] == '=')
            e++;
        i++;
    }
    if (e == 2)
        ft_print_error("input error");
}