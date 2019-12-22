//
// Created by Anil on 22/12/19.
//

#ifndef STL_ROTATE_H
#define STL_ROTATE_H

#include<vector>
#include "PrintElement.h"

/* This is an algorithm with linear time complexity O(n) that shifts the element between first and last such that the middle element is now first*/

void example_rotate1()
{
  std::vector<int> vec1 = { 2,3,5,6,1};
  print(vec1);
  std::rotate(vec1.begin(), vec1.begin() + 3, vec1.end());
  print(vec1);
}

void example_rotate2()
{
    std::vector<int> vec2 = { 1, 3,2, 4, 5};
    std::vector<int> vec3(3);
    print(vec2);
    std::rotate_copy(vec2.begin(), vec2.begin() + 4, vec2.end(), vec3.begin());
    print(vec2);

}
#endif //STL_ROTATE_H
