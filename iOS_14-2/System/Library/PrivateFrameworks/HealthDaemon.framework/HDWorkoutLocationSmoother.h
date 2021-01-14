/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/CLLocationSmootherDelegate.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDForegroundClientProcessObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class CLLocationSmoother, NSObject, HDProfile, NSMutableArray, HDSmoothingTask, NSString;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDHealthDaemonReadyObserver> {

	CLLocationSmoother* _smoother;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;
	NSMutableArray* _pendingSmoothingTasks;
	HDSmoothingTask* _currentSmoothingTask;
	NSObject*<OS_dispatch_source> _timeoutSource;
	double _smoothingTaskTimeout;
	BOOL _needToCheckForLocationSeriesOnUnlock;
	BOOL _isFirstLaunchAndNotYetSmoothed;
	/*^block*/id _didCompleteAllPendingSmoothingTasksHandler;
	/*^block*/id _unitTest_wilTriggerSmoothing;

}

@property (nonatomic,copy) id didCompleteAllPendingSmoothingTasksHandler;              //@synthesize didCompleteAllPendingSmoothingTasksHandler=_didCompleteAllPendingSmoothingTasksHandler - In the implementation block
@property (nonatomic,copy) id unitTest_wilTriggerSmoothing;                            //@synthesize unitTest_wilTriggerSmoothing=_unitTest_wilTriggerSmoothing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_containsWorkoutObject:(id)arg1 error:(id*)arg2 ;
-(void)_queue_setupLocationObserversIfNeeded;
-(id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id*)arg4 ;
-(BOOL)_shouldObserveWorkouts;
-(void)setUnitTest_wilTriggerSmoothing:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_startSmoothingTask:(id)arg1 ;
-(void)setDidCompleteAllPendingSmoothingTasksHandler:(id)arg1 ;
-(void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2 ;
-(void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1 ;
-(BOOL)_deleteSample:(id)arg1 error:(id*)arg2 ;
-(void)smoothRouteWithWorkoutUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_associationsSyncedForWorkout:(id)arg1 ;
-(id)_locationsForSampleUUID:(id)arg1 error:(id*)arg2 ;
-(id)didCompleteAllPendingSmoothingTasksHandler;
-(void)_queue_smoothNextSample;
-(void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(BOOL)arg3 ;
-(void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3 ;
-(id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_queue_smoothAllUnsmoothedLocationSeries;
-(void)_queue_smoothRouteSampleForTask:(id)arg1 ;
-(void)_finishSmoothingSampleWithTask:(id)arg1 ;
-(id)unitTest_wilTriggerSmoothing;
-(void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_queue_cancelTimeout;
-(void)dealloc;
@end

