#include <string>
using namespace std;

string problemSolution3(float height, char S) {
    // write your code here
    string result;
    if (S=='M'){
        if (height<1.75)
            result="Short";
        else if (height>=1.75 && height<1.85)
            result="Normal";
        else
            result="Tall";
    }else{
        if (height<1.65)
            result="Short";
        else if (height>=1.65 && height<1.75)
            result="Normal";
        else
            result="Tall";
    }
    return result;
    // use return to return your result
    // make use of control flow statements
}