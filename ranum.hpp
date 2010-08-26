#ifndef _RANUM_
#define _RANUM_

#include <cstdlib>
#include <ctime>

class ranum {
    ranum() {
        srand(time(0));    //private constructor, only used inside ::get()
    }
    ranum(const ranum& rhs); //disable copy constructor
    void operator=(const ranum& rhs); //disable assignment
public:
    static ranum& get(); //get a reference-handle
    int generate(const int& min, const int& max); //return random number between min and max
};

inline ranum& ranum::get() {
    static ranum sngl; //make it a singleton
    return sngl;
}

inline int ranum::generate(const int& min, const int& max) {
    return rand()%(max-min+1) + min;
}

#endif
