//
//  A_Rule_of_Divisibility_by_13.cpp
//  c++collection
//
//

#include <iostream>
#include <vector>

class Thirteen {
public:
    static long long thirt(long long n);
    static const std::vector<int> remainders;
};

const std::vector<int> Thirteen::remainders = {1, 10, 9, 12, 3, 4};

long long Thirteen::thirt (long long n) {
    const long long number = n;
    
    long long answer    = 0;
    std::size_t post = 0;
    
    while (n > 0) {
        const auto div = std::lldiv(n, 10);
        answer += div.rem * remainders[post];
        post = (post + 1) % remainders.size();
        
        n = div.quot;
    }
    
    return answer == number ? answer : thirt(answer);
}

