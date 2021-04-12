/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSCalendar, NSTimeZone, SCLScheduleTime, SCLScheduleRecurrence;

@interface SCLUnlockHistoryItem : NSObject <NSCoding, NSSecureCoding> {

	NSDateInterval* _unlockedInterval;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	SCLScheduleTime* _scheduleStartTime;
	SCLScheduleTime* _scheduleEndTime;
	SCLScheduleRecurrence* _effectiveRecurrence;

}

@property (nonatomic,readonly) NSDateInterval * unlockedInterval;                        //@synthesize unlockedInterval=_unlockedInterval - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) SCLScheduleTime * scheduleStartTime;                      //@synthesize scheduleStartTime=_scheduleStartTime - In the implementation block
@property (nonatomic,readonly) SCLScheduleTime * scheduleEndTime;                        //@synthesize scheduleEndTime=_scheduleEndTime - In the implementation block
@property (nonatomic,readonly) SCLScheduleRecurrence * effectiveRecurrence;              //@synthesize effectiveRecurrence=_effectiveRecurrence - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDateInterval *)unlockedInterval;
-(SCLScheduleTime *)scheduleStartTime;
-(SCLScheduleTime *)scheduleEndTime;
-(SCLScheduleRecurrence *)effectiveRecurrence;
-(id)initWithInterval:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 ;
-(void)_loadEffectiveRecurrence;
-(id)initWithInterval:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 ;
@end

