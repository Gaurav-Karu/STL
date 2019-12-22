//
// Created by Gaurav on 21/12/19.
//

//ste::sort
/*   This is an algorithm with linea arithmetic time complexity [O(nlogn)] that you can use to order the elements of container
 * from begin to end. The ordering by default is ascending for numeric values and lexicographical ascending for string values
 * ordering of equivalent elements are not guaranteed to keep their same order.*/

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include "PrintElement.h"

/* Sorting the vector, Here we need to pass the full length of the array*/

void example_sort1 ()
{
    std::vector<int> v = { 2,3,4,1 };

    print (v); // outputs 2 3 4 1
    sort (v.begin (), v.end ());
    print (v); // outputs 1 2 3 4
}

/* It is not necessary to pass the full length of the array always, if the user want to sort only the few elements*/

void example_sort2 ()
{
    std::vector<int> v = {3, 2,1,5,6};
    print(v); // Befor sorting
    sort(v.begin(), v.begin() + 3);
    print(v);
}

/* Similarly we can also sort the string or the characters depending on the need*/

void example_sort3()
{
    std::vector<char> vec = {'c', 'f', 'a', 't'};
    print(vec);
    sort(vec.begin(), vec.end());
    print(vec);

    /* similary sorting a string */
    std::vector<std::string> vect = {"monkey", "elephant", "dog", " cat"};
    print(vect);
    sort(vect.begin(), vect.end());
    print(vect);
}

/* Sort the string by length */

void examole_sort4()
{
    std::vector<std::string> vect = {"monkey", "elephant", "dog", " cat"};
    auto sortByLength = [] (auto &a, auto &b) {return a.size() < b.size();}; // Asceding order
    print(vect);
    sort(vect.begin(), vect.end(), sortByLength);
    print(vect);

    //We can make it one liner by using lamda expression
    sort(vect.begin(), vect.end(), [](auto&a, auto &b) { return a.size() < b.size();});
    print(vect);
}
