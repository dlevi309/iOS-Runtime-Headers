/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDistanceCalculator, RTLearnedLocationStore, RTLocationStore, RTMotionActivityManager, RTVisitManager;

@interface RTVisitMetrics : NSObject {

	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationStore* _learnedLocationStore;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	RTVisitManager* _visitManager;

}
-(id)init;
-(id)initWithDistanceCalculator:(id)arg1 learnedLocationStore:(id)arg2 locationStore:(id)arg3 motionActivityManager:(id)arg4 visitManager:(id)arg5 ;
-(id)locationStoreMetricsForInterval:(id)arg1 ;
-(id)motionMetricsForDateInterval:(id)arg1 ;
-(id)_nearbyLoisFromVisit:(id)arg1 ;
-(id)_closestLoi:(id)arg1 location:(id)arg2 ;
-(id)_associatedLoiFromVisit:(id)arg1 ;
-(id)realtimeMetricsForConfiguration:(unsigned long long)arg1 dateInterval:(id)arg2 error:(id*)arg3 ;
-(id)batchedMetricsForConfiguration:(unsigned long long)arg1 dateInterval:(id)arg2 error:(id*)arg3 ;
-(id)metricForPipelineConfiguration:(unsigned long long)arg1 previousVisit:(id)arg2 visit:(id)arg3 ;
-(id)metricsForConfiguration:(unsigned long long)arg1 dateInterval:(id)arg2 error:(id*)arg3 ;
-(BOOL)collectMetricsForDateInterval:(id)arg1 error:(id*)arg2 ;
@end

