/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STUsageBlock;

@interface STUsageCountedItem : NSManagedObject

@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long numberOfPickups; 
@property (nonatomic,readonly) long long numberOfNotifications; 
@property (nonatomic,readonly) STUsageBlock * block; 
+(id)notificationItemsExcludingSystemHiddenApplications:(id)arg1 ;
+(id)pickupItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end

