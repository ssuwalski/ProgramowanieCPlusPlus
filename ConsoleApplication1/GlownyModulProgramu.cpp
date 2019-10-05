// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TMenu.h" //inkludujemy HEADERY (.h) 
#include "Wskazniki.h"


int main()
{
	//aby stworzyæ instancje klasy mamy co najmniej dwie mo¿liwoœci:
	//1#
	TMenu mnu1;

	mnu1.add("Opcja 1");
	mnu1.add("Opcja 2");
	unsigned int opcja = mnu1.wybierz();


	//2# sposób
	TMenu *mnu2 = new TMenu();
	mnu2->add("Opcja 1"); //operator wy³uskania wskaŸnika ->
	mnu2->add("Opcja 2"); //kiedy jest wskaŸnik na obiekt
	(*mnu2).add("Opcja 3"); //To jest takie same wy³uskanie jak wy¿ej ale bez "->"
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

