/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIPresentationController.h>

@class AVPresentationContext, AVObservationController, UIWindow;

@interface AVPresentationController : UIPresentationController {

	AVPresentationContext* _context;
	AVObservationController* _observationController;
	UIWindow* _presentationWindowForDisablingAutorotation;

}

@property (nonatomic,readonly) AVObservationController * observationController;                         //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * presentationWindowForDisablingAutorotation;              //@synthesize presentationWindowForDisablingAutorotation=_presentationWindowForDisablingAutorotation - In the implementation block
@property (nonatomic,readonly) AVPresentationContext * context;                                         //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(AVPresentationContext *)context;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(AVObservationController *)observationController;
-(void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(BOOL)arg2 ;
-(void)_prepareDismissingTransitionContext;
-(void)_observeSceneDidBecomeActiveForRestoringRotatability;
-(UIWindow *)presentationWindowForDisablingAutorotation;
-(void)setPresentationWindowForDisablingAutorotation:(UIWindow *)arg1 ;
@end

