//
// Created by Gaurav on 22/12/19.
//

/* This is an algorithm with logarithmic time complexity [O(logn)] that will return true if the value searchec for exists in the sorted
 * sequence (or atleast partitioned with respect to the value search for */
#include<vector>
#include "PrintElement.h"

void example_search1()
{
    //This algorithm can only find whether the element presend it in the array or not
    std::vector <int> vec = {2, 5, 6,7 , 9 };
    print(vec);
    auto s = std::binary_search(vec.begin(), vec.end(), 3) ? "Found" : "Not Found";
    std::cout << s << std::endl;


    //We can also find with the help of element which is greater than the 4 in an array
    //It means if you want to search an element that there exist largest element in the array
    std::vector<int> v1 = {4,5,7,1,5,3};
    print(v1);
    auto s1 = std::binary_search(v1.begin(), v1.end(), 1, std::greater<int> ())? "found" : "not found";
    println(s1);

    //std::lower_bound This will return the iterator to the forst element greater than or equal to a value in a sorted sequence

    std::vector<int> vec2 = {2,4,6, 8};
    auto s2 = std::lower_bound(vec2.begin(), vec2.end(),6);
    std::cout << (s2 != vec2.end() ? std::to_string(*s2) : "Npt Found");
    std::cout << std::endl <<  "Return the index of " << std::distance(vec2.begin(), s2) << std::endl;

    // This is an logarithmic time complexity [O(logn)] that will return an iterator to the first element greater than  the value in a sorted sequence

    std::vector<int> vec3 = {5,6,7,9,1};
    auto it2 = std::upper_bound(vec3.begin(), vec3.end(), 3);
    std::cout << (it2 != vec3.end() ? std::to_string(*it2) : "Not Found") << std::endl;
    std::cout << std::endl << "Return the index of " << std::distance(vec3.begin(), it2) << std::endl;


}
