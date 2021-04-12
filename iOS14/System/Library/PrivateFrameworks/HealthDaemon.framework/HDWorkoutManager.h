/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDevicePowerObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDWorkoutDataAccumulatorObserver.h>
#import <libobjc.A.dylib/HDSchoolTimeObserverDelegate.h>
#import <libobjc.A.dylib/HDWorkoutSessionObserver.h>

@protocol OS_dispatch_queue;
@class HDWorkoutSessionServer, HDAssertion, NSMutableDictionary, NSHashTable, HKObserverSet, HDLocationManager, HDWatchAppStateMonitor, NSMutableArray, NSObject, HDSchoolTimeObserver, HDProfile, HDAlertSuppressor, HDWorkoutLocationSmoother, NSString;

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDWorkoutDataAccumulatorObserver, HDSchoolTimeObserverDelegate, HDWorkoutSessionObserver> {

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
	HDSchoolTimeObserver* _schoolTime;
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
-(void)daemonReady:(id)arg1 ;
-(void)_scheduleFinishForDetachedWorkoutBuilders;
-(id)_queue_sessionServerForRecoveryForClient:(id)arg1 ;
-(void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HDLocationManager *)locationManager;
-(void)removeWorkoutEventObserver:(id)arg1 ;
-(void)_queue_updateFakingDataInSimulator;
-(void)pauseActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_beginTransitionToWorkoutSession:(id)arg1 ;
-(void)_queue_setCurrentWorkout:(id)arg1 ;
-(void)unitTest_setInSchoolMode:(BOOL)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(BOOL)arg2 ;
-(void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2 ;
-(void)sessionServerFromSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDWorkoutLocationSmoother *)locationSmoother;
-(void)_queue_schoolModeDidChangeTo:(BOOL)arg1 ;
-(void)_recoverCurrentWorkoutSessionAfterLaunch;
-(void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_logWorkoutStateToPowerLog;
-(id)_workoutSessionNotCurrentError:(id)arg1 ;
-(void)_scheduleFinishAllDetachedWorkoutBuilders;
-(void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2 ;
-(BOOL)_queue_endSessionIfInSchoolMode:(id)arg1 ;
-(id)currentWorkoutSessionServer;
-(HDAlertSuppressor *)alertSuppressor;
-(void)_postWorkoutUpdatedNotification;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_finishAllDetachedWorkoutBuilders;
-(unsigned long long)currentWorkoutActivityType;
-(long long)_queue_currentWorkoutLocationType;
-(id)currentWorkoutClient;
-(void)_queue_endSessionForSchoolMode:(id)arg1 ;
-(void)workoutSession:(id)arg1 didUpdateControllerStateForRecoveryIdentifier:(id)arg2 ;
-(id)diagnosticDescription;
-(void)performWhenPostLaunchSessionRecoveryHasCompleted:(/*^block*/id)arg1 ;
-(void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAnyActiveWorkouts;
-(void)_recoverActiveWorkoutSessionServersIfNeeded;
-(HDProfile *)profile;
-(void)removeWorkoutSessionObserver:(id)arg1 ;
-(void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterCurrentWorkoutObserver:(id)arg1 ;
-(void)generatePauseOrResumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2 ;
-(void)schoolTime:(id)arg1 didChangeSchoolModeTo:(BOOL)arg2 ;
-(void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hk_fakeStopEventWithDate:(id)arg1 ;
-(void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2 ;
-(void)_finishAllWorkoutsWithExclusionHandler:(/*^block*/id)arg1 ;
-(long long)currentWorkoutLocationType;
-(BOOL)isInHeartRateRecovery;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setLocationSmoother:(HDWorkoutLocationSmoother *)arg1 ;
-(unsigned long long)_queue_currentWorkoutActivityType;
-(void)unitTest_finishAllDetachedWorkoutBuilders;
-(BOOL)isPowerSavingSupportedForCurrentActivity;
-(void)receivedStartWorkoutAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)unitTest_currentWorkoutSession;
-(void)addWorkoutEventObserver:(id)arg1 ;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4 ;
-(void)getCurrentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)finishAllWorkoutsForClient:(id)arg1 error:(id*)arg2 ;
-(void)_notifyForPostLaunchSessionRecovery;
-(void)_queue_sessionFinished:(id)arg1 ;
-(id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id*)arg4 ;
-(id)_activeSessionIdentifiers;
-(void)endHeartRateRecovery;
-(void)registerCurrentWorkoutObserver:(id)arg1 ;
-(id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_sendStartWorkoutAppResponse:(/*^block*/id)arg1 error:(id)arg2 ;
-(BOOL)_queue_inSchoolMode;
@end

