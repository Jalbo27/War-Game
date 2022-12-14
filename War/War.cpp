// War.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <bits/stdc++.h>
#include "Card.h"

int main(std::string args[], char* argv)
{
	/* per la randomizzazione delle carte si può utilizzare un array di oggetti ci una classe Card
	   ogni Card(object) ha un suo punteggio (char) e un suo contatore
	   si utilizza rand() % array.length() */
	short tmp[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }; // valori delle carte in ordine crescente
	short conta_turni = 1, rnd; // conta_turni inizializzato ad 1 per partire dal primo turno
	std::queue<short> s_1, s_2;
	std::string visual = "";
	bool war = false, perso = false, correct = false;
	Card carta[52];

	std::cout << "BENVENUTO NEL GIOCO DELLA GUERRA, DOVE 2 BOT COMBATTONO TRA LORO\n";
	std::cout << "---------------------------------------------------------------------\n";
	std::cout << "Per visualizzare le carte in tavola digita: spoiler; per vedere le regole digitare rules;"
			  << "altrimenti premi invio per andare avanti ad ogni round\n";
	std::cout << "Ora che hai capito come fare premi invio per continuare:";

	// inserisce nella coda di entrambi i giocatori le carte
	for (unsigned short i = 0; i < 4; i++) {
		for (unsigned short j = 13; j > 0; j--) {
			switch (i) {
			case 0:
				carta[(j - 1) * (i + 1)].SetCard(j, '♥'); // setta i cuori ed il valore della carta
				break;
			case 1:
				carta[(j - 1) * (i + 1)].SetCard(j, '♦'); // setta i quadri ed il valore della carta
				break;
			case 2:
				carta[(j - 1) * (i + 1)].SetCard(j, '♠'); // setta le picche ed il valore della carta
				break;
			case 3:
				carta[(j - 1) * (i + 1)].SetCard(j, '♣'); // setta i fiori ed il valore della carta
				break;
			}
		}
	}

	for (unsigned short k = 0; k < 52; k++)
		std::cout << "-carta " << k << ": " << carta[k].val << " + " << carta[k].seme<< std::endl;

	/*inserimento randomico delle carte nella coda del primo giocatore e del secondo
	for (unsigned short colonne = 0; colonne < 4; colonne++) {
		srand(time(NULL));
		rnd = rand() % 13;
		s_1.push(scala[colonne][rnd]);
		srand(time(NULL));
		rnd = rand() % 13;
		s_2.push(scala[colonne][rnd]);
	}

	// controlla che non ci siano le stesse carte nello stack di entrambi i giocatori
	for (unsigned short control = 0; control < 26 && !correct; control++){
		short pick_1 = s_1.back();
		short pick_2 = s_2.back();
		s_1.pop();
		s_2.pop();

		if (pick_1 != pick_2)
			correct = true;
	}

	if (correct == false) // se gli elementi dello stack di entrambi i giocatori è uguale non si può continuare
		std::cout << "\nPURTROPPO LE CARTE DI ENTRAMBI SONO UGUALI. LA PARTITA FINISCE IN PAREGGIO.";
	else
	{
		unsigned short seme = 0;
		// reinserisce gli elementi nello stack
		for (unsigned short i = 4; i > 0; i--) {
			for (unsigned short j = 13; j > 0; j--) {
				srand(time(NULL));
				short rnd = rand() % 13;
				s_1.push(scala[i][rnd]);
				srand(time(NULL));
				rnd = rand() % 13;
				s_2.push(scala[i][rnd]);
			}
		}

		// conteggio round e controllo del pareggio del valore delle carte per iniziare la guerra
		for (unsigned short n_stack = 26; !perso && (s_1.empty() || s_2.empty()); n_stack--)
		{
			if (s_1.front() > s_2.front()) {
				s_1.push(s_2.front());
				s_2.pop();
			}
			else if (s_1.front() < s_2.front()) {
				s_2.push(s_1.front());
				s_1.pop();
			}
			else
				war = true;
			
			while(war)
			{
				if (s_1.empty() || s_2.empty()) {
					perso = true;
					break;
				}

				if (s_1.front() > s_2.front()) {
					s_1.push(s_2.front());
					s_2.pop();
					war = false;
				}
				else if (s_1.front() < s_2.front()) {
					s_2.push(s_1.front());
					s_1.pop();
					war = false;
				}
				else
					war = true;
			}

			if (!perso)
				conta_turni++;
			else {
				if (s_1.empty())
					std::cout << "IL GIOCATORE 1 HA PERSO!\n" << "il giocatore 2 ha vinto rimanendo con" << s_2.size()
							  << "\nI turni sono: " << conta_turni;
				else
					std::cout << "IL GIOCATORE 2 HA PERSO!" << "il giocatore 1 ha vinto rimanendo con" << s_1.size()
							  << "\nI turni sono: " << conta_turni;
				break;
			}

			std::cin >> visual;
			std::cin.ignore();
		}
	}*/

	std::cout << std::endl << std::endl;
	system("PAUSE");
}