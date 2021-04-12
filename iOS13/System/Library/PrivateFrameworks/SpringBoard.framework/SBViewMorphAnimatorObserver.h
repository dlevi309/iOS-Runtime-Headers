/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBViewMorphAnimatorObserver <NSObject>
@optional
-(void)willStartSourceAnimations:(unsigned long long)arg1;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3;
-(void)willStartTargetAnimations:(unsigned long long)arg1;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3;
-(void)animatorWasCanceled:(id)arg1;
-(void)animatorWasInterrupted:(id)arg1;

@end

