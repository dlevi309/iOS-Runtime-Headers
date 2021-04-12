/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject {

	NSDateInterval* _dateInterval;
	double _uncertaintyThreshold;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double uncertaintyThreshold;                //@synthesize uncertaintyThreshold=_uncertaintyThreshold - In the implementation block
-(id)init;
-(id)description;
-(NSDateInterval *)dateInterval;
-(id)initWithDateInterval:(id)arg1 uncertaintyThreshold:(double)arg2 ;
-(double)uncertaintyThreshold;
@end

