/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTLocationStoreMetrics : NSObject {

	unsigned long long _count;
	double _distanceTraveled;
	double _maxIntervalBetweenLocations;
	double _spread;

}

@property (assign,nonatomic) unsigned long long count;                        //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double distanceTraveled;                         //@synthesize distanceTraveled=_distanceTraveled - In the implementation block
@property (assign,nonatomic) double maxIntervalBetweenLocations;              //@synthesize maxIntervalBetweenLocations=_maxIntervalBetweenLocations - In the implementation block
@property (assign,nonatomic) double spread;                                   //@synthesize spread=_spread - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSpread:(double)arg1 ;
-(double)spread;
-(id)initWithCount:(unsigned long long)arg1 maxIntervalBetweenLocations:(double)arg2 spread:(double)arg3 distanceTraveled:(double)arg4 ;
-(double)distanceTraveled;
-(void)setDistanceTraveled:(double)arg1 ;
-(double)maxIntervalBetweenLocations;
-(void)setMaxIntervalBetweenLocations:(double)arg1 ;
@end

