/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconAnimatorDelegate.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning, SBHomeScreenIconTransitionAnimatorDelegate;
@class SBHIconAnimationSettings, SBIconAnimator, SBNestingViewController, NSString;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	unsigned long long _transitionToken;
	SBHIconAnimationSettings* _currentSettings;
	unsigned long long _currentOperation;
	BOOL _receivedFirstInteractiveUpdate;
	BOOL _needsTransitionTokenIncrementOnNextUpdate;
	SBIconAnimator* _iconAnimator;
	SBNestingViewController* _childViewController;
	unsigned long long _operation;
	double _initialDelay;
	id<SBHomeScreenIconTransitionAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) SBHIconAnimationSettings * currentSettings; 
@property (nonatomic,readonly) SBIconAnimator * iconAnimator;                                             //@synthesize iconAnimator=_iconAnimator - In the implementation block
@property (nonatomic,readonly) SBNestingViewController * childViewController;                             //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation;                                              //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) double initialDelay;                                                         //@synthesize initialDelay=_initialDelay - In the implementation block
@property (nonatomic,readonly) unsigned long long currentOperation; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=wasRestarted,nonatomic,readonly) BOOL restarted; 
@property (assign,nonatomic,__weak) id<SBHomeScreenIconTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBHomeScreenIconTransitionAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SBHomeScreenIconTransitionAnimatorDelegate>)arg1 ;
-(void)cancel;
-(unsigned long long)operation;
-(BOOL)isCancelled;
-(unsigned long long)currentOperation;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)percentComplete;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(void)reverse;
-(void)restart;
-(SBNestingViewController *)childViewController;
-(SBHIconAnimationSettings *)currentSettings;
-(BOOL)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(/*^block*/id)arg2 ;
-(id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)supportsRestarting;
-(id)transitionAnimationFactory:(id)arg1 ;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(SBIconAnimator *)iconAnimator;
-(BOOL)wasRestarted;
@end

