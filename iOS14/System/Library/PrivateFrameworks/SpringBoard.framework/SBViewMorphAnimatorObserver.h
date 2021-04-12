/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBViewMorphAnimatorObserver <NSObject>
@optional
-(void)willStartSourceAnimations:(unsigned long long)arg1;
-(void)willStartTargetAnimations:(unsigned long long)arg1;
-(void)willRemoveTargeMatchMoveAnimationAtFrame:(CGRect)arg1 withinSourceFrame:(CGRect)arg2;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3;
-(void)didEndAllAnimations;
-(void)animatorWasCanceled:(id)arg1;
-(void)animatorWasInterrupted:(id)arg1;

@end

