#include <iostream>
#include "ranum.hpp"

using namespace std;

int main() {
    adl::ranum &test = adl::ranum::get();
    cout<<test.generate(1, 3)<<endl;
    return 0;
}
