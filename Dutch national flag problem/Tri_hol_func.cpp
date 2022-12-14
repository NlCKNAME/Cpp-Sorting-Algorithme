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

	int tri_hol(char* p_T, int N);

	cout << "Il y a : " << tri_hol(T, N) << " valeurs de bleu.\n" << endl;
	
	// Q2: Affichage des valeurs du tableau d'entrée une fois trié
	
	for (int i = 0; i < N; i++)
	{
		cout << "Valeurs [" << i << "] avant tri : " << *(p_T + i) << endl;
	}


	system("PAUSE");
}

//Ne sachant pas si il fallait modifier juste la fonction ou alors modifier les paramètres de celle ci, j'ai fait la première solution

int tri_hol(char* p_T, int N)
{
	int temp;
	int b = 0, w = 0, r = N - 1;
	int Nb_R = 0, Nb_W = 0;

	while (w <= r)
	{
		if (*(p_T + w) == 'W')
		{
			w += 1;
			Nb_W += 1;
		}
		else {
			if (*(p_T + w) == 'B')
			{
				temp = *(p_T + b);
				*(p_T + b) = *(p_T + w);
				*(p_T + w) = temp;
				b = b + 1;
				w = w + 1;
			}
			else {
				temp = *(p_T + w);
				*(p_T + w) = *(p_T + r);
				*(p_T + r) = temp;
				r -= 1;
				Nb_R += 1;
			}
		}
	}

	cout << "Il y a : " << Nb_R << " valeurs de rouge." << endl;
	cout << "Il y a : " << Nb_W << " valeurs de blanc." << endl;

	return b;
}