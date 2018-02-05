//  Copyright (c) 2017 Simon Delahais
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>

void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}
void exo2(void)
{
		long n = 3, fac = 1, i = 1;

		if (n > 0)
			while (i <= n)
			{
				fac = fac * i;
				i = i + 1;
			}
		else
			if (n < 0)
				fac = 0;
}

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}
void exo3(void)
{
	int essai = 0;
	int trouve = 0;

	while (trouve == 0)
	{
		trouve = essayer_code(essai);
		essai = essai + 1;
	}

	essai = essai - 1;

}
#include <stdlib.h>
#include <time.h>

unsigned short lancer_de()
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}
void exo4(void)
{
	int nbp = 0
	int nbo = 0

		while (nbo =! 1)
		{
			if (nbo == 2)
				nbp = nbp + nbo;
				if (nbo == 4)
					nbp = nbp + nbo;
					if (nbo == 6)
						nbp = nbp + nbo;
						if (nbo == 3)
							nbp = nbp * 2;
							if (nbo == 5)
								nbp = 0;
		}
}
#endif // MY_HEADER_HPP

