/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSleepLockScreenStateMachineEventHandler.h>

@class HDSPSleepLockScreenOffState, HDSPSleepLockScreenWindDownState, HDSPSleepLockScreenBedtimeState, HDSPSleepLockScreenGreetingState, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPSleepLockScreenStateMachine : HKSPPersistentStateMachine <HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineEventHandler> {

	HDSPSleepLockScreenOffState* _offState;
	HDSPSleepLockScreenWindDownState* _windDownState;
	HDSPSleepLockScreenBedtimeState* _bedtimeState;
	HDSPSleepLockScreenGreetingState* _greetingState;

}

@property (nonatomic,__weak,readonly) id<HDSPSleepLockScreenStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPSleepLockScreenStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPSleepLockScreenOffState * offState;                                           //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenWindDownState * windDownState;                                 //@synthesize windDownState=_windDownState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenBedtimeState * bedtimeState;                                   //@synthesize bedtimeState=_bedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenGreetingState * greetingState;                                 //@synthesize greetingState=_greetingState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
-(HDSPSleepLockScreenOffState *)offState;
-(void)presentAlertForGoodMorning;
-(void)dismissAlertForGoodMorning;
-(NSDate *)currentDate;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)environmentDidBecomeReady;
-(HDSPSleepLockScreenGreetingState *)greetingState;
-(long long)sleepMode;
-(void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2 ;
-(void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2 ;
-(HDSPSleepLockScreenWindDownState *)windDownState;
-(HDSPSleepLockScreenBedtimeState *)bedtimeState;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
@end

