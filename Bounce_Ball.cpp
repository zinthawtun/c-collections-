//
//  Which_are_in.cpp
//  c++collection
//
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window){
        if(h >= 0.0 && bounce >=0.0 && bounce < 1.0 && window < h){
            int answer = 1;
            double bounce_back;
            double drop;
            bounce_back = 1 - bounce;
            drop = h*bounce_back;
            h -= drop;
            
            while(h > window){
                
                bounce_back = 1 - bounce;
                drop = h*bounce_back;
                
                h -= drop;
                
                answer += 2;
                
            }
            return answer;
        }
        return -1;
    }
};
