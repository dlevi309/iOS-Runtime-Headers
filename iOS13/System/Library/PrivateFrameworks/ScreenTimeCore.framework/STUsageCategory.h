/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, STUsageBlock;

@interface STUsageCategory : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long totalTimeInSeconds; 
@property (nonatomic,retain) NSSet * timedItems; 
@property (nonatomic,retain) STUsageBlock * block; 
+(id)categoryItemsExcludingSystemCategories:(id)arg1 ;
+(id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end

