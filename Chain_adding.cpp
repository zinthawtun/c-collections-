//
//  Chain_adding.cpp
//  c++collection
//
#include <#iostream>

class add
{
private:
    long number;
public:
    add(long n): number(n){}
    add operator()(long m) const
    {
        return add(number + m);
    }
    operator long() const
    {
        return number;
    }
};


std::ostream& operator <<(std::ostream& output, const add& a)
{
    output << long(a);
    return output;
}
