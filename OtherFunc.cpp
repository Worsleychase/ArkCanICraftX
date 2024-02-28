// Functions for calculations

#include <iostream>
#include <vector>
#include <string>
#include "Resources.hpp"
using namespace::std;

template <typename S>
ostream& operator<<(ostream& os,
    const vector<S>& vector)
{
    for (auto element : vector) {
        os << element << ", ";
    }
    return os;
}
