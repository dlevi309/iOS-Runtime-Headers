/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBMainSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBMainSwitcherViewController *)arg1 ;
-(id)animationSettings;
-(BOOL)shouldResignActiveForAnimation;
-(id)_layoutState;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)isInterruptible;
-(void)_startAnimation;
-(void)_didComplete;
-(void)_setInterruptible:(BOOL)arg1 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(id)_previousLayoutState;
-(BOOL)_isInterruptible;
-(void)_updatePPTsForAnimationEnd;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_addSignpostsForAnimationEnd;
-(void)_updatePPTsForAnimationStart;
-(void)setAnimationBlock:(id)arg1 ;
-(id)animationBlock;
-(void)_addSignpostsForAnimationStart;
@end

