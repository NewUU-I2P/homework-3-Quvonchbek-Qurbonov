#include <string>
#include <sstream>
using namespace std;

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    string result="Broadcast";
    string required_part=macAddress.substr(0, 2);
    if (macAddress=="FF:FF:FF:FF:FF:FF") {
        return result;
    }else {
        int num;
        stringstream stream;
        stream <<required_part;
        stream>>hex>>num;
        if (num%2==0)
            result="Unicast";
        else
            result="Multicast";
    }
    return result;
    // make use of control flow statements
    // return result;
}
