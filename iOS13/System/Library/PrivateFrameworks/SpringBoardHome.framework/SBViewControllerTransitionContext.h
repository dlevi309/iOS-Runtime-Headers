/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBViewControllerContextTransitioning.h>
#import <libobjc.A.dylib/SBViewControllerTransitionCoordinator.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate;
@class NSMutableDictionary, NSMapTable, BSUIAnimationFactory, NSMutableArray, NSMutableSet, UIView, NSString;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator> {

	long long _presentationStyle;
	CGAffineTransform _targetTransform;
	NSMutableDictionary* _viewControllersByKey;
	NSMutableDictionary* _viewsByKey;
	NSMapTable* _initialFramesByViewController;
	NSMapTable* _finalFramesByViewController;
	BOOL _transitionStarted;
	BOOL _animationFinished;
	BOOL _transitionFinished;
	BOOL _transitionIsCancelled;
	BOOL _transitionWasEverCancelled;
	BOOL _transitionBeganInteractively;
	BOOL _transitionWasInteractive;
	BOOL _wantsAnimation;
	BOOL _transitionDidBeginCalled;
	double _transitionPercentComplete;
	unsigned long long _transitionAnimationOptions;
	BSUIAnimationFactory* _transitionAnimationFactory;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<UIViewControllerInteractiveTransitioning> _interactor;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	NSMutableArray* _alongsideInteractionEndedHandlers;
	NSMutableSet* _alongsideAnimationViews;
	NSMutableArray* _transitionContinuations;
	unsigned long long _outstandingClientCompletionCount;
	id<SBViewControllerTransitionContextDelegate> _delegate;
	UIView* _containerView;
	id _userInfo;

}

@property (assign,nonatomic,__weak) id<SBViewControllerTransitionContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> animator; 
@property (nonatomic,retain) id<UIViewControllerInteractiveTransitioning> interactor; 
@property (assign,nonatomic) long long presentationStyle;                                                //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) CGAffineTransform targetTransform;                                          //@synthesize targetTransform=_targetTransform - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (assign,nonatomic) BOOL wantsAnimation;                                                        //@synthesize wantsAnimation=_wantsAnimation - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)userInfo;
-(id<SBViewControllerTransitionContextDelegate>)delegate;
-(void)setDelegate:(id<SBViewControllerTransitionContextDelegate>)arg1 ;
-(BOOL)isCancelled;
-(void)setUserInfo:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isInterruptible;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(BOOL)isInteractive;
-(id)viewControllerForKey:(id)arg1 ;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(double)percentComplete;
-(void)updateInteractiveTransition:(double)arg1 ;
-(long long)completionCurve;
-(void)setAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(BOOL)isAnimated;
-(void)_completeTransition;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseInteractiveTransition;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)initiallyInteractive;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(CGAffineTransform)targetTransform;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(double)completionVelocity;
-(BOOL)isTransitioning;
-(void)cancelTransition;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
-(BOOL)wantsAnimation;
-(void)setWantsAnimation:(BOOL)arg1 ;
-(void)startTransition;
-(BOOL)_animatorIsInteractive;
-(BOOL)_interactorSupportsRestarting;
-(BOOL)_animatorSupportsRestarting;
-(void)_startInteractiveTransition;
-(void)_updateTransitionAnimationFactoryAndOptions;
-(id)transitionAnimationFactory;
-(unsigned long long)transitionAnimationOptions;
-(void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
-(id)_interactiveAnimator;
-(void)_runInteractionEndedHandlers;
-(/*^block*/id)_acquireTransitionCompletion;
-(void)_completeTransitionIfPossible;
-(BOOL)supportsCancelling;
-(id)_reversibleAnimator;
-(BOOL)_animatorIsReversible;
-(BOOL)supportsRestarting;
-(BOOL)_objectSupportsRestarting:(id)arg1 ;
-(BOOL)transitionWasRestarted;
-(void)restartTransition;
-(BOOL)wasPreviousPhaseInteractive;
-(BOOL)requiresCancellableAnimations;
-(BOOL)requiresInteractiveAnimations;
-(BOOL)requiresRestartableAnimations;
-(void)addTransitionContinuation:(/*^block*/id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactor;
-(void)setInteractor:(id<UIViewControllerInteractiveTransitioning>)arg1 ;
-(void)setViewController:(id)arg1 forKey:(id)arg2 ;
-(void)setView:(id)arg1 forKey:(id)arg2 ;
-(void)setInitialFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(void)setFinalFrame:(CGRect)arg1 forViewController:(id)arg2 ;
@end

