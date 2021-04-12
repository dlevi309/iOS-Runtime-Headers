/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDevicePowerObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDWorkoutDataAccumulatorObserver.h>
#import <libobjc.A.dylib/HDWorkoutSessionObserver.h>

@protocol OS_dispatch_queue;
@class HDWorkoutSessionServer, HDAssertion, NSMutableDictionary, NSHashTable, HKObserverSet, HDLocationManager, HDWatchAppStateMonitor, NSMutableArray, NSObject, HDProfile, HDAlertSuppressor, HDWorkoutLocationSmoother, NSString;

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver> {

	HDWorkoutSessionServer* _currentWorkout;
	HDAssertion* _currentWorkoutAssertion;
	HDWorkoutSessionServer* _nextWorkout;
	NSMutableDictionary* _sessionServers;
	NSMutableDictionary* _sessionCreationHandlers;
	NSHashTable* _observerTable;
	HKObserverSet* _sessionObservers;
	HDLocationManager* _locationManager;
	HDWatchAppStateMonitor* _appStateMonitor;
	BOOL _hasPerformedPostLaunchSessionRecovery;
	NSMutableArray* _postLaunchRecoveryBlocks;
	NSObject*<OS_dispatch_queue> _postLaunchRecoveryCallbackQueue;
	HKObserverSet* _currentWorkoutObservers;
	HDProfile* _profile;
	HDAlertSuppressor* _alertSuppressor;
	NSObject*<OS_dispatch_queue> _queue;
	HDWorkoutLocationSmoother* _locationSmoother;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDWorkoutLocationSmoother * locationSmoother;              //@synthesize locationSmoother=_locationSmoother - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL isInHeartRateRecovery; 
@property (nonatomic,readonly) HDAlertSuppressor * alertSuppressor;                     //@synthesize alertSuppressor=_alertSuppressor - In the implementation block
@property (nonatomic,readonly) HDLocationManager * locationManager;                     //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(HDLocationManager *)locationManager;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2 ;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)sessionServerFromSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2 ;
-(void)generatePauseOrResumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)finishAllWorkoutsForClient:(id)arg1 error:(id*)arg2 ;
-(void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)receivedStartWorkoutAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id*)arg4 ;
-(HDAlertSuppressor *)alertSuppressor;
-(void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendStartWorkoutAppResponse:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endHeartRateRecovery;
-(id)currentWorkoutClient;
-(void)unregisterCurrentWorkoutObserver:(id)arg1 ;
-(void)registerCurrentWorkoutObserver:(id)arg1 ;
-(void)performWhenPostLaunchSessionRecoveryHasCompleted:(/*^block*/id)arg1 ;
-(void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(BOOL)arg2 ;
-(void)_queue_beginTransitionToWorkoutSession:(id)arg1 ;
-(void)_queue_setCurrentWorkout:(id)arg1 ;
-(id)_queue_sessionServerForRecoveryForClient:(id)arg1 ;
-(void)_finishAllDetachedWorkoutBuilders;
-(id)_activeSessionIdentifiers;
-(unsigned long long)_queue_currentWorkoutActivityType;
-(long long)_queue_currentWorkoutLocationType;
-(void)_scheduleFinishAllDetachedWorkoutBuilders;
-(void)_recoverActiveWorkoutSessionServersIfNeeded;
-(void)_finishAllWorkoutsWithExclusionHandler:(/*^block*/id)arg1 ;
-(void)_scheduleFinishForDetachedWorkoutBuilders;
-(void)_notifyForPostLaunchSessionRecovery;
-(void)_postWorkoutUpdatedNotification;
-(void)_recoverCurrentWorkoutSessionAfterLaunch;
-(void)_queue_logWorkoutStateToPowerLog;
-(void)_queue_updateFakingDataInSimulator;
-(void)_queue_sessionFinished:(id)arg1 ;
-(BOOL)hasAnyActiveWorkouts;
-(unsigned long long)currentWorkoutActivityType;
-(long long)currentWorkoutLocationType;
-(void)getCurrentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)currentWorkoutSessionServer;
-(void)pauseActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)addWorkoutEventObserver:(id)arg1 ;
-(void)removeWorkoutEventObserver:(id)arg1 ;
-(void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeWorkoutSessionObserver:(id)arg1 ;
-(void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2 ;
-(void)hk_fakeStopEventWithDate:(id)arg1 ;
-(void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unitTest_finishAllDetachedWorkoutBuilders;
-(id)unitTest_currentWorkoutSession;
-(id)_workoutSessionNotCurrentError:(id)arg1 ;
-(BOOL)isInHeartRateRecovery;
-(BOOL)isPowerSavingSupportedForCurrentActivity;
-(HDWorkoutLocationSmoother *)locationSmoother;
-(void)setLocationSmoother:(HDWorkoutLocationSmoother *)arg1 ;
@end

