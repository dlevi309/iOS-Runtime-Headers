/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachineState.h>
#import <libobjc.A.dylib/HDSPTimeAsleepTrackerStateMachineEventHandler.h>

@class HDSPTimeAsleepTrackerStateMachine, NSString;

@interface HDSPTimeAsleepTrackerStateMachineState : HKSPPersistentStateMachineState <HDSPTimeAsleepTrackerStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPTimeAsleepTrackerStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(void)appLaunchedOnDate:(id)arg1 ;
-(void)bedtimeOccurred;
-(void)wakeUpOccurredWithReason:(unsigned long long)arg1 ;
-(void)sleepTrackingEventDue;
-(void)userEngagedSleepMode;
-(void)sleepModeExitedWithReason:(unsigned long long)arg1 ;
-(void)activityDetectedOnDate:(id)arg1 ;
-(void)sleepSessionEndRequestedInternally;
-(void)startWakeDetectionOccurred;
-(void)sleepSessionFinished;
-(BOOL)isActivityTrackingState;
-(void)_updateStateSpecific;
-(BOOL)isSleepScheduleDisabled;
-(BOOL)isSleepTrackingState;
-(BOOL)isSleepTrackingSchedulingState;
-(BOOL)_updateStateCommon;
-(BOOL)isTimeAsleepTrackingDisabled;
-(BOOL)inTrackingWindow;
@end

