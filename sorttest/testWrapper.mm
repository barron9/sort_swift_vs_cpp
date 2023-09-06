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
- (instancetype)init
{
 if (self = [super init]) {
self.cppItem = new TestCppClass();
 }
 return self;
}

@end
