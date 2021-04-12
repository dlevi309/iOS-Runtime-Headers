/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageCategory;

@interface STUsageTimedItem : NSManagedObject

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) long long totalTimeInSeconds; 
@property (nonatomic,readonly) STUsageCategory * category; 
@end

