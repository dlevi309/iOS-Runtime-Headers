/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIAnimationControllerAnimator.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@class SBAnimationStepper, NSString;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning> {

	SBAnimationStepper* _stepper;

}

@property (nonatomic,readonly) SBAnimationStepper * stepper;              //@synthesize stepper=_stepper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)percentComplete;
-(SBAnimationStepper *)stepper;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id)initWithAnimationController:(id)arg1 stepper:(id)arg2 ;
-(id)initWithAnimationController:(id)arg1 ;
@end

