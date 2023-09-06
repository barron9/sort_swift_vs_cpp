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
- (instancetype)initWithTitle:(NSString*)title
{
 if (self = [super init]) {
self.cppItem = new TestCppClass(std::string([title cStringUsingEncoding:NSUTF8StringEncoding]));
 }
 return self;
}
- (NSString*)getTitle
{
return [NSString stringWithUTF8String:self.cppItem->getTtile().c_str()];
}
- (void)setTitle:(NSString*)title
{
self.cppItem->setTitle(std::string([title cStringUsingEncoding:NSUTF8StringEncoding]));
}
@end
