#include "stdafx.h"
#include "Wskazniki.h"
#define LICZBA_ELEMENTOW_TABLICY 5 //zdefiniowanie z góry rozamiru tablicy

void Wskazniki::zadanie1()
{
	int tablica[] = { 1,2,1,5,7 };
	int suma = 0;
	//for (int i : tablica) suma += i;
	int *wInt = tablica;
	for (int j = 0; j < LICZBA_ELEMENTOW_TABLICY; j++)
		suma += *(wInt++);
	cout << "Suma: " << suma << "\n";
}
