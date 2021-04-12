/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageBlock;

@interface STUsageCountedItem : NSManagedObject

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long numberOfPickups; 
@property (nonatomic,readonly) long long numberOfNotifications; 
@property (nonatomic,readonly) BOOL usageTrusted; 
@property (nonatomic,readonly) STUsageBlock * block; 
+(id)notificationItemsExcludingSystemHiddenApplications:(id)arg1 ;
+(id)pickupItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end

