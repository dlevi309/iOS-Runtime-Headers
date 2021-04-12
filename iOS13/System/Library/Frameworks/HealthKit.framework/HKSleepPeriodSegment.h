/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSArray;

@interface HKSleepPeriodSegment : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _category;
	NSArray* _samples;
	double _duration;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samples;               //@synthesize samples=_samples - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
-(long long)category;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(NSArray *)samples;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 category:(long long)arg3 samples:(id)arg4 duration:(double)arg5 ;
@end

