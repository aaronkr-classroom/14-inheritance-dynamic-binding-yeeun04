#ifndef GUARD_GRAD_H
#define GUARD_GRAD_H


#include "Core.h"

class Grad : public Core {
public:
	Grad();
	Grad(istream&);
	double grade() const;
	istream& read(istream&);

private:
	double thesis; // ³í¹®
};

#endif