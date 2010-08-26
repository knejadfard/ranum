#include <iostream>
#include "ranum.hpp"

using namespace std;

int main() {
    ranum &test = ranum::get(), &test2 = ranum::get();
    cout<<test.generate(1, 5)<<endl;
    cout<<test2.generate(5, 10)<<endl;
    return 0;
}
