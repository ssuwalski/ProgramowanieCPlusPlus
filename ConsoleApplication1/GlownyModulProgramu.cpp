// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TMenu.h" //inkludujemy HEADERY (.h) 
#include "Wskazniki.h"


int main()
{
	//aby stworzy� instancje klasy mamy co najmniej dwie mo�liwo�ci:
	//1#
	TMenu mnu1;

	mnu1.add("Opcja 1");
	mnu1.add("Opcja 2");
	unsigned int opcja = mnu1.wybierz();


	//2# spos�b
	TMenu *mnu2 = new TMenu();
	mnu2->add("Opcja 1"); //operator wy�uskania wska�nika ->
	mnu2->add("Opcja 2"); //kiedy jest wska�nik na obiekt
	(*mnu2).add("Opcja 3"); //To jest takie same wy�uskanie jak wy�ej ale bez "->"
	opcja = mnu2->wybierz();
	delete mnu2;
	

	switch (opcja) {
	case 1:
		Wskazniki::zadanie1();
		break;
	default:
		;
	}
	return 0;
}

