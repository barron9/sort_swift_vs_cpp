//
//  testWrapper.m
//  sorttest
//
//  Created by 4A Labs on 6.09.2023.
//

#import "testWrapper.h"
#include "test.hpp"
@interface testWrapper()
@property TestCppClass *cppItem;
@end
@implementation testWrapper
- (instancetype)init:(NSArray*)arr
{
 if (self = [super init]) {
     std::vector<int> myVector;
         for (int j = 0; j< arr.count-1; ++j) {
             int myInt = [arr[j]intValue];
             myVector.push_back(myInt);
         }
     self.cppItem = new TestCppClass(myVector);
 }
 return self;
}

@end
