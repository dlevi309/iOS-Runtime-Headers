/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFScreenWakeAnimationControlling <NSObject>
@required
-(void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)isSleepAnimationInProgress;
-(BOOL)isWakeAnimationInProgress;
-(BOOL)isWakeAnimationInProgressForSource:(long long)arg1;
-(void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2;
-(BOOL)interruptSleepAnimationIfNeeded;

@end

