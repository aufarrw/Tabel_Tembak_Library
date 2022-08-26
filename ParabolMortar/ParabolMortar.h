#ifndef _PARABOLMORTAR_H_
#define _PARABOLMORTAR_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT double parabol_asin(double a, double b);

#endif
