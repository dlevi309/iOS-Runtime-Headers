/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class RTStateModelEarliestLatestEl, NSObject, RTMetricManager, NSMutableDictionary;

@interface RTStateModel : NSObject {

	RTStateModelEarliestLatestEl* _earliestLatestStateModelEl;
	NSObject*<OS_dispatch_queue> _queue;
	RTMetricManager* _metricManager;
	NSMutableDictionary* _stateModelLut;

}

@property (nonatomic,retain) RTStateModelEarliestLatestEl * earliestLatestStateModelEl;              //@synthesize earliestLatestStateModelEl=_earliestLatestStateModelEl - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateModelLut;                                    //@synthesize stateModelLut=_stateModelLut - In the implementation block
+(double)getOutOfStateConfidenceWithOneStatePred:(id)arg1 ;
+(double)getDistfromLat:(double)arg1 fromLon:(double)arg2 toLat:(double)arg3 toLon:(double)arg4 ;
+(double)deriveClusterThresholdFromUncClustAplha:(double)arg1 andUncClustBeta:(double)arg2 ;
-(void)updateInternalState;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)getAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2 ;
-(RTMetricManager *)metricManager;
-(id)init;
-(double)calculateConfidenceWithNearbyLOIs:(unsigned long long)arg1 impossibleTransitions:(unsigned long long)arg2 ;
-(id)getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 ;
-(id)initWithLearnedLocationsOfInterest:(id)arg1 metricManager:(id)arg2 queue:(id)arg3 ;
-(NSMutableDictionary *)stateModelLut;
-(id)getOOStClusterData:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 refLoc:(id)arg4 ;
-(id)getPredictedLocationsOfInterestWithCriteria:(id)arg1 ;
-(id)getPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)logStateModelDominantPlacesMetric;
-(void)setEarliestLatestStateModelEl:(RTStateModelEarliestLatestEl *)arg1 ;
-(unsigned long long)calculateNumberOfNearbyLOIs;
-(id)getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 ;
-(void)logStateModelAvailabilityMetricWithAvailability:(unsigned long long)arg1 precisionRecall:(unsigned)arg2 ;
-(id)getPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 ;
-(CLLocationCoordinate2D)getEndingCoordinateWithStartingLocation:(id)arg1 distance:(double)arg2 ;
-(void)logStateModelLengthMetric;
-(id)_getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 ;
-(unsigned long long)calculateDominantLocationsWithOptions:(id)arg1 ;
-(id)_getRecursivelyAllLOIsWithinDistance:(double)arg1 ofLocation:(id)arg2 previouslyFoundLocationsOfInterest:(id)arg3 ;
-(RTStateModelEarliestLatestEl *)earliestLatestStateModelEl;
-(id)findClusterWithLocation:(id)arg1 ;
-(void)logStateModelAvailabilityMetricWithIntervalSinceLastUpdate:(double)arg1 untilNow:(id)arg2 ;
-(void)collectMetricsWithIntervalSinceLastUpdate:(double)arg1 ;
-(void)logStateModelConfidenceMetric;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)logStateModelEntryExitsStandardDeviations;
-(double)getNumberOfWeeksInStateModel;
-(unsigned long long)calculateNumberOfImpossibleTransitions;
-(BOOL)anyClusterOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 andEnteredEarlierThan:(double)arg3 ;
-(unsigned)calculateStateModelAvailabilityPrecisionRecallOnDate:(id)arg1 predictedLocations:(id)arg2 isHighConfidenceOnly:(BOOL)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateModelLut:(NSMutableDictionary *)arg1 ;
-(double)getMaxDistFromInterval:(double)arg1 withVelocity:(double)arg2 ;
-(id)getMostRecentLocationForDate:(id)arg1 ;
@end

