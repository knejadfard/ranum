#include <ranum.hpp>

ranum& ranum::object() {
    static ranum sngl; //make it a singleton
    return sngl;
}

int ranum::generate(const int& min, const int& max) {
    return rand()%(max-min+1) + min;
}
