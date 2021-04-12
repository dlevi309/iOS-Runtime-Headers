/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SCLSchedule.h>

@class NSArray;

@interface SCLRecurrenceSchedule : SCLSchedule {

	NSArray* _recurrences;

}
+(BOOL)supportsSecureCoding;
+(void)performBlockWithSharedFormatter:(/*^block*/id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)recurrences;
-(id)initWithRecurrences:(id)arg1 ;
-(id)initWithTimeIntervals:(id)arg1 repeatSchedule:(long long)arg2 ;
@end

