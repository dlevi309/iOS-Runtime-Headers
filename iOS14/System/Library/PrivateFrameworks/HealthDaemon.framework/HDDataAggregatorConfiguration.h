/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataAggregatorConfiguration : NSObject <NSCopying> {

	BOOL _hasActiveWorkout;
	BOOL _hasForegroundObserver;
	double _collectionLatency;
	double _aggregationInterval;
	double _maximumSeriesDuration;

}

@property (nonatomic,readonly) double collectionLatency;                  //@synthesize collectionLatency=_collectionLatency - In the implementation block
@property (nonatomic,readonly) double aggregationInterval;                //@synthesize aggregationInterval=_aggregationInterval - In the implementation block
@property (nonatomic,readonly) double maximumSeriesDuration;              //@synthesize maximumSeriesDuration=_maximumSeriesDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveWorkout;                     //@synthesize hasActiveWorkout=_hasActiveWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundObserver;                  //@synthesize hasForegroundObserver=_hasForegroundObserver - In the implementation block
+(id)configurationWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(BOOL)arg4 foregroundObserver:(BOOL)arg5 ;
-(BOOL)hasActiveWorkout;
-(BOOL)hasForegroundObserver;
-(void)setHasForegroundObserver:(BOOL)arg1 ;
-(id)description;
-(double)maximumSeriesDuration;
-(double)aggregationInterval;
-(id)initWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(BOOL)arg4 foregroundObserver:(BOOL)arg5 ;
-(double)collectionLatency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

