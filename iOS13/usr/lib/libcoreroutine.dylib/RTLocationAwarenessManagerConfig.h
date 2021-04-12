/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTLocationAwarenessManagerConfig : NSObject <NSCopying> {

	double _heartbeatIntervalResolution;
	double _maxHeartbeatInterval;
	double _dispatchTimerLeeway;
	double _requiredHorizontalAccuracy;
	double _activeDuration;
	double _minMetricSubmissionAge;
	double _maxHorizontalAccuracyForCoarseLocation;

}

@property (nonatomic,readonly) double heartbeatIntervalResolution;                         //@synthesize heartbeatIntervalResolution=_heartbeatIntervalResolution - In the implementation block
@property (nonatomic,readonly) double maxHeartbeatInterval;                                //@synthesize maxHeartbeatInterval=_maxHeartbeatInterval - In the implementation block
@property (nonatomic,readonly) double dispatchTimerLeeway;                                 //@synthesize dispatchTimerLeeway=_dispatchTimerLeeway - In the implementation block
@property (nonatomic,readonly) double requiredHorizontalAccuracy;                          //@synthesize requiredHorizontalAccuracy=_requiredHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) double activeDuration;                                      //@synthesize activeDuration=_activeDuration - In the implementation block
@property (nonatomic,readonly) double minMetricSubmissionAge;                              //@synthesize minMetricSubmissionAge=_minMetricSubmissionAge - In the implementation block
@property (nonatomic,readonly) double maxHorizontalAccuracyForCoarseLocation;              //@synthesize maxHorizontalAccuracyForCoarseLocation=_maxHorizontalAccuracyForCoarseLocation - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)activeDuration;
-(double)minMetricSubmissionAge;
-(double)heartbeatIntervalResolution;
-(double)maxHeartbeatInterval;
-(double)dispatchTimerLeeway;
-(double)requiredHorizontalAccuracy;
-(double)maxHorizontalAccuracyForCoarseLocation;
-(id)initWithHeartbeatIntervalResolution:(double)arg1 maxHeartbeatInterval:(double)arg2 dispatchTimerLeeway:(double)arg3 requiredHorizontalAccuracy:(double)arg4 activeDuration:(double)arg5 minMetricSubmissionAge:(double)arg6 maxHorizontalAccuracyForCoarseLocation:(double)arg7 ;
@end

