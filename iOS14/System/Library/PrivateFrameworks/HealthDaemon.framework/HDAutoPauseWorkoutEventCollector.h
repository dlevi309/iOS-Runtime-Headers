/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDWorkoutEventCollector.h>
#import <libobjc.A.dylib/CMWorkoutManagerDelegate.h>

@class CMWorkoutManager, NSString;

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate> {

	CMWorkoutManager* _cmWorkoutManager;
	int _catFlexingNotifyToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(void)stop;
-(void)workoutManager:(id)arg1 didFailWorkout:(id)arg2 withError:(id)arg3 ;
-(void)workoutManager:(id)arg1 didStartWorkout:(id)arg2 atDate:(id)arg3 ;
-(void)workoutManager:(id)arg1 didStopWorkout:(id)arg2 atDate:(id)arg3 ;
-(void)workoutManager:(id)arg1 willPauseWorkout:(id)arg2 atDate:(id)arg3 ;
-(void)workoutManager:(id)arg1 willResumeWorkout:(id)arg2 atDate:(id)arg3 ;
-(void)workoutManager:(id)arg1 suggestedStopWorkout:(id)arg2 atDate:(id)arg3 ;
-(void)workoutManager:(id)arg1 workoutLocationEventUpdate:(id)arg2 ;
-(void)unitTest_setCMWorkoutManager:(id)arg1 ;
-(void)_listenForCatFlexingFakingNotifications;
-(void)_unregisterForCatFlexingNotifications;
-(void)_deliverWorkoutEvent:(long long)arg1 sessionId:(id)arg2 eventDate:(id)arg3 ;
-(void)_triggerCatFlexingEvent;
-(void)_triggerCatFlexingEventWithTimeout:(double)arg1 ;
@end

