//  Copyright (c) 2017 Simon Delahais
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

double exo1(double rayon)
{
	double aire;
	aire = 3.14*rayon*rayon;
	return aire;
}
void exo2(short a, short b)
{
	short y;
	y = a < b && !a;
	if (a < b && !a)
		y = 10;
	else
		y = 20;
}

#endif // MY_HEADER_HPP

