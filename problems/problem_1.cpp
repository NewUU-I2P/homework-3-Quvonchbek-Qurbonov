#include <iostream>
float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost=13;
    if (cost<=30)
        cost=cost+consumed_water*0.4;
    else if(cost<=50 && cost>30)
        cost=cost+30*0.4+(consumed_water-30)*0.12;
    else if(cost>50 && cost<=60)
        cost=cost+30*0.4+20*0.12+(consumed_water-30-20)*1.4;
    else
        cost=cost+30*0.4+20*0.12+10*1.4+(consumed_water-60)*1.5;

    return cost;
}
