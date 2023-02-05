#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cmath>

class Calculator {
	public:
//Constructor with a file name as parameter
		Calculator(std::string numFile){
			std::fstream myFile(numFile, std::ios_base::in);
			double a;
			counter = 0;
			total = 0;
			while (myFile >>a)
			{
				nums.push_back(a);
				counter++;
				total+= a;
			}
		}
//Overloaded Constructor with vector<double> as parameter
		Calculator(std::vector<double> numbers){
			nums = numbers;
			counter = nums.size();
			for(int i = 0; i < counter; i++){
				total += nums[i];
			}
			
		}

//Method to read back to the console all the numbers, and the total numbers
		void readNums(){
			for(int i = 0; i < nums.size(); i++){
				std::cout<<nums[i]<<"\n";
			}
			std::cout<<"number of nums = "<<counter<<"\n";
		}

//method to calculate the mean and store it in the private variable
		void calculateMean(){
			mean = total/counter;
		}

//Method to calculate standard deviation
		void calculateStandardDeviation(){
			calculateMean();			
			double variance = 0;
			for(int i = 0; i < counter; i++){
				variance += std::pow(nums[i] - mean, 2);
			}
			
			variance = variance / (counter-1);
			
			standardDeviation = std::sqrt(variance);
		}

//Mean Getter
		double getMean(){
			return mean;
		}

//Standard Deviation Getter
		double getStandardDeviation(){
			return standardDeviation;
		}

//Private Variables
	private:
		std::vector<double> nums = {};
		int counter;
		double total;
		double standardDeviation;
		double mean;

};
