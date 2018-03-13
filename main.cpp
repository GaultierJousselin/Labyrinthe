#include "header.h"
#include "labyrinthe.h"

int main()
{
	//0 Variables
	Labyrinth taba;

	Labyrinth tabB;
	Labyrinth tabD;

	//1 Lecture
	tab1.readFile();
	tabB.readFile();
	tabD.readFile();

	//2 Marking
	tabB.marking();
	tabD.marking();

	//3 Affichage
	tab1.affichage();

	return 0;
}
