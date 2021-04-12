/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBUIAnimationStepping.h>
#import <libobjc.A.dylib/SBUIAnimationControllerCoordinating.h>

@protocol SBUIAnimationControllerTransitionContextProvider;
@class BSBlockTransaction, NSSet, NSMutableArray, SBAnimationStepper, UIWindow, UIView, SBViewControllerTransitionContext, BSTransaction, SBApplicationSceneEntity, BSAnimationSettings, NSString;

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating> {

	id<SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
	BSBlockTransaction* _animationTransaction;
	BSBlockTransaction* _notifyObserversTransaction;
	BSBlockTransaction* _cleanupTransaction;
	NSSet* _sceneHandlesBeingObserved;
	NSSet* _entitiesToObserve;
	NSSet* _startTransactionDependencies;
	NSMutableArray* _coordinatingChildRelationships;
	NSMutableArray* _steppedCoordinatingChildAnimations;
	SBAnimationStepper* _stepper;
	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	int _animationState;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	SBViewControllerTransitionContext* _transition;
	/*^block*/id _animationTransactionCompletion;

}

@property (nonatomic,retain) SBViewControllerTransitionContext * transition;                                              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) id<SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;              //@synthesize transitionContextProvider=_transitionContextProvider - In the implementation block
@property (nonatomic,copy) id animationTransactionCompletion;                                                             //@synthesize animationTransactionCompletion=_animationTransactionCompletion - In the implementation block
@property (nonatomic,readonly) BSTransaction * animationTransaction;                                                      //@synthesize animationTransaction=_animationTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * notifyObserversTransaction;                                                //@synthesize notifyObserversTransaction=_notifyObserversTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * cleanupTransaction;                                                        //@synthesize cleanupTransaction=_cleanupTransaction - In the implementation block
@property (assign,nonatomic) BOOL needsCATransactionActivate;                                                             //@synthesize needsCATransactionActivate=_needsCATransactionActivate - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                                    //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * toApplicationSceneEntity; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * fromApplicationSceneEntity; 
@property (nonatomic,readonly) BOOL transitionSupportsCancelling; 
@property (nonatomic,readonly) BOOL transitionSupportsRestarting; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) BOOL transitionWasRestarted; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) id<SBViewControllerTransitionCoordinator> transitionCoordinator; 
@property (nonatomic,readonly) BSAnimationSettings * animationSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
-(void)cancelTransition;
-(BOOL)transitionWasCancelled;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)_setAnimationState:(int)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(BSAnimationSettings *)animationSettings;
-(NSSet *)fromApplicationSceneEntities;
-(BOOL)shouldResignActiveForAnimation;
-(void)_begin;
-(int)_animationState;
-(id)init;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_addDebugLogCategory:(id)arg1 ;
-(void)_prepareAnimation;
-(BOOL)animating;
-(BOOL)isInteractive;
-(void)startInteractiveTransition:(id)arg1 ;
-(UIView *)containerView;
-(BOOL)isFluidSwitcherAnimationController;
-(void)removeObserver:(id)arg1 ;
-(void)restartTransition;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)setTransition:(SBViewControllerTransitionContext *)arg1 ;
-(id)_transitionAnimator;
-(void)_willComplete;
-(id<SBViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_cleanupAnimation;
-(BOOL)transitionWasRestarted;
-(SBViewControllerTransitionContext *)transition;
-(id)_animationIdentifier;
-(void)dealloc;
-(NSSet *)toApplicationSceneEntities;
-(BOOL)_willAnimate;
-(void)_enumerateCoordinatingAnimationsWithBlock:(/*^block*/id)arg1 ;
-(id)_getTransitionWindow;
-(void)_noteAnimationDidFinish;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(id<SBUIAnimationControllerTransitionContextProvider>)transitionContextProvider;
-(void)_noteAnimationDidFail;
-(BOOL)__animationShouldStart;
-(void)setAnimationTransactionCompletion:(id)arg1 ;
-(void)__startAnimation;
-(void)__reportAnimationCompletion;
-(void)__cleanupAnimation;
-(void)_cleanupEntityObservers;
-(BOOL)transitionSupportsCancelling;
-(void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)transitionSupportsRestarting;
-(BOOL)isStepped;
-(void)_abortAnimation;
-(id)coordinatingAnimationControllers;
-(void)_enumerateCoordinatingChildRelationshipsWithBlock:(/*^block*/id)arg1 ;
-(id)__alertItemsController;
-(id)_viewsForAnimationStepping;
-(void)_willSetupStartDependencies;
-(id)_progressDependencies;
-(id)__startTransactionDependencyForEntity:(id)arg1 ;
-(BOOL)__wantsInitialProgressStateChange;
-(void)_application:(id)arg1 processStateDidChange:(id)arg2 ;
-(void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)_willBeginWaitingForStartDependencies;
-(BSTransaction *)animationTransaction;
-(BSTransaction *)notifyObserversTransaction;
-(BSTransaction *)cleanupTransaction;
-(void)_registerEntityObserversIfNecessary;
-(void)__abortAnimation;
-(void)_notifyObserversOfAnimationCompletion;
-(BOOL)_isNullAnimation;
-(void)_entityObserverProgressDidChange:(/*^block*/id)arg1 waitForSceneContentAvailableTransactionBlock:(/*^block*/id)arg2 ;
-(void)__noteAnimationDidTerminate;
-(id)animationTransactionCompletion;
-(void)_processStateDidChange:(id)arg1 ;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(SBApplicationSceneEntity *)toApplicationSceneEntity;
-(SBApplicationSceneEntity *)fromApplicationSceneEntity;
-(void)addSteppedCoordinatingChildAnimation:(id)arg1 ;
-(void)delayCleanupUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingCleanupForTransaction:(id)arg1 ;
-(void)delayAnimationUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingAnimationForTransaction:(id)arg1 ;
-(BOOL)waitingToStart;
-(BOOL)isFinishedAnimating;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(id)_displayIdentity;
-(void)_noteAnimationDidRevealApplication;
-(void)setTransitionContextProvider:(id<SBUIAnimationControllerTransitionContextProvider>)arg1 ;
-(BOOL)needsCATransactionActivate;
-(void)setNeedsCATransactionActivate:(BOOL)arg1 ;
@end

