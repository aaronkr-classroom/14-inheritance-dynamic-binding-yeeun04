// Grad.cpp

#include <algorithm>
#include "Grad.h"

istream& Grad::read(istream& in) {
	Core::read_common(in);
	in >> thesis;
	read_hw(in, Core::homework);
	return in;
}
double Grad::grade() const {
	return min(Core::grade(), thesis);
}