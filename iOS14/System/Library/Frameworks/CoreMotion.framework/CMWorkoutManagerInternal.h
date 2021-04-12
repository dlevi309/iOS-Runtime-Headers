/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, CMWorkoutManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMWorkoutManager, CMWorkout;

@interface CMWorkoutManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	id<CMWorkoutManagerDelegate> fDelegate;
	CMWorkoutManager* fSender;
	CMWorkout* fWorkout;
	BOOL fResumeWorkoutOnInterrupt;

}
-(id)init;
-(void)_teardown;
-(void)_unregisterForWorkoutEvents;
-(void)_handleDaemonResponse:(id)arg1 ;
-(void)_startWorkout:(id)arg1 ;
-(void)_stopWorkout:(id)arg1 ;
-(void)_handleDaemonEvent:(id)arg1 ;
-(void)_setSuggestedStopTimeout:(double)arg1 ;
-(BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1 ;
-(void)_userDismissedWorkoutAlert;
-(void)_triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
-(void)_registerForWorkoutEvents;
-(void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

