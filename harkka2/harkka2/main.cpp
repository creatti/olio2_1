#include <cstdlib>
#include <iostream>

using namespace std;

#include "Henkilo.h"
using namespace std;

int main(int argc, char *argv[])
{
	Henkilo matti("Matti", "Meikalainen", "123456-789");
	Henkilo maija("Maija", "Meikalainen", "123456-123");
	Henkilo* hptr = &matti;
	Henkilo* hptr1;
	cout << "Nimi : " << hptr->etunimi() << " " << hptr->sukunimi() << endl;
	cout << " Sotu " << hptr->sotu() << endl;
	cout << "Nimi : " << hptr1->etunimi() << " " << hptr1->sukunimi() << endl;
	cout << " Sotu " << hptr1->sotu() << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
