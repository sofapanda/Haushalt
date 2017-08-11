#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	cout << "\n###### Ein kleiner Haushaltsrechner - Christian Hancke 2017 ######\n" << endl;

	cout << "Dieses Programm wird Sie durch verschiedene Punkte fuehren.\n" << endl;

	cout << "HINWEIS!!! - ALS KOMMA einen PUNKT verwenden.\n\n" << endl;
	cout << "########################################################################\n" << endl;
	cout << "1. Punkt: Die Eingabe Ihres monatlichen Nettoeinkommens.\n" << endl;

	double einkEingabe[150], einkommen = 0, einAusgabe[150], ausgaben = 0, verfuegbar;
	long anzahl1 = 0, anzahl2 = 0;
	int check1 = 0, check2 = 0, ineink = 0, inausg = 0;
	string einkommenBEZ[150], ausgabenBEZ[150];


	// Check verwenden zur Eingabe ob noch weitere Postionen erfasst werden sollen. 0 = nein 1 = ja 

	for (int index = 0; index < 150; index++)
	{
		einkommenBEZ[index] = "0";
		ausgabenBEZ[index] = "0";
	}

	// Wir erfassend das Einkommen

		do
		{
			cout << "Bitte den Betrag fuer Position " << anzahl1 + 1 << " eingeben: ";
			cin >> einkEingabe[anzahl1];
				
					cout << "Bitte eine Bezeichnung eingeben: ";
					cin >> einkommenBEZ[anzahl1];
					anzahl1++;
					cout << '\n';
					cout << "Weiteres Einkommen erfassen? 1/JA - 0/NEIN\t";
					cin >> check1;
					cout << '\n';
					cout << "########################################################################\n" << endl;
			

		} while (check1 != 0);

		cout << "Hier eine Aufstellung Ihres Einkommens: \n";

		for (int index = 0; index < anzahl1; index++)
		{
			cout << "Bezeichnung: \t" << einkommenBEZ[index] << " \t\t\tBetrag: \t" << einkEingabe[index] << " EUR" << endl;
		}

		// Berechnung Gesamteinkommen

		for (int index = 0; index < anzahl1; index++)
		{
			einkommen = einkommen + einkEingabe[index];

		}

		cout << "\n\nIhr Einkommen betraegt monatlich: " << einkommen << " EURO" << endl;

		// Wir erfassen die Ausgaben

		cout << "\n\n###### 2. Punkt: Die Erfassung Ihrer monatlichen Fixausgaben ######\n";
		cout << '\n';
		do
		{
			cout << "Bitte den Betrag fuer die " << anzahl2 + 1 << ". Ausgabe eingeben: ";
			
				cin >> einAusgabe[anzahl2];
				cout << "Bitte eine Bezeichnung eingeben: ";
				cin >> ausgabenBEZ[anzahl2];
				anzahl2++;
				cout << "\nWeitere Ausgaben erfassen? 1/JA - 0/NEIN\t";
				cin >> check2;
				cout << "########################################################################\n" << endl;
			
		} while (check2 != 0);

		// Berechnugn der Ausgaben

		for (int index = 0; index < anzahl2; index++)
		{
			ausgaben = ausgaben + einAusgabe[index];
		}

		// Die Ausgabe der Ausgaben

		cout << "Hier eine Uebersicht ihrer Ausgaben: \n";

		for (int index = 0; index < anzahl2; index++)
		{
			cout << "Bezeichnung: \t" << ausgabenBEZ[index] << " \t\t\tBetrag: \t" << einAusgabe[index] << " EUR" << endl;
		}

		cout << "\n\nIhre Ausgaben betragen monatlich: " << ausgaben << " EURO" << endl;

		cout << "\n########################################################################\n" << endl;

		cout << "Ihre verfuegbaren Mittel betragen monatlich: " << einkommen - ausgaben << " EURO" << endl;
		cout << "Ihre Ausgaben entsprechen " << (ausgaben / einkommen) * 100 << "% von Ihren einnahmen!" << endl;
	
		return 0;
	

}
