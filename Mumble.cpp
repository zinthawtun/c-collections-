//
//  Chain_adding.cpp
//  c++collection
//
#include <#iostream>

class Accumul
{
public:
    static std::string accum(const std::string &s){
        int n = s.length();
        std::string newWord;
        
        newWord = toupper(s[0]);
        
        for (int i=1; i<n; ++i) {
            newWord += "-";
            newWord += toupper(s[i]);
            for (int j=0; j<i; ++j) {
                newWord += tolower(s[i]);
            }
        }
        
        
        return newWord;
    }
};
