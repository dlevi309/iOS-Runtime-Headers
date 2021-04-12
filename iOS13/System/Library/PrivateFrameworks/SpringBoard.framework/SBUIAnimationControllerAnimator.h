/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBViewControllerAnimatedTransitioning.h>

@class SBUIAnimationController, NSString;

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning> {

	SBUIAnimationController* _animationController;

}

@property (nonatomic,__weak,readonly) SBUIAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(SBUIAnimationController *)animationController;
-(id)transitionAnimationFactory:(id)arg1 ;
-(id)initWithAnimationController:(id)arg1 ;
@end

