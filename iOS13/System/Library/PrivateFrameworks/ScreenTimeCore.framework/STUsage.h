/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, STCoreDevice, STCoreUser;

@interface STUsage : NSManagedObject

@property (nonatomic,retain) NSDate * lastEventDate; 
@property (nonatomic,retain) NSSet * blocks; 
@property (nonatomic,retain) NSDate * lastUpdatedDate; 
@property (nonatomic,retain) STCoreDevice * device; 
@property (nonatomic,retain) STCoreUser * user; 
+(id)fetchRequestMatchingUser:(id)arg1 device:(id)arg2 ;
@end

