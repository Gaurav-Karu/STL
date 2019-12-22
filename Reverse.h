//
// Created by Anil on 22/12/19.
//

#ifndef STL_REVERSE_H
#define STL_REVERSE_H

#include<vector>
#include "PrintElement.h"

/* This is an algorithm with linear time complexity [O(n)] that will copy the reverse elements between first and last to the result iterator */
void example_reverse1()
{
    std::vector<int> vec = { 2,4,5,6,7,8,2};
    print(vec);
    std::reverse(vec.begin(), vec.end());
    print(vec);
}


void example_reverse2()
{
    std::vector<int> vec1 = { 2,3,4,5,1,4};
    print(vec1);
    std::vector<int> veccopy(4);
    print(veccopy);
    std::reverse_copy(vec1.begin(), vec1.end(), veccopy.begin());
    print(veccopy);
}



#endif //STL_REVERSE_H
