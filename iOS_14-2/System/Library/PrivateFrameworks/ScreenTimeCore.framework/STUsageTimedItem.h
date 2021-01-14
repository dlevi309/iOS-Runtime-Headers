/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageCategory;

@interface STUsageTimedItem : NSManagedObject

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) long long totalTimeInSeconds; 
@property (nonatomic,readonly) BOOL usageTrusted; 
@property (nonatomic,readonly) STUsageCategory * category; 
@end

