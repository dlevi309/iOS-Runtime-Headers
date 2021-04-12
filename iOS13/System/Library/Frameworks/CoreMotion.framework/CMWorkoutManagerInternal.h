/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_teardown;
-(void)_handleDaemonEvent:(id)arg1 ;
-(void)_startWorkout:(id)arg1 ;
-(void)_unregisterForWorkoutEvents;
-(void)_handleDaemonResponse:(id)arg1 ;
-(BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1 ;
-(void)_stopWorkout:(id)arg1 ;
-(void)_setSuggestedStopTimeout:(double)arg1 ;
-(void)_userDismissedWorkoutAlert;
-(void)_registerForWorkoutEvents;
-(void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
@end

