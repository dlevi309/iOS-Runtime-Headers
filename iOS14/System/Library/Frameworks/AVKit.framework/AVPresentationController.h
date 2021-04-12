/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(void)dismissalTransitionWillBegin;
-(AVPresentationContext *)context;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(BOOL)arg2 ;
-(void)_prepareDismissingTransitionContext;
-(void)_observeSceneDidBecomeActiveForRestoringRotatability;
-(UIWindow *)presentationWindowForDisablingAutorotation;
-(void)setPresentationWindowForDisablingAutorotation:(UIWindow *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

