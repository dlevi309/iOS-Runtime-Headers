/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDate;

@interface RTLearnedPlaceTypeInferenceDailyStats : NSObject {

	NSDate* _start;
	NSDate* _end;
	unsigned long long _visitCount;
	double _aggregateDwellTimeBetweenDateRange;

}

@property (nonatomic,readonly) NSDate * start;                                         //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                           //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) unsigned long long visitCount;                          //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,readonly) double aggregateDwellTimeBetweenDateRange;              //@synthesize aggregateDwellTimeBetweenDateRange=_aggregateDwellTimeBetweenDateRange - In the implementation block
-(id)description;
-(NSDate *)start;
-(NSDate *)end;
-(unsigned long long)visitCount;
-(id)initWithStart:(id)arg1 end:(id)arg2 visitCount:(unsigned long long)arg3 aggregateDwellTimeBetweenDateRange:(double)arg4 ;
-(double)aggregateDwellTimeBetweenDateRange;
@end

