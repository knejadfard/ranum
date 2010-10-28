#include <iostream>
#include "ranum.hpp"

using namespace std;

int main() {
    cout<<ranum::object().generate(-10, 5)<<endl;
    cout<<ranum::object().generate(5, 10)<<endl;
    return 0;
}
