/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLSchedule.h>

@class SCLScheduleTime;

@interface SCLSimpleSchedule : SCLSchedule {

	SCLScheduleTime* _startTime;
	SCLScheduleTime* _endTime;
	long long _repeatSchedule;

}

@property (nonatomic,copy,readonly) SCLScheduleTime * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) SCLScheduleTime * endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long repeatSchedule;                      //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)repeatSchedule;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(SCLScheduleTime *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLScheduleTime *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)recurrences;
-(id)initWithSimpleSchedule:(id)arg1 ;
@end

