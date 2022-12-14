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
	short *p_Tab = Tab;

	// Création d'un tableau avec valeurs aléatoires
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		Tab[i] = rand();
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Valeur Tab avant Tri : " << p_Tab[i] << endl;
	}

	cout << endl;

	// Algorithme à coder
	int tri_peigne(short* p_Tab, int N);

	cout << "Il y a : " << tri_peigne(Tab, N) << " valeur(s) au dessus de 10000" << "\n" << endl;


	// Tableau trié à afficher

	for (int i = 0; i < N; i++)
	{
		cout << "Valeur Tab après Tri : " << p_Tab[i] << endl;
	}
}

int tri_peigne(short *p_Tab, int N)
{
	int nbr_sup = 0;
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

			if (p_Tab[i] > p_Tab[i + inter])
			{
				int temp = p_Tab[i];
				p_Tab[i] = p_Tab[i + inter];
				p_Tab[i + inter] = temp;
				echange = true;
			}

			i += 1;
		}
	}

	for(int i = 0; i < N; i++)
		if (p_Tab[i] > 10000)
			nbr_sup += 1;

	return nbr_sup;
}