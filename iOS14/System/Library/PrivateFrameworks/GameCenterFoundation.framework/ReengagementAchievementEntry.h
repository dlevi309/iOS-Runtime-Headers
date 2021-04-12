/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber;

@interface ReengagementAchievementEntry : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * lastReportedDate; 
@property (nonatomic,copy) NSNumber * percentComplete; 
@property (nonatomic,copy) NSString * playerID; 
+(id)fetchRequest;
@end

