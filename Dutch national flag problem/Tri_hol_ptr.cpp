// Tri_hol.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N = 10;
	// bleu: 'B'	blanc: 'W'	rouge: 'R'	
	char T[] = { 'B', 'W', 'B', 'R', 'W', 'B', 'B', 'R', 'R', 'W' };

	// Q1: Affichage des valeurs du tableau d'entrée

	char *p_T = T;

	for (int i = 0; i  < N; i++)
	{
		cout << "Valeurs [" << i << "] avant tri : " << *(p_T + i) <<endl;
	}

	cout << endl;

	// Q3: Codage de l'algorithme
	int temp;
	int b = 0, w = 0, r = N - 1;

	while ( w <= r)
	{
		if (*(p_T + w) == 'W')
		{
			w = w + 1;
		}
		else {
			if (*(p_T + w) == 'B')
			{
				temp = *(p_T + b);
				*(p_T + b) = *(p_T + w);
				*(p_T + w) = temp;
				b += 1;
				w += 1;
			}
			else {
				temp = *(p_T + w);
				*(p_T + w) = *(p_T + r);
				*(p_T + r) = temp;
				r -= 1;
			}
		}
	}
	
	// Q2: Affichage des valeurs du tableau d'entrée une fois trié
	
	for (int i = 0; i < N; i++)
	{
		cout << "Valeurs [" << i << "] apres tri : " << *(p_T + i) << endl;
	}

	system("PAUSE");
}

