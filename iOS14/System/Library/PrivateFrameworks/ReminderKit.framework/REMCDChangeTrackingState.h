/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface REMCDChangeTrackingState : NSManagedObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * clientName; 
@property (nonatomic,retain) NSData * lastConsumedChangeTokenData; 
@property (nonatomic,copy) NSDate * lastConsumedDate; 
+(id)fetchRequest;
@end

