//
//  calculateResult.cpp
//  Calculator
//
//  Created by Ahmad Chaudhry on 2018-07-09.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//

#include <iostream>
#include<math.h>
#include "calculator.hpp"

double calcResult (int input1, int operation, int input2)
{
    if (operation == 1) //if user chose addition
        return input1 + input2;
    
    if (operation ==2)//if user chose subtraction
        return input1 - input2;
    
    if (operation == 3)//if user chose multiplication
        return input1 * input2;
    
    if (operation == 4)//if user chose division
        return input1/input2;
    
    if (operation == 5)//if user chose squareroot
        return sqrt(input1);
    
    return input1 + input2; //if user chooses an invalid op we'll just do addition
}
