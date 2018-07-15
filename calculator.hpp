//
//  printResult.hpp
//  Calculator
//
//  Created by Ahmad Chaudhry on 2018-07-09.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//

#ifndef printResult_hpp
#define printResult_hpp

#include <stdio.h>

int getUserInput();

int getMathematicalOperation();

double calcResult(int input1, int operation, int input2);

void printResult(double answer);

#endif /* printResult_hpp */
