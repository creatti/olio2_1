// Mikko Kukkola
// Olio 2, TAMK

#include "Henkilo.h"
using std::cout; using std::endl;

int main()
{
	cout << "Tehtava 1 " << endl << endl;

	Henkilo h1;
	h1 = "Juice Leskinen";
	h1.tulosta();

	string kokoNimi = "Kuka";
	kokoNimi = h1;
	cout << "Kokonimi: " << kokoNimi << endl << endl;;

	cout << "Tehtava 2 " << endl << endl;

	const Henkilo malli("Matti", "Meikäläinen", "123456 - 789");
	malli.tulosta();

	malli.vaihda("Maija");
	malli.tulosta();

	system("pause");
	return 0;
}