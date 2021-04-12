/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFScreenWakeAnimationControlling <NSObject>
@required
-(BOOL)isWakeAnimationInProgress;
-(void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)isSleepAnimationInProgress;
-(void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)interruptSleepAnimationIfNeeded;
-(BOOL)isWakeAnimationInProgressForSource:(long long)arg1;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2;

@end

