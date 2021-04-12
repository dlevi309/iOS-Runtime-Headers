/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisconnectTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(void)setPauseTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)retryConnectionTimer;
-(void)cancelRetryConnectionTimeout;
-(void)beginRetryConnectionTimeout;
-(void)cancelAllTimers;
-(HDFitnessMachineStateTimer *)userAcceptanceTimer;
-(id<HDFitnessMachineStateTimersDelegate>)delegate;
-(HDFitnessMachineStateTimer *)machineIdentityVerificationTimer;
-(void)beginUserAcceptanceTimeout;
-(void)beginWaitForMachineStartTimeout;
-(void)beginFieldDetectTimeout;
-(HDFitnessMachineStateTimer *)waitForMachineStartTimer;
-(void)cancelWaitForMachineStartTimeout;
-(void)beginTagReadTimeout;
-(BOOL)isMachineIdentityVerificationTimerValid;
-(void)cancelPauseTimeout;
-(BOOL)isRetryConnectionTimerValid;
-(void)setUserAcceptanceTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(void)setDelegate:(id<HDFitnessMachineStateTimersDelegate>)arg1 ;
-(void)beginDisconnectTimeout;
-(void)setTagReadTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)pauseTimer;
-(void)cancelFieldDetectTimeout;
-(BOOL)isFieldDetectTimerValid;
-(void)beginPauseTimeout;
-(BOOL)isWaitForMachineStartTimerValid;
-(void)setFieldDetectTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)beginMfaTimeout;
-(void)cancelDisconnectTimeout;
-(BOOL)isTagReadTimerValid;
-(void)setRetryConnectionTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancelTagReadTimeout;
-(void)setMachineIdentityVerificationTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(HDFitnessMachineStateTimer *)disconnectTimer;
-(void)beginMachineIdentityVerificationTimeout;
-(BOOL)isPauseTimerValid;
-(void)setMfaTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(void)cancelUserAcceptanceTimeout;
-(void)setWaitForMachineStartTimer:(HDFitnessMachineStateTimer *)arg1 ;
-(BOOL)isDisconnectTimerValid;
-(BOOL)isMfaTimerValid;
-(void)cancelMachineIdentityVerificationTimeout;
-(HDFitnessMachineStateTimer *)mfaTimer;
-(void)cancelMfaTimeout;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDFitnessMachineStateTimer *)tagReadTimer;
-(BOOL)isUserAcceptanceTimerValid;
-(HDFitnessMachineStateTimer *)fieldDetectTimer;
-(void)dealloc;
@end

