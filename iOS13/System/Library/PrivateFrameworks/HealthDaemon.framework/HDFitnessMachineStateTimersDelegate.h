/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachineStateTimersDelegate <NSObject>
@optional
-(void)stateTimersFieldDetectTimeout:(id)arg1;
-(void)stateTimersTagReadTimeout:(id)arg1;
-(void)stateTimersMachineIdentityVerificationTimeout:(id)arg1;
-(void)stateTimersUserAcceptanceTimeout:(id)arg1;
-(void)stateTimersWaitForMachineStartTimeout:(id)arg1;
-(void)stateTimersPauseTimeout:(id)arg1;
-(void)stateTimersDisconnectTimeout:(id)arg1;
-(void)stateTimersRetryConnectionTimeout:(id)arg1;
-(void)stateTimersMfaTimeout:(id)arg1;

@end

