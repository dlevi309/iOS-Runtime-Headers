/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)end;
-(NSDate *)start;
-(unsigned long long)visitCount;
-(id)description;
-(id)initWithStart:(id)arg1 end:(id)arg2 visitCount:(unsigned long long)arg3 aggregateDwellTimeBetweenDateRange:(double)arg4 ;
-(double)aggregateDwellTimeBetweenDateRange;
@end

