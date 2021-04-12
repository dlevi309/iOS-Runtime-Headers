/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject {

	NSDateInterval* _dateInterval;
	double _uncertaintyThreshold;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double uncertaintyThreshold;                //@synthesize uncertaintyThreshold=_uncertaintyThreshold - In the implementation block
-(NSDateInterval *)dateInterval;
-(id)init;
-(id)description;
-(id)initWithDateInterval:(id)arg1 uncertaintyThreshold:(double)arg2 ;
-(double)uncertaintyThreshold;
@end

