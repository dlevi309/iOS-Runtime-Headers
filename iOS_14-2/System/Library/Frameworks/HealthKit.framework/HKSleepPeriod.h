/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSDateInterval, NSArray, NSString;

@interface HKSleepPeriod : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;
	long long _type;
	double _duration;
	double _inBedDuration;
	double _asleepDuration;
	NSArray* _segments;
	NSString* _timeZoneName;

}

@property (nonatomic,copy,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                            //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                           //@synthesize asleepDuration=_asleepDuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZoneName;                    //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(NSDateInterval *)dateInterval;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)inBedDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3 ;
-(double)asleepDuration;
-(void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)segmentsForCategory:(long long)arg1 ;
-(id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 ;
-(NSArray *)segments;
-(long long)type;
-(void)_setType:(long long)arg1 ;
-(NSString *)timeZoneName;
-(double)duration;
@end

