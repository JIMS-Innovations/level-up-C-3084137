#include <stdio.h>

char *ordinal(int v)
{	
	char *buf;

	if(v == 11 || v == 12 || v == 13 )
	{
		buf = "th";
	}
	else
	{
		int last_dig = v % 10;

		switch (last_dig)
		{
		case 1:
			buf = "st";
			break;

		case 2:
			buf = "nd";
			break;

		case 3:
			buf = "rd";
			break;

		default:
			buf = "th";
		}
	}

	
	return buf;
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for( c=1; c<=20; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
				c, ordinal(c),
				c+20, ordinal(c+20),
				c+40, ordinal(c+40),
				c+60, ordinal(c+60),
				c+80, ordinal(c+80)
			  );
	}

	return(0);
}
