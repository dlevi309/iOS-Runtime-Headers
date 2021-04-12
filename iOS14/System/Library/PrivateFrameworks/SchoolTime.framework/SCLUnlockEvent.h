/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID;

@interface SCLUnlockEvent : NSManagedObject

@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) short duration; 
@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * timeZoneName; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (assign,nonatomic) short scheduleStartHour; 
@property (assign,nonatomic) short scheduleStartMinute; 
@property (assign,nonatomic) short scheduleEndHour; 
@property (assign,nonatomic) short scheduleEndMinute; 
+(id)fetchRequest;
@end

