// Tri_hol.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "stdafx.h"
#include <iostream>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

using namespace std;

int main()
{
	const int N = 10;
	short Tab[N];

	// Création d'un tableau avec valeurs aléatoires
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		Tab[i] = rand();
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Valeur Tab avant Tri : " << Tab[i] << endl;
	}

	cout << endl;

	// Algorithme à coder
	int inter = N;
	bool echange = true;

	while ((inter > 1) || (echange == true))
	{
		inter /= 1.3;

		if (inter < 1)
			inter = 1;

		int i = 0;
		echange = false;

		while (i < N - inter)
		{
			if (Tab[i] > Tab[i + inter])
			{
				int temp = Tab[i];
				Tab[i] = Tab[i + inter];
				Tab[i + inter] = temp;
				echange = true;
			}

			i += 1;
		}
	}


	// Tableau trié à afficher

	for (int i = 0; i < N; i++)
	{
		cout << "Valeur Tab après Tri : " << Tab[i] << endl;
	}
}

