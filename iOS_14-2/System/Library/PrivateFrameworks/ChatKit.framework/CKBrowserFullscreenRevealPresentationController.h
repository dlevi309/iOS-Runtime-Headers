/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class CKBrowserFullscreenRevealDimmingView, UIStatusBar, UIStatusBarWindow, UIView;

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController {

	BOOL _presenting;
	BOOL _dismissing;
	/*^block*/id _dismissHandler;
	CKBrowserFullscreenRevealDimmingView* _dimmingView;
	UIStatusBar* _statusBar;
	UIStatusBarWindow* _statusBarWindow;
	unsigned long long _statusBarResizeMask;
	UIView* _presentingSnapshotView;
	CGRect _presentingSnapshotFrame;

}

@property (nonatomic,retain) CKBrowserFullscreenRevealDimmingView * dimmingView;              //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                             //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                             //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                         //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIStatusBarWindow * statusBarWindow;                             //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarResizeMask;                          //@synthesize statusBarResizeMask=_statusBarResizeMask - In the implementation block
@property (nonatomic,retain) UIView * presentingSnapshotView;                                 //@synthesize presentingSnapshotView=_presentingSnapshotView - In the implementation block
@property (assign,nonatomic) CGRect presentingSnapshotFrame;                                  //@synthesize presentingSnapshotFrame=_presentingSnapshotFrame - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                                 //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(UIStatusBar *)statusBar;
-(void)dismissalTransitionWillBegin;
-(void)dimmingViewTapped:(id)arg1 ;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)_prepareViewHierarchyForPresentation;
-(void)_configureViewsForPresentedState;
-(CGRect)presentingSnapshotFrame;
-(UIView *)presentingSnapshotView;
-(void)_configureViewsForDismissedState;
-(void)setPresentingSnapshotView:(UIView *)arg1 ;
-(id)_viewsToApplyTransform;
-(void)setPresentingSnapshotFrame:(CGRect)arg1 ;
-(id)_viewsToApplyCornerRadius;
-(void)setStatusBarResizeMask:(unsigned long long)arg1 ;
-(unsigned long long)statusBarResizeMask;
-(void)setStatusBarWindow:(UIStatusBarWindow *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(void)setDimmingView:(CKBrowserFullscreenRevealDimmingView *)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)dismissHandler;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)_shouldGrabPresentersView;
-(void)setDismissing:(BOOL)arg1 ;
-(UIStatusBarWindow *)statusBarWindow;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(BOOL)isDismissing;
-(CKBrowserFullscreenRevealDimmingView *)dimmingView;
-(BOOL)isPresenting;
-(void)_cleanupPresentation;
-(void)dealloc;
@end

