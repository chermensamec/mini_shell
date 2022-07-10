#include "dict.h"

int main()
{
	char	*s;
	char	*s1;
	char	tmp[10] = "alphabet"; 
	int	n;
	int	m;
	t_dict	*val;

	n = 26;
	m = 7;
	s = malloc(sizeof(char) * n);	
	s1 = malloc(sizeof(char) * 8);
	for (int i = 0 ; i < n; i++)
	{
		s[i] = 'a' + i;
	}
	for (int i = 0; i < 8; i++)
	{
		s1[i] = tmp[i];
	}	
	val = init(s, s1);
	printf("%s %s\n", (char *) val->key, (char *) val->val);
}
