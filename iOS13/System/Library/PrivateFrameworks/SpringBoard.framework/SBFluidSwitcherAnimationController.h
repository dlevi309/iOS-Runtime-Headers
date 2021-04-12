/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIBlockAnimationController.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class NSString;

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver> {

	/*^block*/id _animationCompletion;
	SBFluidSwitcherAnimationController* _tetheredAnimationController;

}

@property (nonatomic,copy) id animationCompletion;                                                                 //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (assign,nonatomic,__weak) SBFluidSwitcherAnimationController * tetheredAnimationController;              //@synthesize tetheredAnimationController=_tetheredAnimationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnimationCompletion:(id)arg1 ;
-(id)animationCompletion;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)isFluidSwitcherAnimationController;
-(SBFluidSwitcherAnimationController *)tetheredAnimationController;
-(void)setTetheredAnimationController:(SBFluidSwitcherAnimationController *)arg1 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
@end

