#include <stdlib.h>
#include <stdio.h>

char *itoa_base(int nbr, int base)
{
  int tab[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
  char *str;
  int len;
  int nb;

  nb = nbr;
  len = 0;
  while (nb >= base)
    {
      nb = nb / base;
      len++;
    }
  if ((str = malloc(sizeof(char) * (len + 1))) == NULL)
    return (NULL);
  str[len--] = 0;
  while (nbr >= base)
    {
      str[len--] = tab[nbr % base];
      nbr = nbr / base;
    }
  str[len] = (nbr);
  return(str);
}

int		main(void)
{
	printf("%s\n", (itoa_base(42, 10)));
	return (0);
}
