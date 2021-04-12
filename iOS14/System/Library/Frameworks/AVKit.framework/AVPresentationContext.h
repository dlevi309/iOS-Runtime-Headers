/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol UIViewControllerContextTransitioning;
@class UIView, UIWindow, AVFullScreenViewController, AVPresentationContextTransition, AVPresentationController, AVPresentationContainerView, UIViewController;

@interface AVPresentationContext : NSObject {

	BOOL _allowsSecondWindowPresentations;
	BOOL _wasInitiallyPresentedWithoutSecondWindow;
	BOOL _allowsPausingWhenTransitionCompletes;
	UIView* _sourceView;
	UIView* _touchBlockingView;
	UIView* _backgroundView;
	id<UIViewControllerContextTransitioning> _transitionContext;
	UIWindow* _rotatableSecondWindow;
	AVFullScreenViewController* _avFullScreenViewController;
	AVPresentationContextTransition* _presentingTransition;
	AVPresentationContextTransition* _dismissingTransition;
	AVPresentationController* _presentationController;

}

@property (nonatomic,__weak,readonly) AVPresentationController * presentationController;                       //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,readonly) long long transitionType; 
@property (assign,nonatomic,__weak) UIView * sourceView;                                                       //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,__weak,readonly) AVPresentationContainerView * presentedView; 
@property (nonatomic,__weak,readonly) UIView * containerView; 
@property (nonatomic,__weak,readonly) UIWindow * presentationWindow; 
@property (nonatomic,readonly) UIView * touchBlockingView;                                                     //@synthesize touchBlockingView=_touchBlockingView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentedViewController; 
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL allowsSecondWindowPresentations;                                             //@synthesize allowsSecondWindowPresentations=_allowsSecondWindowPresentations - In the implementation block
@property (assign,nonatomic) BOOL wasInitiallyPresentedWithoutSecondWindow;                                    //@synthesize wasInitiallyPresentedWithoutSecondWindow=_wasInitiallyPresentedWithoutSecondWindow - In the implementation block
@property (nonatomic,retain) UIWindow * rotatableSecondWindow;                                                 //@synthesize rotatableSecondWindow=_rotatableSecondWindow - In the implementation block
@property (nonatomic,__weak,readonly) AVFullScreenViewController * avFullScreenViewController;                 //@synthesize avFullScreenViewController=_avFullScreenViewController - In the implementation block
@property (nonatomic,__weak,readonly) AVFullScreenViewController * rotatableWindowViewController; 
@property (nonatomic,retain) AVPresentationContextTransition * presentingTransition;                           //@synthesize presentingTransition=_presentingTransition - In the implementation block
@property (nonatomic,retain) AVPresentationContextTransition * dismissingTransition;                           //@synthesize dismissingTransition=_dismissingTransition - In the implementation block
@property (nonatomic,readonly) AVPresentationContextTransition * currentTransition; 
@property (nonatomic,readonly) BOOL hasActiveTransition; 
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
@property (getter=isDismissing,nonatomic,readonly) BOOL dismissing; 
@property (nonatomic,readonly) BOOL wasInitiallyInteractive; 
@property (nonatomic,readonly) BOOL canBeInteractivelyDismissed; 
@property (assign,nonatomic) BOOL allowsPausingWhenTransitionCompletes;                                        //@synthesize allowsPausingWhenTransitionCompletes=_allowsPausingWhenTransitionCompletes - In the implementation block
+(BOOL)supportsInteractiveCounterRotationDismissals;
-(long long)transitionType;
-(UIView *)touchBlockingView;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(AVPresentationContainerView *)presentedView;
-(void)setSourceView:(UIView *)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(UIView *)backgroundView;
-(id)initWithPresentationController:(id)arg1 ;
-(id)presentingView;
-(AVFullScreenViewController *)rotatableWindowViewController;
-(BOOL)hasActiveTransition;
-(BOOL)wasInitiallyInteractive;
-(BOOL)canBeInteractivelyDismissed;
-(id)presentationFromView;
-(id)dismissalToView;
-(BOOL)allowsSecondWindowPresentations;
-(void)setAllowsSecondWindowPresentations:(BOOL)arg1 ;
-(BOOL)wasInitiallyPresentedWithoutSecondWindow;
-(void)setWasInitiallyPresentedWithoutSecondWindow:(BOOL)arg1 ;
-(UIWindow *)rotatableSecondWindow;
-(void)setRotatableSecondWindow:(UIWindow *)arg1 ;
-(AVFullScreenViewController *)avFullScreenViewController;
-(AVPresentationContextTransition *)presentingTransition;
-(void)setPresentingTransition:(AVPresentationContextTransition *)arg1 ;
-(AVPresentationContextTransition *)dismissingTransition;
-(void)setDismissingTransition:(AVPresentationContextTransition *)arg1 ;
-(BOOL)allowsPausingWhenTransitionCompletes;
-(void)setAllowsPausingWhenTransitionCompletes:(BOOL)arg1 ;
-(UIView *)sourceView;
-(UIView *)containerView;
-(AVPresentationController *)presentationController;
-(AVPresentationContextTransition *)currentTransition;
-(BOOL)isDismissing;
-(BOOL)isPresenting;
-(UIWindow *)presentationWindow;
-(UIViewController *)presentedViewController;
@end

