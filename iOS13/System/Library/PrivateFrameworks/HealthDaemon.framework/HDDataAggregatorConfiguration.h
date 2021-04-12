/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumSeriesDuration;
-(double)collectionLatency;
-(double)aggregationInterval;
-(BOOL)hasActiveWorkout;
-(BOOL)hasForegroundObserver;
-(id)initWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(BOOL)arg4 foregroundObserver:(BOOL)arg5 ;
-(void)setHasForegroundObserver:(BOOL)arg1 ;
@end

