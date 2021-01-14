/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLTimeInterval;

@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding> {

	SCLTimeInterval* _timeInterval;
	long long _day;

}

@property (nonatomic,copy,readonly) SCLTimeInterval * timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) long long day;                                    //@synthesize day=_day - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)dayOfWeekAndStartTimeComparator;
-(long long)day;
-(SCLTimeInterval *)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTimeInterval:(id)arg1 day:(long long)arg2 ;
-(id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)isActiveAtDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)intersectsRecurrence:(id)arg1 ;
-(BOOL)isContiguousWithRecurrence:(id)arg1 ;
@end

