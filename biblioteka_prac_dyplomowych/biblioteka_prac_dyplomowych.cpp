// biblioteka_prac_dyplomowych.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Wykonal: Samuel Kedziora

#include "pch.h"
#include <iostream>
#include "Praca.h"
#include "Biblioteka.h"
#include <iomanip>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	Biblioteka * B = new Biblioteka();

	B->loadFromFile();

	//
	//
	char choice, choice2;
	while (true) {
		cout << setw(38) << setfill('-') << "MENU GLOWNE" << setw(27) << setfill('-') << "-" << endl;
		cout << setw(40) << setfill(' ') << ">DOKONAJ WYBORU<" << endl << " (Kliknij dany numer na klawiaturze odpowiadajacy danemu zadaniu)" << endl;
		cout << "1 - Wyswietl liste prac w skroconym formacie." << endl
			<< "2 - Wyswietl liste prac w pelnym formacie." << endl
			<< "3 - Dodaj nowa prace." << endl
			<< "4 - Edytuj dane pracy." << endl
			<< "5 - Wyszukaj prace na podstawie wybranego kryterium." << endl
			<< "6 - Dodatkowe funkcje wyswietlania." << endl
			<< "7 - ZAKONCZ PROGRAM." << endl;
		choice = _getch();
		switch (choice) {
		case '1': B->wyswietlSkrocony();
			break;
		case '2': B->wyswietlPelny();
			break;
		case '3': B->addByUser();
			break;
		case '4': B->editData();
			break;
		case '5': B->wyszukajNaPodstawie();
			break;
		case '6':
			cout << endl << "1 - Wyswietl liczbe wszystkich prac z podzialem na poszczegolne typy." << endl
				<< "2 - Wyswietl liczbe prac dla poszczegolnych promotorow." << endl
				<< "3 - Wyswietl najczesciej powtarzajace sie slowo kluczowe." << endl
				<< "Kliknij dowolny inny klawisz, aby opuscic menu bez zmian." << endl;
			choice2 = _getch();
			switch (choice2) {
			case '1': B->wyswietlZPodzialem();
				break;
			case '2': B->wyswietlWedlugPromotorow();
				break;
			case '3': B->wyswietlNajczestszeSlowo();
				break;
			default:
				break;
			}
			cout << endl;
			break;
		case '7': exit(0);
			break;
		default: cout << endl << "Brak takiej opcji w menu! Ponow probe!" << endl << endl;
			break;
		}
		cout << endl << "Kliknij enter, aby ponownie wyswietlic menu: " << endl << endl;
		_getch();
	}
	return 0;
}
