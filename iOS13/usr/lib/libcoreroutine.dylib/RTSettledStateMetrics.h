/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSString;

@interface RTSettledStateMetrics : RTMetric <RTMetricProtocol> {

	BOOL _isSettledState;
	double _distancetraveledAfterEnteringState;
	double _duration;

}

@property (assign,nonatomic) double distancetraveledAfterEnteringState;              //@synthesize distancetraveledAfterEnteringState=_distancetraveledAfterEnteringState - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL isSettledState;                                    //@synthesize isSettledState=_isSettledState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(unsigned long long)bucketForDurationLength:(double)arg1 ;
+(unsigned long long)bucketForDistanceTraveled:(double)arg1 ;
+(id)binsForDistanceTraveled;
+(id)binsForDuration;
+(id)createSettledStateMetricsForNewSettledStateTransition:(id)arg1 settledStateTransitionStore:(id)arg2 locationStore:(id)arg3 ;
+(id)supportedMetricKeys;
+(void)submitSettledStateMetricsForSettledStateTransition:(id)arg1 settledStateTransitionStore:(id)arg2 locationStore:(id)arg3 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithCurrentSettledStateTransition:(id)arg1 nextSettledStateTransition:(id)arg2 distanceTraveled:(unsigned long long)arg3 ;
-(double)distancetraveledAfterEnteringState;
-(void)setDistancetraveledAfterEnteringState:(double)arg1 ;
-(BOOL)isSettledState;
-(void)setIsSettledState:(BOOL)arg1 ;
@end

