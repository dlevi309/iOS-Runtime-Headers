/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, CMWorkoutManager, CMWorkoutMets, HDAssertionManager, CMWorkout, NSString;

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	CMWorkoutManager* _cmWorkoutManager;
	CMWorkoutMets* _cmWorkoutMets;
	HDAssertionManager* _assertionManager;
	CMWorkout* _currentCMWorkout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)averageMETsForWorkoutSessionUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3 ;
-(void)_queue_startWorkoutWithAssertion:(id)arg1 ;
-(id)_queue_coreMotionWorkoutMets;
-(unsigned long long)_queue_countActiveAssertionsForSessionUUID:(id)arg1 ;
-(void)_queue_stopWorkoutWithAssertion:(id)arg1 ;
-(id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2 ;
-(id)_queue_coreMotionWorkoutManager;
-(void)unitTest_setCMWorkoutManager:(id)arg1 ;
@end

