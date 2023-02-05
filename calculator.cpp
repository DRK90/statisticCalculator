#include "calculator.hpp"

//START MAIN
int main(){
//TEST 1 - using file of numbers 
	Calculator calc1{"numsToText.txt"};
	//calc1.readNums();
	calc1.calculateMean();
	calc1.calculateStandardDeviation();
	std::cout<<"calc1 Mean: " << calc1.getMean() <<"\n";
	std::cout<<"calc1 Standard Deviation: "<<calc1.getStandardDeviation()<<"\n";

//TEST 2 - using vector as input
	std::vector<double> numVector = {1,2,3,4,5};
	Calculator calc2{numVector};
	calc2.readNums();
	calc2.calculateMean();
	calc2.calculateStandardDeviation();
	std::cout<<"calc2 Mean: " << calc2.getMean() <<"\n";
	std::cout<<"calc2 Standard Deviation: "<<calc2.getStandardDeviation()<<"\n";

	return 0;
} 
//END MAIN