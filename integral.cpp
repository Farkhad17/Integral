#include <iostream>
#include <math.h>

double my_integral(int k, double alpha);


int main(int argc, char* argv[]){
	double k, alpha, eps = 1e-16;
	
	try{
		k = std::stod(argv[1]);
		alpha = std::stod(argv[2]);
	}
	catch(...){
		std::cout << "Not able to parse arguments" << std::endl;
	}
	
	if(argc < 3)return 1;
	if(alpha < eps)return 2;
	
	std::cout << my_integral(k, alpha) << std::endl;
	return 0;
}

double my_integral(int k, double alpha){
	return sin(k*alpha)/sin(alpha);
}
