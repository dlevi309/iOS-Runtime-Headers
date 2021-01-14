/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSArray, NSDateInterval;

@interface HKSleepDay : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _sleepPeriods;
	NSDateInterval* _dateInterval;
	double _inBedDuration;
	double _asleepDuration;

}

@property (nonatomic,copy,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sleepPeriods;                     //@synthesize sleepPeriods=_sleepPeriods - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                            //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                           //@synthesize asleepDuration=_asleepDuration - In the implementation block
-(NSDateInterval *)dateInterval;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)inBedDuration;
-(double)asleepDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3 ;
-(id)description;
-(NSArray *)sleepPeriods;
-(id)primarySleepPeriod;
@end

