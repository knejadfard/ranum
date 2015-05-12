# ranum
A wrapper around the C random number generation utility to better encapsulate the process of generating a random number in a certain range.
**Note:** The code was written prior to C++11-14 standard. It works but using `rand()` from C is not the suggested way to generate a random number.

# Usage
To better demonstrate the usage, here's an example:
```
int number = ranum::object().generate(1, 20); //generate a random number in the range (1, 20)
```

# Future Path
Update the code to use the new C++ standard facilities for random number generation.
