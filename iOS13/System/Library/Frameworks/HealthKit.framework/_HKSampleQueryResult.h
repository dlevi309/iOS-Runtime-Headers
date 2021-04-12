/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSDateInterval, NSArray;

@interface _HKSampleQueryResult : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;
	NSArray* _samples;

}

@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samples;                     //@synthesize samples=_samples - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)samples;
-(NSDateInterval *)dateInterval;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3 ;
@end

