/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary, NSArray;

@interface REMReminderFetchMetadata : REMFetchMetadata {

	NSDictionary* _subtaskCounts;
	NSArray* _dueDateCounts;

}

@property (nonatomic,readonly) NSDictionary * subtaskCounts;              //@synthesize subtaskCounts=_subtaskCounts - In the implementation block
@property (nonatomic,readonly) NSArray * dueDateCounts;                   //@synthesize dueDateCounts=_dueDateCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)subtaskCounts;
-(NSArray *)dueDateCounts;
-(id)initWithSubtaskCounts:(id)arg1 ;
-(id)initWithDueDateCounts:(id)arg1 ;
-(id)initWithSubtaskCounts:(id)arg1 dueDateCounts:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

