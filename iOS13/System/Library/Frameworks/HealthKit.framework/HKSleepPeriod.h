/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSDateInterval, NSArray, NSString;

@interface HKSleepPeriod : NSObject {

	BOOL _startDateConformsToIntendedBedtime;
	BOOL _endDateConformsToIntendedBedtime;
	BOOL _consistent;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;
	long long _type;
	double _duration;
	double _inBedDuration;
	double _asleepDuration;
	NSDateInterval* _intendedBedtime;
	long long _intendedBedtimeType;
	double _startDateOffsetFromIntendedBedtime;
	double _endDateOffsetFromIntendedBedtime;
	double _asleepDurationGoal;
	long long _asleepDurationGoalSource;
	double _timeToFallAsleep;
	double _timeToGetOutOfBed;
	double _timeAwakeDuringIntendedSleepPeriod;
	double _efficiency;
	long long _numberOfInterruptions;
	NSArray* _segments;
	NSString* _timeZoneName;

}

@property (nonatomic,copy,readonly) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                  //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                     //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                                   //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                                  //@synthesize asleepDuration=_asleepDuration - In the implementation block
@property (nonatomic,readonly) NSDateInterval * intendedBedtime;                       //@synthesize intendedBedtime=_intendedBedtime - In the implementation block
@property (nonatomic,readonly) long long intendedBedtimeType;                          //@synthesize intendedBedtimeType=_intendedBedtimeType - In the implementation block
@property (nonatomic,readonly) BOOL startDateConformsToIntendedBedtime;                //@synthesize startDateConformsToIntendedBedtime=_startDateConformsToIntendedBedtime - In the implementation block
@property (nonatomic,readonly) double startDateOffsetFromIntendedBedtime;              //@synthesize startDateOffsetFromIntendedBedtime=_startDateOffsetFromIntendedBedtime - In the implementation block
@property (nonatomic,readonly) BOOL endDateConformsToIntendedBedtime;                  //@synthesize endDateConformsToIntendedBedtime=_endDateConformsToIntendedBedtime - In the implementation block
@property (nonatomic,readonly) double endDateOffsetFromIntendedBedtime;                //@synthesize endDateOffsetFromIntendedBedtime=_endDateOffsetFromIntendedBedtime - In the implementation block
@property (nonatomic,readonly) double asleepDurationGoal;                              //@synthesize asleepDurationGoal=_asleepDurationGoal - In the implementation block
@property (nonatomic,readonly) long long asleepDurationGoalSource;                     //@synthesize asleepDurationGoalSource=_asleepDurationGoalSource - In the implementation block
@property (nonatomic,readonly) double timeToFallAsleep;                                //@synthesize timeToFallAsleep=_timeToFallAsleep - In the implementation block
@property (nonatomic,readonly) double timeToGetOutOfBed;                               //@synthesize timeToGetOutOfBed=_timeToGetOutOfBed - In the implementation block
@property (nonatomic,readonly) double timeAwakeDuringIntendedSleepPeriod;              //@synthesize timeAwakeDuringIntendedSleepPeriod=_timeAwakeDuringIntendedSleepPeriod - In the implementation block
@property (nonatomic,readonly) double efficiency;                                      //@synthesize efficiency=_efficiency - In the implementation block
@property (nonatomic,readonly) long long numberOfInterruptions;                        //@synthesize numberOfInterruptions=_numberOfInterruptions - In the implementation block
@property (getter=isConsistent,nonatomic,readonly) BOOL consistent;                    //@synthesize consistent=_consistent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                                //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZoneName;                           //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(long long)type;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(NSDateInterval *)dateInterval;
-(NSArray *)segments;
-(void)_setType:(long long)arg1 ;
-(NSString *)timeZoneName;
-(id)_firstBedtimeAlarmWithCalendar:(id)arg1 ;
-(void)_setIntendedBedtime:(id)arg1 type:(long long)arg2 ;
-(double)inBedDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3 ;
-(BOOL)isConsistent;
-(double)asleepDuration;
-(double)efficiency;
-(long long)numberOfInterruptions;
-(void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)segmentsForCategory:(long long)arg1 ;
-(id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 ;
-(NSDateInterval *)intendedBedtime;
-(long long)intendedBedtimeType;
-(BOOL)startDateConformsToIntendedBedtime;
-(double)startDateOffsetFromIntendedBedtime;
-(BOOL)endDateConformsToIntendedBedtime;
-(double)endDateOffsetFromIntendedBedtime;
-(double)asleepDurationGoal;
-(long long)asleepDurationGoalSource;
-(double)timeToFallAsleep;
-(double)timeToGetOutOfBed;
-(double)timeAwakeDuringIntendedSleepPeriod;
@end

