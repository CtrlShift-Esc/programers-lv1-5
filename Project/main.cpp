#include <cmath>
#include<iostream>
using namespace std;

long long solution(long long n) {
	long long answer = 0;
	auto n1 = sqrt(n);
	auto f = floor(n1);
	if (n1 * 10 != f * 10)
		answer = -1;
	else
		answer = pow(n1 + 1, 2);

	return answer;
}

void main()
{
	//test
	//auto n = solution(121);
}