#include <iostream>
#include <clocale>
#include <cmath>
const double PI = 3.14159265358979323846;


int main()
{
	setlocale(LC_ALL, "ru");
	double r1, r2, s1, s2, s3;
	std::cin >> r1;
	std::cin >> r2;

	s1 = PI * pow(r1, 2);
	s2 = PI * pow(r2, 2);
	s3 = s2 - s1;
	std::cout << "S1 = " << s1 << std::endl;
	std::cout << "S2 = " << s2 << std::endl;
	std::cout << "S3 = " << s3;

	return 0;
}

