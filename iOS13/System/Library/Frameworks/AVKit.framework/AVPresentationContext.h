/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol UIViewControllerContextTransitioning;
@class UIView, UIWindow, AVFullScreenViewController, AVPresentationContextTransition, AVPresentationController, AVPresentationContainerView, UIViewController;

@interface AVPresentationContext : NSObject {

	BOOL _allowsSecondWindowPresentations;
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
-(UIView *)containerView;
-(UIView *)backgroundView;
-(UIViewController *)presentedViewController;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(AVPresentationContainerView *)presentedView;
-(AVPresentationController *)presentationController;
-(UIView *)sourceView;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(BOOL)isPresenting;
-(AVPresentationContextTransition *)currentTransition;
-(UIWindow *)presentationWindow;
-(BOOL)isDismissing;
-(id)initWithPresentationController:(id)arg1 ;
-(id)presentingView;
-(AVFullScreenViewController *)rotatableWindowViewController;
-(BOOL)hasActiveTransition;
-(BOOL)wasInitiallyInteractive;
-(long long)transitionType;
-(BOOL)canBeInteractivelyDismissed;
-(id)presentationFromView;
-(id)dismissalToView;
-(UIView *)touchBlockingView;
-(BOOL)allowsSecondWindowPresentations;
-(void)setAllowsSecondWindowPresentations:(BOOL)arg1 ;
-(UIWindow *)rotatableSecondWindow;
-(void)setRotatableSecondWindow:(UIWindow *)arg1 ;
-(AVFullScreenViewController *)avFullScreenViewController;
-(AVPresentationContextTransition *)presentingTransition;
-(void)setPresentingTransition:(AVPresentationContextTransition *)arg1 ;
-(AVPresentationContextTransition *)dismissingTransition;
-(void)setDismissingTransition:(AVPresentationContextTransition *)arg1 ;
-(BOOL)allowsPausingWhenTransitionCompletes;
-(void)setAllowsPausingWhenTransitionCompletes:(BOOL)arg1 ;
@end

