//
//  get_middle_char.cpp
//

#include <iostream>
#include <vector>
#include <string>

std::string get_middle(std::string input)
{
    // return the middle character(s)
    int i = input.length();
    
    if ((i % 2) == 0) {
        return input.substr(i/2 - 1, 2);
    }
    return input.substr(i/2, 1);
    
}
