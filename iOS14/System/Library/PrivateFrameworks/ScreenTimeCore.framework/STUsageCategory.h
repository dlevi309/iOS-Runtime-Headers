/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

