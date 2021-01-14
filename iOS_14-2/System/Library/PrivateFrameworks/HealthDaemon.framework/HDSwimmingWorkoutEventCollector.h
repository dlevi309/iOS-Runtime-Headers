/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDWorkoutEventCollector.h>

@protocol OS_dispatch_queue;
@class CMSwimTracker, CMSwimData, NSDate, NSObject;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {

	CMSwimTracker* _swimTracker;
	CMSwimData* _referenceSwimData;
	CMSwimData* _lastSwimData;
	NSDate* _currentSegmentStartDate;
	NSObject*<OS_dispatch_queue> _workoutEventQueue;

}
+(BOOL)isAvailableInCurrentHardware;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(void)stop;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
-(void)unitTest_setCMWorkoutManager:(id)arg1 ;
-(void)_queue_startCollectionWithSessionId:(id)arg1 ;
-(void)_queue_stopCollection;
-(void)_queue_addSegmentEventWithFallbackEndDate:(id)arg1 ;
-(void)_queue_querySwimDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_errorOccurred:(id)arg1 ;
-(void)_queue_processSwimData:(id)arg1 error:(id)arg2 ;
-(void)_queue_addLapEventForSwimData:(id)arg1 ;
-(void)_queue_addSegmentEventForSwimData:(id)arg1 ;
@end

