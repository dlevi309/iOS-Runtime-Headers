/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(SBUIAnimationController *)animationController;
-(id)initWithAnimationController:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)transitionAnimationFactory:(id)arg1 ;
@end

