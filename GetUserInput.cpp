//
//  GetUserInput.cpp
//  Calculator
//
//  Created by Ahmad Chaudhry on 2018-07-09.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//
#include<iostream>
#include "calculator.hpp"

int getUserInput() {
    
    std::cout<<"Please choose an integer"<<std::endl;
    int integer;
    std::cin >> integer;

    return integer;
}
