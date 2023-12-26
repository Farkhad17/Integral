#include <iostream>
#include <math.h>
#include <vector>

double cheb(double x);
double fx(double x);


int main(){
	
	int i;	
	double mas[11] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
	for(i = 0; i < 11; i++){
		std::cout << "x^3 = " << fx(mas[i]) << " f(x) = " << cheb(mas[i]) << " abs = "<< fabs(cheb(mas[i]) - fx(mas[i])) << std::endl;
	}
	
	return 0;
}

double cheb(double x){
	return 1.5*x*x - (9.0/16.0)*x + 1.0/32.0;	
}

double fx(double x){
	return x*x*x;
}
