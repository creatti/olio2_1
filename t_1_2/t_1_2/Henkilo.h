#include <iostream>
#include <string>
using std::string;

#pragma once
class Henkilo
{
public:
	Henkilo();
	~Henkilo();
	Henkilo(string, string, string);
	Henkilo& operator=(const string &);
	operator string();
	void tulosta() const;
	void vaihda(string) const;
private:
	string sukunimi_;
	mutable string etunimi_;	// mutable --> voi vaihtaa etunimen
	string sotu_;
};

