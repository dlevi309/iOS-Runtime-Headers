/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDateInterval *)dateInterval;
-(NSArray *)samples;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3 ;
@end

