#ifndef GUARD_CORE_H
#define GUARD_CORE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Core {
public:
	Core();
	Core(istream&);
	string getName() const;
	double grade() const;
	istream& read(istream&);

protected:
	istream& read_common(istream&); // 이름, 시험, 과제
	double midterm, final;
	vector<double> homework;

private:
	string name;
};

#endif
