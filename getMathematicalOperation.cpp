//
//  getMathematicalOperation.cpp
//  Calculator
//
//  Created by Ahmad Chaudhry on 2018-07-09.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//
#include <iostream>
#include "calculator.hpp"

int getMathematicalOperation(){
    std::cout<< "For addition please type '1'"<<std::endl;
    std::cout<< "For subtraction please type '2'"<<std::endl;
    std::cout<< "For multiplication please type '3'"<<std::endl;
    std::cout<< "For division please type '4'"<<std::endl;
    std::cout<< "For squareroot please type '5'"<<std::endl;
    int operation;
    std::cin>> operation;
    
    return operation;
}
