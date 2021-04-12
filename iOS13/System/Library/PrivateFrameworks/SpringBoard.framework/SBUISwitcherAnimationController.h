/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class SBMainSwitcherViewController, NSString;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver> {

	BOOL _interruptible;
	SBMainSwitcherViewController* _switcherViewController;
	/*^block*/id _animationBlock;

}

@property (assign,nonatomic,__weak) SBMainSwitcherViewController * switcherViewController;                       //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (nonatomic,copy) id animationBlock;                                                                    //@synthesize animationBlock=_animationBlock - In the implementation block
@property (assign,setter=_setInterruptible:,getter=_isInterruptible,nonatomic) BOOL _interruptible;              //@synthesize interruptible=_interruptible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterruptible;
-(void)_didComplete;
-(id)_previousLayoutState;
-(id)_layoutState;
-(id)animationSettings;
-(void)_setInterruptible:(BOOL)arg1 ;
-(void)setAnimationBlock:(id)arg1 ;
-(id)animationBlock;
-(void)_startAnimation;
-(SBMainSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBMainSwitcherViewController *)arg1 ;
-(BOOL)isReasonableMomentToInterrupt;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)_isInterruptible;
-(void)_updatePPTsForAnimationStart;
-(void)_addSignpostsForAnimationStart;
-(void)_addSignpostsForAnimationEnd;
-(void)_updatePPTsForAnimationEnd;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldResignActiveForAnimation;
@end

