// Core.cpp

#include "Core.h"
#include "grade.h "

using namespace std;                                                               

string Core::getName() const { return name; }
double Core::grade() const
{
	return::grade(midterm, final, homework);
}
istream& Core::read_common(istream& in) {
	// �л� �̸��� ���� ������ �Է¹޾� ����
	in >> name >> midterm >> final;
	return in;

}
istream& Core::read(istream & in)
	{
		read_common(in);
		read_hw(in, homework);
		return in;
	}