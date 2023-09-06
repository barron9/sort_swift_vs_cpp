//
//  testWrapper.h
//  sorttest
//
//  Created by 4A Labs on 6.09.2023.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface testWrapper : NSObject
- (instancetype)initWithTitle:(NSString*)title;
- (NSString*)getTitle;
- (void)setTitle:(NSString*)title;
@end

NS_ASSUME_NONNULL_END
