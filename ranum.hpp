#ifndef _RANUM_
#define _RANUM_

#include <cstdlib>
#include <ctime>

namespace adl {
//
    class ranum {
        ranum() { srand(time(0)); }
        ranum(const ranum& rhs);
        void operator=(const ranum& rhs);
    public:
        static ranum& get();
        //static ranum& operator()();
        int generate(const int& min, const int& max);
    };
//
}

inline adl::ranum& adl::ranum::get() {
    static ranum snglton;
    return snglton;
}

/*inline adl::ranum& adl::ranum::operator()() {
    get();
}*/

inline int adl::ranum::generate(const int& min, const int& max) {
    return rand()%(max-min+1) + min;
}

#endif
