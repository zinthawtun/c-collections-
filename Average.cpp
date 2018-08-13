//
//  Which_are_in.cpp
//  c++collection
//
//
#include <iostream>
#include <vector>
#include <string>

std::vector<double> averages(std::vector<int> numbers)
{
    std::vector<double> result;
    
    int n = numbers.size();
    
    
    for(int i=0; i<n-1; ++i){
        
        result.push_back((numbers[i]+numbers[i+1])/2.0);
        
    }
    return result;
}
