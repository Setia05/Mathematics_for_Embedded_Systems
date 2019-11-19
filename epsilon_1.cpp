/*  
 * epsilon_1.cpp
 *  Created on: Sep 24, 2019
 *      Author: Shubham
 */ 
#include<iostream>      //header file included to allow program to perform input and output
using namespace std;    //cout defined inside std namespace
float machineEpsilon()  //main function begins
{
	float epsilon;  //declaring epsilon as float data type
	epsilon = 1;    //initializing the value to 1
	while(1+epsilon>1)  // continue until the condition is satisfied
	epsilon=epsilon/2;  // dividing epsilon by 2
	epsilon=epsilon*2;  //multiplying epsilon by 2
	//cout<<"Machine epsilon is : "<<epsilon;  //output is displayed to the user
	return epsilon;  // main function is of integer type so return 0 is used
}

int main()
{
float xEpsilon;
	xEpsilon= machineEpsilon();
	cout<<"Machine epsilon is : "<<xEpsilon;
			//return 0;
}//end of main
// end of program
