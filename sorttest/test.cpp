//
//  test.cpp
//  sorttest
//
//  Created by 4A Labs on 6.09.2023.
//

#include "test.hpp"
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <random>

std::vector<int> vec;
std::set<int> myset;

bool compareDecreasing(int a, int b);

TestCppClass::TestCppClass() {
    
    int n;
    n = 200000;
    int myArray[n];
    // Create a random number generator engine
    std::random_device rd; // Obtain a random seed from the hardware
    std::mt19937 gen(rd()); // Mersenne Twister pseudo-random number generator
    
    // Define a distribution (e.g., uniform distribution between 1 and 100)
    std::uniform_int_distribution<int> distribution(1, 200000);
    

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // You can initialize the array elements if needed
    for (int i = n; i > 0; --i) {
        // Generate random numbers
        int randomNumber = distribution(gen);
        vec.push_back(randomNumber);
        //myset.insert(randomNumber);
    }
    
    
    std::sort(vec.begin(), vec.end(), compareDecreasing);
    std::vector<int>::iterator newEnd = std::unique(vec.begin(), vec.end());
    vec.erase(newEnd, vec.end());
    
    // Stop the timer
    auto stop = std::chrono::high_resolution_clock::now();
    
    // Calculate the duration in microseconds
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    
    std::cout << "Execution time: " << duration.count() << " microseconds" << std::endl;
}
TestCppClass::~TestCppClass() {}

bool compareDecreasing(int a, int b) {
    return a > b; // Compare in descending order
}

