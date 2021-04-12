/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDActivityCacheStatisticsBuilderSourceOrderDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HKQuantity, NSNumber, NSString;

@interface HDActivityCacheStatisticsBuilder : NSObject {

	vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >* _workouts;
	vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >* _standHourSamples;
	vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >* _activationLogSamples;
	HKQuantity* _lastActiveEnergyValue;
	NSNumber* _lastMoveMinuteValue;
	HKQuantity* _lastDistanceWalkingValue;
	NSNumber* _lastFlightsClimbedValue;
	NSNumber* _lastStepCountValue;
	NSNumber* _lastPushCountValue;
	NSNumber* _lastStandHourValue;
	NSNumber* _lastExerciseMinuteValue;
	double _deepBreathingDurationValue;
	vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >* _activeSourcesList;
	map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > >* _sourceTotalsByIntervalIndexByTypeCode;
	double _builderStartTime;
	double _builderEndTime;
	NSString* _loggingName;
	double _intervalDuration;
	id<HDActivityCacheStatisticsBuilderSourceOrderDelegate> _sourceOrderDelegate;

}

@property (assign,nonatomic) double intervalDuration;                                                                         //@synthesize intervalDuration=_intervalDuration - In the implementation block
@property (assign,nonatomic,__weak) id<HDActivityCacheStatisticsBuilderSourceOrderDelegate> sourceOrderDelegate;              //@synthesize sourceOrderDelegate=_sourceOrderDelegate - In the implementation block
-(void)addWorkouts:(const vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >*)arg1 ;
-(double)intervalDuration;
-(id)init;
-(id)_loggingPrefix;
-(void)setIntervalDuration:(double)arg1 ;
-(id)createMoveStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2 ;
-(id)createMoveMinuteStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2 ;
-(id)createExerciseStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2 ;
-(id)createStandStatisticsWithCalendar:(id)arg1 ;
-(id)workoutSamplesWithSourceManager:(id)arg1 ;
-(id)activeEnergyValue;
-(long long)moveMinuteValue;
-(id)distanceWalkingValue;
-(long long)standHourValue;
-(long long)exerciseMinuteValue;
-(long long)pushCountValue;
-(long long)stepCountValue;
-(double)deepBreathingDurationValue;
-(long long)flightsClimbedValue;
-(id)initWithDateInterval:(id)arg1 loggingName:(id)arg2 ;
-(void)setSourceOrderDelegate:(id<HDActivityCacheStatisticsBuilderSourceOrderDelegate>)arg1 ;
-(void)addActivationLogSamples:(const vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >*)arg1 ;
-(void)addDeepBreathingSessionDuration:(double)arg1 ;
-(void)addStandHourSamples:(const vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >*)arg1 ;
-(void)addDeviceSamples:(const vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >*)arg1 typeCode:(long long)arg2 ;
-(void)addDeviceSample:(HDActivityCacheStatisticsBuilderSample)arg1 typeCode:(long long)arg2 ;
-(void)addWorkoutSample:(HDActivityCacheStatisticsBuilderSample)arg1 typeCode:(long long)arg2 ;
-(vector<long long, std::__1::allocator<long long> >*)_sourceOrderForTypeCode:(long long)arg1 ;
-(double)_sumSourceTotals:(map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg1 orderedSources:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(id)_workoutIdentifiersStringForActiveSource:(HDActivityCacheActiveSource*)arg1 ;
-(void)_logActiveSourcesList:(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)arg1 ;
-(void)_resetAllCachedValues;
-(void)_clearActiveSources;
-(void)_clearCachedValueForTypeCode:(long long)arg1 ;
-(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)_activeSourceVectorFromActivationLogSamples:(const vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >*)arg1 ;
-(void)_addSample:(HDActivityCacheStatisticsBuilderSample)arg1 toSourceTotals:(map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg2 fromWorkout:(BOOL)arg3 ;
-(void)_addSamples:(const vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >*)arg1 toSourceTotals:(map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg2 fromWorkout:(BOOL)arg3 ;
-(BOOL)_sourceMapIsEmpty:(const map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg1 ;
-(double)_minTimestampInSourceTotals:(const map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg1 ;
-(double)_maxTimestampInSourceTotals:(const map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg1 ;
-(double)_sumSourceTotals:(map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >*)arg1 orderedSources:(vector<long long, std::__1::allocator<long long> >*)arg2 strictStartTime:(double)arg3 strictEndTime:(double)arg4 ;
-(id)_createStatisticsForType:(id)arg1 withIntervalComponents:(id)arg2 calendar:(id)arg3 ;
-(void)_loadActiveSourceList;
-(id)createStatisticsCollectionWithType:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3 ;
-(id<HDActivityCacheStatisticsBuilderSourceOrderDelegate>)sourceOrderDelegate;
@end
