#include <iostream>

using namespace std;

int main(){

	double r;
	double x;

	for(double r=0; r<=4; r+=0.01){
	x=0.5;
		for(int i=0; i<=100; i++)			// just calculated, not printed, because not interesting
			x=x*r*(1-x);
		for(int i=0; i<=400; i++){			// also printed
			x=x*r*(1-x);				// save new x into old variable
			cout << r << "\t" << x << endl;
		}
	}
	return 0;
}
