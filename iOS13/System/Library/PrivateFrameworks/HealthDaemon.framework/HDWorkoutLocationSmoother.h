/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/CLLocationSmootherDelegate.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDForegroundClientProcessObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class CLLocationSmoother, NSObject, HDProfile, NSMutableArray, HDSmoothingTask, NSString;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver> {

	CLLocationSmoother* _smoother;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;
	NSMutableArray* _pendingSmoothingTasks;
	HDSmoothingTask* _currentSmoothingTask;
	NSObject*<OS_dispatch_source> _timeoutSource;
	double _smoothingTaskTimeout;
	BOOL _needToCheckForLocationSeriesOnUnlock;
	BOOL _isFirstLaunchAndNotYetSmoothed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2 ;
-(void)_setupLocationObserversIfNeeded;
-(void)_associationsSyncedForWorkout:(id)arg1 ;
-(void)_queue_smoothAllUnsmoothedLocationSeries;
-(void)_queue_smoothNextSample;
-(void)_queue_cancelTimeout;
-(void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(BOOL)arg3 ;
-(void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3 ;
-(void)_queue_smoothRouteSampleForTask:(id)arg1 ;
-(id)_locationsForSampleUUID:(id)arg1 error:(id*)arg2 ;
-(void)_finishSmoothingSampleWithTask:(id)arg1 ;
-(BOOL)_deleteSample:(id)arg1 error:(id*)arg2 ;
-(void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1 ;
-(void)_queue_startSmoothingTask:(id)arg1 ;
-(void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id*)arg4 ;
-(BOOL)_containsWorkoutObject:(id)arg1 error:(id*)arg2 ;
-(void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

