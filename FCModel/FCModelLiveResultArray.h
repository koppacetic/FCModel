//
//  FCModelLiveResultArray.h
//
//  Created by Marco Arment on 3/1/14.
//  Copyright (c) 2014 Marco Arment. See included LICENSE file.
//

#import <Foundation/Foundation.h>

// This class is an implementation detail of FCModel's cachedInstancesWhere:arguments: and cachedAllInstances methods.
//
// You can use it directly if you want, although there's not much reason to.
//
// Enumeration and indexed subscript access are intentionally omitted since the array can be invalidated or change from under you at any time.
// Please use allObjects, which gives an immutable snapshot copy, for array access.

@interface FCModelLiveResultArray : NSObject

+ (instancetype)arrayWithModelClass:(Class)fcModelClass queryAfterWHERE:(NSString *)query arguments:(NSArray *)arguments fromGlobalCache:(BOOL)cache;
+ (void)clearGlobalCache;

- (NSArray *)allObjects;

@end
