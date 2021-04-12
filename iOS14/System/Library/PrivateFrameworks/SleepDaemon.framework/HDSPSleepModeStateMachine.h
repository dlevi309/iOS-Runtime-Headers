/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSleepModeStateMachineEventHandler.h>

@class NSDate, HKSPSleepScheduleModel, HDSPSleepModeOffState, HDSPSleepModeWindDownState, HDSPSleepModeManualOffState, HDSPSleepModeBedtimeState, HDSPSleepModeManualBedtimeState, NSString;

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler> {

	HDSPSleepModeOffState* _offState;
	HDSPSleepModeWindDownState* _windDownState;
	HDSPSleepModeManualOffState* _manualOffState;
	HDSPSleepModeBedtimeState* _bedtimeState;
	HDSPSleepModeManualBedtimeState* _manualBedtimeState;

}

@property (nonatomic,__weak,readonly) id<HDSPSleepModeStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPSleepModeStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPSleepModeOffState * offState;                                           //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeWindDownState * windDownState;                                 //@synthesize windDownState=_windDownState - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeManualOffState * manualOffState;                               //@synthesize manualOffState=_manualOffState - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeBedtimeState * bedtimeState;                                   //@synthesize bedtimeState=_bedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeManualBedtimeState * manualBedtimeState;                       //@synthesize manualBedtimeState=_manualBedtimeState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL isInDemoMode; 
-(HDSPSleepModeOffState *)offState;
-(void)userEngagedBedtimeMode;
-(NSDate *)currentDate;
-(void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1 ;
-(void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 ;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)userDisengagedCurrentMode;
-(HDSPSleepModeManualBedtimeState *)manualBedtimeState;
-(BOOL)isInDemoMode;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(unsigned long long)sleepScheduleState;
-(HDSPSleepModeWindDownState *)windDownState;
-(void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1 ;
-(HDSPSleepModeBedtimeState *)bedtimeState;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1 ;
-(HDSPSleepModeManualOffState *)manualOffState;
@end

