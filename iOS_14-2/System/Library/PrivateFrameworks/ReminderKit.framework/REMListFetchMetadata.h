/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)incompleteReminderCounts;
-(long long)scheduledCount;
-(id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

