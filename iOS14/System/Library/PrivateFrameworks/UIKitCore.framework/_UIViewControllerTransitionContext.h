/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerContextTransitioningEx.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class NSArray, UIView, _UIViewControllerTransitionCoordinator, NSString;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {

	double _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
		unsigned transitionIsInterruptible : 1;
	}  _transitionContextFlags;
	id<UIViewControllerAnimatedTransitioning> __animator;
	UIView* _containerView;
	BOOL __allowUserInteraction;
	BOOL _rotating;
	BOOL _animated;
	BOOL _initiallyInteractive;
	BOOL _currentlyInteractive;
	BOOL __isPresentation;
	NSArray* __containerViews;
	double __percentOffset;
	id<UIViewControllerInteractiveTransitioning> __interactor;
	double __duration;
	/*^block*/id __willCompleteHandler;
	/*^block*/id __completionHandler;
	/*^block*/id __didCompleteHandler;
	double __completionVelocity;
	long long __completionCurve;
	_UIViewControllerTransitionCoordinator* __auxContext;
	long long __state;
	/*^block*/id __interactiveUpdateHandler;
	/*^block*/id __postInteractiveCompletionHandler;
	long long _presentationStyle;

}

@property (assign,setter=_setInitiallyInteractive:,getter=_initiallyInteractive,nonatomic) BOOL initiallyInteractive;               //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,setter=_setCurrentlyInteractive:,getter=isCurrentlyInteractive,nonatomic) BOOL currentlyInteractive;              //@synthesize currentlyInteractive=_currentlyInteractive - In the implementation block
@property (assign,setter=_setInterruptible:,getter=isInterruptible,nonatomic) BOOL interruptible; 
@property (assign,setter=_setCompletionVelocity:,nonatomic) double _completionVelocity;                                             //@synthesize _completionVelocity=__completionVelocity - In the implementation block
@property (assign,setter=_setCompletionCurve:,nonatomic) long long _completionCurve;                                                //@synthesize _completionCurve=__completionCurve - In the implementation block
@property (assign,setter=_setTransitionIsCompleting:,nonatomic) BOOL _transitionIsCompleting; 
@property (setter=_setAuxContext:,nonatomic,retain) _UIViewControllerTransitionCoordinator * _auxContext;                           //@synthesize _auxContext=__auxContext - In the implementation block
@property (assign,setter=_setState:,nonatomic) long long _state;                                                                    //@synthesize _state=__state - In the implementation block
@property (setter=_setInteractiveUpdateHandler:,nonatomic,copy) id _interactiveUpdateHandler;                                       //@synthesize _interactiveUpdateHandler=__interactiveUpdateHandler - In the implementation block
@property (setter=_setPostInteractiveCompletionHandler:,nonatomic,copy) id _postInteractiveCompletionHandler;                       //@synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler - In the implementation block
@property (assign,setter=_setPresentationStyle:,nonatomic) long long presentationStyle;                                             //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,setter=_setIsPresentation:,nonatomic) BOOL _isPresentation;                                                       //@synthesize _isPresentation=__isPresentation - In the implementation block
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews;                                                  //@synthesize _containerViews=__containerViews - In the implementation block
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset;                                                       //@synthesize _percentOffset=__percentOffset - In the implementation block
@property (assign,setter=_setAnimator:,nonatomic,__weak) id<UIViewControllerAnimatedTransitioning> _animator; 
@property (assign,setter=_setInteractor:,nonatomic,__weak) id<UIViewControllerInteractiveTransitioning> _interactor;                //@synthesize _interactor=__interactor - In the implementation block
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction;              //@synthesize _allowUserInteraction=__allowUserInteraction - In the implementation block
@property (assign,setter=_setRotating:,getter=_isRotating,nonatomic) BOOL rotating;                                                 //@synthesize rotating=_rotating - In the implementation block
@property (getter=_affineTransform,nonatomic,readonly) CGAffineTransform affineTransform; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                                                     //@synthesize animated=_animated - In the implementation block
@property (assign,setter=_setDuration:,nonatomic) double _duration;                                                                 //@synthesize _duration=__duration - In the implementation block
@property (setter=_setWillCompleteHandler:,nonatomic,copy) id _willCompleteHandler;                                                 //@synthesize _willCompleteHandler=__willCompleteHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                                     //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (setter=_setDidCompleteHandler:,nonatomic,copy) id _didCompleteHandler;                                                   //@synthesize _didCompleteHandler=__didCompleteHandler - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_associatedTransitionContextForObject:(id)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)transitionWasCancelled;
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(void)_setCompletionVelocity:(double)arg1 ;
-(CGAffineTransform)targetTransform;
-(BOOL)initiallyInteractive;
-(BOOL)_isRotating;
-(id)init;
-(void)_setRotating:(BOOL)arg1 ;
-(BOOL)_allowUserInteraction;
-(BOOL)isInterruptible;
-(void)_setContainerView:(id)arg1 ;
-(void)_setPostInteractiveCompletionHandler:(/*^block*/id)arg1 ;
-(void)__runAlongsideAnimations;
-(BOOL)_isPresentation;
-(id)_interactiveUpdateHandler;
-(void)cancelInteractiveTransition;
-(NSArray *)_containerViews;
-(void)_runAlongsideCompletions;
-(void)_setTransitionIsCompleting:(BOOL)arg1 ;
-(BOOL)_initiallyInteractive;
-(void)_enableInteractionForDisabledViews;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1 ;
-(void)setTransitionWasCancelled:(BOOL)arg1 ;
-(BOOL)_transitionIsCompleting;
-(void)_setCompletionCurve:(long long)arg1 ;
-(void)_interactivityDidChange:(BOOL)arg1 ;
-(BOOL)_transitionIsInFlight;
-(void)_setTransitionIsInFlight:(BOOL)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(void)_setPercentOffset:(double)arg1 ;
-(BOOL)isInteractive;
-(void)_disableInteractionForViews:(id)arg1 ;
-(void)_stopInteractiveTransition;
-(void)_setInterruptible:(BOOL)arg1 ;
-(UIView *)containerView;
-(void)updateInteractiveTransition:(double)arg1 ;
-(long long)_alongsideAnimationsCount;
-(_UIViewControllerTransitionCoordinator *)_auxContext;
-(void)_setInteractor:(id)arg1 ;
-(void)_setPresentationStyle:(long long)arg1 ;
-(void)_setIsAnimated:(BOOL)arg1 ;
-(void)finishInteractiveTransition;
-(void)_setDuration:(double)arg1 ;
-(void)_setInitiallyInteractive:(BOOL)arg1 ;
-(void)_setDidCompleteHandler:(/*^block*/id)arg1 ;
-(long long)_completionCurve;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setCurrentlyInteractive:(BOOL)arg1 ;
-(double)_previousPercentComplete;
-(id)_didCompleteHandler;
-(void)_setAuxContext:(id)arg1 ;
-(double)_completionVelocity;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(void)_setAnimator:(id)arg1 ;
-(id)_completionHandler;
-(void)_setInteractiveUpdateHandler:(/*^block*/id)arg1 ;
-(CGAffineTransform)_affineTransform;
-(void)_setContainerViews:(id)arg1 ;
-(id)_transitionCoordinator;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(double)_duration;
-(id)_postInteractiveCompletionHandler;
-(void)_setPreviousPercentComplete:(double)arg1 ;
-(void)_setWillCompleteHandler:(/*^block*/id)arg1 ;
-(id)_willCompleteHandler;
-(void)pauseInteractiveTransition;
-(double)_percentOffset;
-(void)_setIsPresentation:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isCurrentlyInteractive;
-(void)_setAllowUserInteraction:(BOOL)arg1 ;
@end

