//
// Created by Anil on 22/12/19.
//
#include<iostream>

#ifndef STL_PRINTELEMENT_H
#define STL_PRINTELEMENT_H


template<typename T>

static void print (T t) {

    for (const auto& e : t) std::cout << e << " ";
    std::cout << std::endl;
}

template <typename T>
static bool println(T value)
{
    std::cout << value << " ";
    std::cout << std::endl;
    return value;
}



#endif //STL_PRINTELEMENT_H
