/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

@class SBUIProudLockContainerViewController;


@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>
@property (nonatomic,retain) SBUIProudLockContainerViewController * overrideProudLockContainerViewController; 
@property (assign,nonatomic) SCD_Struct_SB0 proudLockConfiguration; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
@property (assign,nonatomic) BOOL canSuggestSwipeToRetry; 
@optional
-(void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg1;
-(void)_noteAppearingForSmartCoverUnlock:(BOOL)arg1;

@required
-(void)updateTransitionWithProgress:(double)arg1;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1;
-(void)_overrideBiometricMatchingEnabled:(BOOL)arg1 forReason:(id)arg2;
-(void)setOverrideProudLockContainerViewController:(id)arg1;
-(BOOL)canSuggestSwipeToRetry;
-(void)_resumeBiometricMatchingAdvisory:(BOOL)arg1;
-(void)beginTransitionToState:(long long)arg1;
-(void)willEndTransitionToState:(long long)arg1;
-(void)didEndTransitionToState:(long long)arg1;
-(SBUIProudLockContainerViewController *)overrideProudLockContainerViewController;
-(SCD_Struct_SB0)proudLockConfiguration;
-(void)setProudLockConfiguration:(SCD_Struct_SB0)arg1;
-(void)setCanSuggestSwipeToRetry:(BOOL)arg1;

@end

