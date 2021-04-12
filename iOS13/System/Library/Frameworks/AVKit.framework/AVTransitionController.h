/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <AVKit/AVTransitionDelegate.h>
#import <AVKit/AVTransitionDriverDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVTransitionControllerDelegate, AVTransitionDriver;
@class UIView, AVDisplayLink, AVTransition, AVInteractiveTransitionGestureTracker, AVPresentationController, CAMediaTimingFunction, AVPresentationContext, NSString;

@interface AVTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, AVTransitionDriverDelegate, UIViewControllerTransitioningDelegate> {

	id<AVTransitionControllerDelegate> _delegate;
	id<AVTransitionDriver> _interactiveGestureTracker;
	UIView* _interactionView;
	long long _state;
	AVDisplayLink* _displayLink;
	AVTransition* _activeTransition;
	AVInteractiveTransitionGestureTracker* _gestureTracker;
	UIView* _sourceView;
	AVPresentationController* _presentationController;
	/*^block*/id _transitionDidBeginHandler;
	CAMediaTimingFunction* _easeInFunction;
	CAMediaTimingFunction* _easeOutFunction;
	CGPoint _touchGravity;

}

@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVDisplayLink * displayLink;                                           //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) AVTransition * activeTransition;                                       //@synthesize activeTransition=_activeTransition - In the implementation block
@property (nonatomic,readonly) AVInteractiveTransitionGestureTracker * gestureTracker;              //@synthesize gestureTracker=_gestureTracker - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                            //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) AVPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,copy) id transitionDidBeginHandler;                                            //@synthesize transitionDidBeginHandler=_transitionDidBeginHandler - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * easeInFunction;                                //@synthesize easeInFunction=_easeInFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * easeOutFunction;                               //@synthesize easeOutFunction=_easeOutFunction - In the implementation block
@property (assign,nonatomic) CGPoint touchGravity;                                                  //@synthesize touchGravity=_touchGravity - In the implementation block
@property (nonatomic,__weak,readonly) AVPresentationContext * presentationContext; 
@property (assign,nonatomic,__weak) id<AVTransitionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<AVTransitionDriver> interactiveGestureTracker;                      //@synthesize interactiveGestureTracker=_interactiveGestureTracker - In the implementation block
@property (assign,nonatomic,__weak) UIView * interactionView;                                       //@synthesize interactionView=_interactionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id<AVTransitionControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTransitionControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(BOOL)wantsInteractiveStart;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(AVPresentationController *)presentationController;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(AVDisplayLink *)displayLink;
-(void)setDisplayLink:(AVDisplayLink *)arg1 ;
-(AVPresentationContext *)presentationContext;
-(void)setPresentationController:(AVPresentationController *)arg1 ;
-(void)transitionWillComplete:(id)arg1 success:(BOOL)arg2 ;
-(id)transitionPresentedViewBackgroundColor:(id)arg1 ;
-(id)transitionBackgroundViewBackgroundColor:(id)arg1 ;
-(BOOL)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(BOOL)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2 ;
-(void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(/*^block*/id)arg3 ;
-(void)transitionDriverDidContinueInteraction:(id)arg1 ;
-(void)transitionDriverDidCancelInteraction:(id)arg1 ;
-(void)transitionDriverDidFinishInteraction:(id)arg1 ;
-(void)setInteractiveGestureTracker:(id<AVTransitionDriver>)arg1 ;
-(void)setInteractionView:(UIView *)arg1 ;
-(void)addTransitionDriver:(id)arg1 toView:(id)arg2 ;
-(void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginFullScreenDismissalOfViewController:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelTransition;
-(void)_finishTransition;
-(void)_fireDidBeginHandlerIfNeeded;
-(void)_startObservingAnimatorProgress;
-(id<AVTransitionDriver>)interactiveGestureTracker;
-(UIView *)interactionView;
-(AVTransition *)activeTransition;
-(void)setActiveTransition:(AVTransition *)arg1 ;
-(AVInteractiveTransitionGestureTracker *)gestureTracker;
-(id)transitionDidBeginHandler;
-(void)setTransitionDidBeginHandler:(id)arg1 ;
-(CAMediaTimingFunction *)easeInFunction;
-(void)setEaseInFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)easeOutFunction;
-(void)setEaseOutFunction:(CAMediaTimingFunction *)arg1 ;
-(CGPoint)touchGravity;
-(void)setTouchGravity:(CGPoint)arg1 ;
@end

