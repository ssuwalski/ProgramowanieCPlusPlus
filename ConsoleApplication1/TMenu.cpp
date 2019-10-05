#include "stdafx.h"
#include "TMenu.h"


//wszystko co siê œwieci na seledynowo to klasa
//na niebiesko to typy

TMenu::TMenu() // :: sprawdŸ co to
{
}


TMenu::~TMenu()
{
}

void TMenu::add(string txt)
{
	vOpcje.push_back(txt); //poczytaj wiêcej o push_back
}

unsigned int TMenu::wybierz()
{
	for (string txt : vOpcje)
	cout << txt << "\n";


/* alternatywna wersja pêtli dla starszych wersji kompilatora 

	for (int v = 0; v < vOpcje.size(); v++)
		count << vOpcje[v] << "\n";

*/
	cout << "wybierz opcje (0- wyjscie): ";
	unsigned int opcja;
	do {
		cin >> opcja;
	} while (opcja > vOpcje.size());
	return 0;
}
