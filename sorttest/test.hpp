//
//  test.hpp
//  sorttest
//
//  Created by 4A Labs on 6.09.2023.
//

#ifndef test_hpp
#define test_hpp

#include <stdio.h>
#include <string>
class TestCppClass {
public:
 TestCppClass();
 TestCppClass(const std::string &title);
 ~TestCppClass();
public:
void setTitle(const std::string &title);
const std::string &getTtile();

private:
std::string m_title;
};

#endif /* test_hpp */
