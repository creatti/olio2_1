#include "Henkilo.h"


Henkilo::Henkilo()
{}

Henkilo::~Henkilo()
{}

Henkilo::Henkilo(string enimi, string snimi, string hetu) :etunimi_(enimi), sukunimi_(snimi), sotu_(hetu)
{}

Henkilo& Henkilo::operator= (const string &source)
{
	etunimi_ = source.substr(0, source.find(" "));
	sukunimi_ = source.substr(source.rfind(" ") + 1);
	return *this;
}

Henkilo::operator string()
{
	return string(etunimi_ + " " + sukunimi_);
}

void Henkilo::tulosta() const
{
	std::cout << "\nFirst Name: " << etunimi_;
	std::cout << "\nLast Name: " << sukunimi_;
	std::cout << "\nPersonal Identity Code: " << sotu_ << std::endl;
}

void Henkilo::vaihda(string etunimi) const
{
	etunimi_ = etunimi;
}