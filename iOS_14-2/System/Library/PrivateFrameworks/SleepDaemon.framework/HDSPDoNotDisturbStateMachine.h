/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineEventHandler.h>

@class HDSPDoNotDisturbOffState, HDSPDoNotDisturbDuringWindDownState, HDSPDoNotDisturbDuringBedtimeState, HDSPDoNotDisturbManualOffState, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPDoNotDisturbStateMachine : HKSPPersistentStateMachine <HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider, HDSPDoNotDisturbStateMachineEventHandler> {

	HDSPDoNotDisturbOffState* _offState;
	HDSPDoNotDisturbDuringWindDownState* _dndDuringWindDownState;
	HDSPDoNotDisturbDuringBedtimeState* _dndDuringBedtimeState;
	HDSPDoNotDisturbManualOffState* _manualOffState;

}

@property (nonatomic,__weak,readonly) id<HDSPDoNotDisturbStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPDoNotDisturbStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPDoNotDisturbOffState * offState;                                           //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbDuringWindDownState * dndDuringWindDownState;                  //@synthesize dndDuringWindDownState=_dndDuringWindDownState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbDuringBedtimeState * dndDuringBedtimeState;                    //@synthesize dndDuringBedtimeState=_dndDuringBedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbManualOffState * manualOffState;                               //@synthesize manualOffState=_manualOffState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
-(HDSPDoNotDisturbOffState *)offState;
-(HDSPDoNotDisturbDuringWindDownState *)dndDuringWindDownState;
-(NSDate *)currentDate;
-(id)stateMachineLog;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(void)userTurnedOffDoNotDisturb;
-(void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(unsigned long long)sleepScheduleState;
-(HDSPDoNotDisturbDuringBedtimeState *)dndDuringBedtimeState;
-(long long)sleepMode;
-(void)disengageDoNotDisturb;
-(void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HDSPDoNotDisturbManualOffState *)manualOffState;
@end

