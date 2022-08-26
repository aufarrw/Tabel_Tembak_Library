#include "ParabolMortar.h"
#include "math.h"
#include <windows.h>

DLLIMPORT double parabol_asin(double a, double b)
{	
	//a = Xmax(jarak)
	//b = Vo(kecepatan awal)
	double c = a * 10 / pow(b, 2);
	double d = asin(c);
	double e = 90 - (((180/ M_PI) * d) / 2);
	
	return e;
}