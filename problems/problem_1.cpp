float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost=13;
    if (consumed_water<=30){
        cost=cost+consumed_water*0.4;
        consumed_water=0;
    }else{
        cost=cost+30*0.4;
        consumed_water=consumed_water-30;
    }
    if (consumed_water<=20){
        cost=cost+consumed_water*0.12;
        consumed_water=0;
    }else{
        cost=cost+20*0.12;
        consumed_water=consumed_water-20;
    }
    if (consumed_water<=10){
        cost=cost+consumed_water*1.4;
        consumed_water=0;
    }else{
        cost=cost+10*1.4;
        consumed_water=consumed_water-10;
    }
    if (consumed_water>0)
        cost=cost+consumed_water*1.5;
    return cost;
}
