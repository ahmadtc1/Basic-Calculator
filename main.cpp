//
//  main.cpp
//  Calculator
//
//  Created by Ahmad Chaudhry on 2018-07-09.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//

#include <iostream>
#include<math.h>
#include "calculator.hpp"
int main() {

    int input1;
    int operation;
    int input2;
    double answer;
    
    input1 = getUserInput(); //get the first number from the user
 
    operation = getMathematicalOperation(); //get the operation from the user
    
    
    std::cout<<"If you would like to squareroot an integer, simply enter any number for your second value"<<std::endl; // let the user know that the 2nd int doesnt matter if they want to sqrt
    
    input2 = getUserInput(); //get the second number from the user
    
    answer = calcResult(input1,operation,input2); //calculate the result
    
    printResult(answer); // print the result
}


