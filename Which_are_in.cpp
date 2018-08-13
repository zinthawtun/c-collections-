//
//  Which_are_in.cpp
//  c++collection
//
//
#include <iostream>
#include <vector>
#include <string>

class WhichAreIn
{
    
public:
    static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

struct StringMatch
{
    std::string str;
    
    StringMatch(const std::string& s) : str(s) {}
    
    bool operator()(const std::string& input)
    {
        size_t position = input.find(str);
        return position != std::string::npos;
    }
};

std::vector<std::string> WhichAreIn::inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
    std::vector<std::string> answer;
    typedef std::vector<std::string> vec_string;
    
    
    for (vec_string::const_iterator i = array1.begin(); i != array1.end(); ++i){
        if(std::find_if(array2.begin(), array2.end(), StringMatch(*i)) != array2.end()){
            answer.push_back(*i);
        }
        
        
    }
    std::sort(answer.begin(), answer.end()) ;
    return answer;
    
    
};

