/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPWakeDetectionStateMachineEventHandler.h>

@class HDSPWakeDetectionDisabledState, HDSPWakeDetectionWaitingState, HDSPWakeDetectionDetectingState, HDSPWakeDetectionNotifiedState, NSString, NSDate, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler> {

	HDSPWakeDetectionDisabledState* _disabledState;
	HDSPWakeDetectionWaitingState* _waitingState;
	HDSPWakeDetectionDetectingState* _detectingState;
	HDSPWakeDetectionNotifiedState* _notifiedState;

}

@property (nonatomic,__weak,readonly) id<HDSPWakeDetectionStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPWakeDetectionStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPWakeDetectionDisabledState * disabledState;                                 //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionWaitingState * waitingState;                                   //@synthesize waitingState=_waitingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionDetectingState * detectingState;                               //@synthesize detectingState=_detectingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionNotifiedState * notifiedState;                                 //@synthesize notifiedState=_notifiedState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * relevantOccurrence; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL sleepModeIsOff; 
-(NSDate *)currentDate;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(HDSPWakeDetectionDisabledState *)disabledState;
-(HDSPWakeDetectionNotifiedState *)notifiedState;
-(HDSPWakeDetectionWaitingState *)waitingState;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HDSPWakeDetectionDetectingState *)detectingState;
-(id)detectionWindowAfterDate:(id)arg1 ;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(id)arg1 ;
-(void)postWakeDetectionNotification;
-(HKSPSleepScheduleOccurrence *)relevantOccurrence;
-(void)scheduleWakeDetection;
-(void)unscheduleWakeDetection;
-(void)startWakeDetection;
-(void)stopWakeDetection;
-(BOOL)sleepModeIsOff;
@end

