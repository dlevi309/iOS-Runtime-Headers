/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutBuilderClientInterface.h>
#import <libobjc.A.dylib/HKStateMachineDelegate.h>

@protocol OS_dispatch_queue;
@class HKWorkoutBuilderConfiguration, NSDate, NSDictionary, NSArray, HKStateMachine, HKRetryableOperation, HKWorkoutConfiguration, NSMutableDictionary, NSObject, HKTaskServerProxyProvider, HKHealthStore, NSUUID, HKDevice, NSString;

@interface HKWorkoutBuilder : NSObject <_HKXPCExportable, HKWorkoutBuilderClientInterface, HKStateMachineDelegate> {

	HKWorkoutBuilderConfiguration* _builderConfiguration;
	NSDate* _workoutStartDate;
	NSDate* _workoutEndDate;
	NSDictionary* _metadata;
	NSArray* _workoutEvents;
	double _accumulatedElapsedTime;
	double _lastResumeTimestamp;
	BOOL _currentlyRunning;
	long long _serverConstructionState;
	HKStateMachine* _constructionStateMachine;
	HKRetryableOperation* _retryableOperation;
	/*^block*/id _beginCollectionCompletionHandler;
	/*^block*/id _endCollectionCompletionHandler;
	/*^block*/id _finishWorkoutCompletionHandler;
	/*^block*/id _unitTest_serverStateChangedHandler;
	/*^block*/id _unitTest_recoveryFinishedHandler;
	/*^block*/id _unitTest_failureHandler;
	HKWorkoutConfiguration* _workoutConfiguration;
	NSMutableDictionary* _seriesBuilders;
	NSMutableDictionary* _statisticsByType;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSMutableDictionary * seriesBuilders;                      //@synthesize seriesBuilders=_seriesBuilders - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * statisticsByType;                    //@synthesize statisticsByType=_statisticsByType - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue;              //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (nonatomic,readonly) HKTaskServerProxyProvider * proxyProvider;               //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                             //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) HKWorkoutBuilderConfiguration * configuration; 
@property (readonly) BOOL isCurrentlyRunning; 
@property (copy,readonly) HKDevice * device; 
@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration;                //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (copy,readonly) NSDictionary * metadata; 
@property (copy,readonly) NSArray * workoutEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)_constructionStateMachineForBuilderConfiguration:(id)arg1 builderIdentifier:(id)arg2 ;
+(double)_elapsedTimeAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4 ;
+(id)clientInterface;
+(long long)_collectionStateAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4 ;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(NSDate *)endDate;
-(id)goal;
-(id)_currentSnapshot;
-(id)init;
-(NSDate *)startDate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(unsigned long long)goalType;
-(HKDevice *)device;
-(NSString *)description;
-(HKWorkoutBuilderConfiguration *)configuration;
-(BOOL)isCurrentlyRunning;
-(id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3 ;
-(double)elapsedTimeAtDate:(id)arg1 ;
-(/*^block*/id)_successCompletionBlockOnClientQueue:(/*^block*/id)arg1 ;
-(void)_resourceQueue_addSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_beginCollectionWithStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_addWorkoutEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceQueue_endCollectionWithEndDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_finishWorkoutWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg1 type:(id)arg2 ;
-(void)_pushCurrentTargetState;
-(id)_resourceQueue_startDateForSnapshot;
-(void)_resourceQueue_updateDevice:(id)arg1 ;
-(id)_resourceQueue_endDateForSnapshotWithStartDate:(id)arg1 ;
-(id)_resourceQueue_eventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSArray *)workoutEvents;
-(NSUUID *)identifier;
-(void)_resourceQueue_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2 ;
-(void)_resourceQueue_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2 ;
-(void)_resourceQueue_removeMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_freezeSeriesBuilders;
-(void)_resourceQueue_updateElapsedTimeCache;
-(BOOL)_validateObjects:(id)arg1 forClass:(Class)arg2 error:(out id*)arg3 ;
-(double)_currentElapsedTime;
-(id)statisticsForType:(id)arg1 ;
-(void)_resourceQueue_markRecoveryRequired;
-(void)_resourceQueue_updateEvents:(id)arg1 ;
-(void)clientRemote_didUpdateStatistics:(id)arg1 ;
-(void)clientRemote_didUpdateMetadata:(id)arg1 ;
-(void)clientRemote_didUpdateEvents:(id)arg1 ;
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg1 ;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)clientRemote_didFinishRecovery;
-(void)discardWorkout;
-(void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)clientRemote_finishedWorkout:(id)arg1 ;
-(void)clientRemote_didFailWithError:(id)arg1 ;
-(NSMutableDictionary *)statisticsByType;
-(void)_restoreRecoveredSeriesBuildersWithCompletion:(/*^block*/id)arg1 ;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6 ;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4 ;
-(void)addSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addWorkoutEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 device:(id)arg5 ;
-(void)_setDevice:(id)arg1 ;
-(void)beginCollectionWithStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endCollectionWithEndDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishWorkoutWithCompletion:(/*^block*/id)arg1 ;
-(id)seriesBuilderForType:(id)arg1 ;
-(void)_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2 ;
-(void)setSeriesBuilders:(NSMutableDictionary *)arg1 ;
-(void)_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2 ;
-(void)_removeMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recoverWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)seriesBuilders;
-(void)unitTest_setServerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)unitTest_setRecoveryFinishedHandler:(/*^block*/id)arg1 ;
-(void)unitTest_setFailureHandler:(/*^block*/id)arg1 ;
-(void)setStatisticsByType:(NSMutableDictionary *)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(NSDictionary *)metadata;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(void)setConfiguration:(HKWorkoutBuilderConfiguration *)arg1 ;
@end

