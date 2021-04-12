/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue;
@class NSObject, HDFitnessMachineStateTimer;

@interface HDFitnessMachineStateTimers : NSObject {

	id<HDFitnessMachineStateTimersDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	HDFitnessMachineStateTimer* _fieldDetectTimer;
	HDFitnessMachineStateTimer* _tagReadTimer;
	HDFitnessMachineStateTimer* _machineIdentityVerificationTimer;
	HDFitnessMachineStateTimer* _userAcceptanceTimer;
	HDFitnessMachineStateTimer* _waitForMachineStartTimer;
	HDFitnessMachineStateTimer* _pauseTimer;
	HDFitnessMachineStateTimer* _disconnectTimer;
	HDFitnessMachineStateTimer* _retryConnectionTimer;
	HDFitnessMachineStateTimer* _mfaTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * fieldDetectTimer;                              //@synthesize fieldDetectTimer=_fieldDetectTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * tagReadTimer;                                  //@synthesize tagReadTimer=_tagReadTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * machineIdentityVerificationTimer;              //@synthesize machineIdentityVerificationTimer=_machineIdentityVerificationTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * userAcceptanceTimer;                           //@synthesize userAcceptanceTimer=_userAcceptanceTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * waitForMachineStartTimer;                      //@synthesize waitForMachineStartTimer=_waitForMachineStartTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * pauseTimer;                                    //@synthesize pauseTimer=_pauseTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * disconnectTimer;                               //@synthesize disconnectTimer=_disconnectTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * retryConnectionTimer;                          //@synthesize retryConnectionTimer=_retryConnectionTimer - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStateTimer * mfaTimer;                                      //@synthesize mfaTimer=_mfaTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HDFitnessMachineStateTimersDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HDFitnessMachineStateTimersDelegate>)delegate;
-(void)setDelegate:(id<HDFitnessMachineStateTimersDelegate>)arg1 ;
-(HDFitnessMachineStateTimer *)pauseTimer;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)cancelAllTimers;
-(void)setPauseTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(void)beginRetryConnectionTimeout;
-(void)cancelRetryConnectionTimeout;
-(void)cancelWaitForMachineStartTimeout;
-(void)cancelPauseTimeout;
-(void)beginPauseTimeout;
-(void)cancelMfaTimeout;
-(void)beginDisconnectTimeout;
-(void)cancelDisconnectTimeout;
-(BOOL)isDisconnectTimerValid;
-(BOOL)isRetryConnectionTimerValid;
-(void)beginMfaTimeout;
-(void)beginWaitForMachineStartTimeout;
-(void)cancelFieldDetectTimeout;
-(void)cancelTagReadTimeout;
-(void)cancelMachineIdentityVerificationTimeout;
-(void)cancelUserAcceptanceTimeout;
-(HDFitnessMachineStateTimer *)fieldDetectTimer;
-(void)setFieldDetectTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)tagReadTimer;
-(void)setTagReadTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)machineIdentityVerificationTimer;
-(void)setMachineIdentityVerificationTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)userAcceptanceTimer;
-(void)setUserAcceptanceTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)waitForMachineStartTimer;
-(void)setWaitForMachineStartTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)disconnectTimer;
-(void)setDisconnectTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)retryConnectionTimer;
-(void)setRetryConnectionTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)mfaTimer;
-(void)setMfaTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(void)beginFieldDetectTimeout;
-(BOOL)isFieldDetectTimerValid;
-(void)beginTagReadTimeout;
-(BOOL)isTagReadTimerValid;
-(void)beginMachineIdentityVerificationTimeout;
-(BOOL)isMachineIdentityVerificationTimerValid;
-(void)beginUserAcceptanceTimeout;
-(BOOL)isUserAcceptanceTimerValid;
-(BOOL)isWaitForMachineStartTimerValid;
-(BOOL)isPauseTimerValid;
-(BOOL)isMfaTimerValid;
@end

