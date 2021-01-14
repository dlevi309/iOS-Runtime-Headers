/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIBlockAnimationController.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class NSString;

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver> {

	/*^block*/id _animationCompletion;

}

@property (nonatomic,copy) id animationCompletion;                  //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)setAnimationCompletion:(id)arg1 ;
-(BOOL)isFluidSwitcherAnimationController;
-(id)animationCompletion;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
@end

