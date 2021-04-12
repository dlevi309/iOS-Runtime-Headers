/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, NSCalendar, NSArray, HKQuantity, HKSleepSchedule, NSString;

@interface HKSHSleepDaySummary : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	double _inBedDuration;
	double _sleepDuration;
	BOOL _didComputeDurationTotals;
	long long _morningIndex;
	NSDateInterval* _dateInterval;
	NSCalendar* _calendar;
	NSArray* _periods;
	NSArray* _schedules;
	HKQuantity* _sleepDurationGoal;

}

@property (nonatomic,readonly) long long morningIndex;                              //@synthesize morningIndex=_morningIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSArray * periods;                              //@synthesize periods=_periods - In the implementation block
@property (nonatomic,copy,readonly) NSArray * schedules;                            //@synthesize schedules=_schedules - In the implementation block
@property (nonatomic,copy,readonly) HKSleepSchedule * primarySchedule; 
@property (nonatomic,copy,readonly) HKQuantity * sleepDurationGoal;                 //@synthesize sleepDurationGoal=_sleepDurationGoal - In the implementation block
@property (nonatomic,readonly) double inBedDuration; 
@property (nonatomic,readonly) double sleepDuration; 
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)daySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 periods:(id)arg4 schedules:(id)arg5 sleepDurationGoal:(id)arg6 ;
+(id)emptyDaySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 ;
-(NSDateInterval *)dateInterval;
-(NSArray *)periods;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(double)inBedDuration;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)sleepDurationGoal;
-(NSString *)hk_redactedDescription;
-(NSArray *)schedules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sleepDuration;
-(BOOL)isEqual:(id)arg1 ;
-(long long)morningIndex;
-(HKSleepSchedule *)primarySchedule;
-(void)_computeDurationTotalsIfNeeded;
@end

