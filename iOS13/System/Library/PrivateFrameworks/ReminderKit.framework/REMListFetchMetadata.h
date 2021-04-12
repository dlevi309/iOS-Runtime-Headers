/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata {

	NSDictionary* _incompleteReminderCounts;
	long long _scheduledCount;

}

@property (nonatomic,readonly) NSDictionary * incompleteReminderCounts;              //@synthesize incompleteReminderCounts=_incompleteReminderCounts - In the implementation block
@property (nonatomic,readonly) long long scheduledCount;                             //@synthesize scheduledCount=_scheduledCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)incompleteReminderCounts;
-(long long)scheduledCount;
-(id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2 ;
@end

