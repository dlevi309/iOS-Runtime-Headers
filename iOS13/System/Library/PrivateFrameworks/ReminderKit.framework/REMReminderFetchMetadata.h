/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)subtaskCounts;
-(NSArray *)dueDateCounts;
-(id)initWithSubtaskCounts:(id)arg1 ;
-(id)initWithDueDateCounts:(id)arg1 ;
-(id)initWithSubtaskCounts:(id)arg1 dueDateCounts:(id)arg2 ;
@end

