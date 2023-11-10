float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result=((i>j && i>k)? i:(j>k)? j:k);
    return result;
}