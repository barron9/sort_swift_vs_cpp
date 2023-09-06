//
//  test.cpp
//  sorttest
//
//  Created by 4A Labs on 6.09.2023.
//

#include "test.hpp"


TestCppClass::TestCppClass() {}
TestCppClass::TestCppClass(const std::string &title): m_title(title) {}
TestCppClass::~TestCppClass() {
    
    
}
void TestCppClass::setTitle(const std::string &title)
{
 m_title = title;
}
const std::string &TestCppClass::getTtile()
{
 return m_title;
}
