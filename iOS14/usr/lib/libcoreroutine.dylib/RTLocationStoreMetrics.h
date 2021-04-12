/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(double)spread;
-(unsigned long long)count;
-(id)description;
-(void)setSpread:(double)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 maxIntervalBetweenLocations:(double)arg2 spread:(double)arg3 distanceTraveled:(double)arg4 ;
-(double)distanceTraveled;
-(void)setDistanceTraveled:(double)arg1 ;
-(double)maxIntervalBetweenLocations;
-(void)setMaxIntervalBetweenLocations:(double)arg1 ;
@end

