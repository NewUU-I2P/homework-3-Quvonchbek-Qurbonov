float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost=13.0f;
    if (consumed_water<=30){
        cost=cost+consumed_water*0.4f;
        return cost;
    }else{
        cost=cost+30*0.4f;
        consumed_water=consumed_water-30;
    }
    if (consumed_water<=20){
        cost=cost+consumed_water*0.12f;
        return cost;
    }else{
        cost=cost+20*0.12f;
        consumed_water=consumed_water-20;
    }
    if (consumed_water<=10){
        cost=cost+consumed_water*1.4f;
        return cost;
    }else{
        cost=cost+10*1.4f;
        consumed_water=consumed_water-10;
    }
    if (consumed_water>0)
        cost=cost+consumed_water*1.5f;
    return cost;
}
