/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPGoodMorningAlertStateMachineEventHandler.h>

@class NSDate, HKSPSleepScheduleModel, HDSPGoodMorningAlertDisabledState, HDSPGoodMorningAlertWaitingState, HDSPGoodMorningAlertPresentingState, NSString;

@interface HDSPGoodMorningAlertStateMachine : HKSPPersistentStateMachine <HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineEventHandler> {

	HDSPGoodMorningAlertDisabledState* _disabledState;
	HDSPGoodMorningAlertWaitingState* _waitingState;
	HDSPGoodMorningAlertPresentingState* _presentingState;

}

@property (nonatomic,__weak,readonly) id<HDSPGoodMorningAlertStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPGoodMorningAlertStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPGoodMorningAlertDisabledState * disabledState;                                 //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPGoodMorningAlertWaitingState * waitingState;                                   //@synthesize waitingState=_waitingState - In the implementation block
@property (nonatomic,readonly) HDSPGoodMorningAlertPresentingState * presentingState;                             //@synthesize presentingState=_presentingState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL goodMorningAlertEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
-(void)presentAlertForGoodMorning;
-(BOOL)goodMorningAlertEnabled;
-(void)dismissAlertForGoodMorning;
-(NSDate *)currentDate;
-(HDSPGoodMorningAlertPresentingState *)presentingState;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(HDSPGoodMorningAlertDisabledState *)disabledState;
-(void)sleepScheduleStateChangedToBedtime;
-(HDSPGoodMorningAlertWaitingState *)waitingState;
-(void)sleepScheduleStateChangedToWakeUp;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
@end

