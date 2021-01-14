/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIPreviewPresentationControllerDelegate;
@class UITapGestureRecognizer, UIVisualEffectView, UIView, NSArray, NSHashTable, UIResponder, UIWindow, NSString;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	BOOL _appliesVisualEffectsToPresentingView;
	id<UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	UIVisualEffectView* _presentationContainerEffectView;
	UIView* _localStatusBar;
	NSArray* _keyboardSnapshotters;
	NSHashTable* _keyboardWindows;
	UIResponder* _currentPinnedResponder;
	UIWindow* _presentationWindow;
	/*^block*/id _containerViewConfigurationBlock;
	/*^block*/id _dismissalTransitionDidEndBlock;

}

@property (assign,nonatomic,__weak) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate;              //@synthesize previewPresentationDelegate=_previewPresentationDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                           //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL appliesVisualEffectsToPresentingView;                                                   //@synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * presentationContainerEffectView;                                        //@synthesize presentationContainerEffectView=_presentationContainerEffectView - In the implementation block
@property (nonatomic,retain) UIView * localStatusBar;                                                                     //@synthesize localStatusBar=_localStatusBar - In the implementation block
@property (nonatomic,copy) NSArray * keyboardSnapshotters;                                                                //@synthesize keyboardSnapshotters=_keyboardSnapshotters - In the implementation block
@property (nonatomic,copy) NSHashTable * keyboardWindows;                                                                 //@synthesize keyboardWindows=_keyboardWindows - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * currentPinnedResponder;                                                 //@synthesize currentPinnedResponder=_currentPinnedResponder - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * presentationWindow;                                                        //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id containerViewConfigurationBlock;                                                            //@synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock - In the implementation block
@property (nonatomic,copy) id dismissalTransitionDidEndBlock;                                                             //@synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(BOOL)_shouldInterdictServiceViewTouches;
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)setPresentationWindow:(UIWindow *)arg1 ;
-(long long)presentationStyle;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(void)dismissalTransitionWillBegin;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(id)_presentationContainerView;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(UIView *)localStatusBar;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(void)setKeyboardWindows:(NSHashTable *)arg1 ;
-(BOOL)_allowsAutorotation;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(NSHashTable *)keyboardWindows;
-(NSArray *)keyboardSnapshotters;
-(void)setLocalStatusBar:(UIView *)arg1 ;
-(void)_layoutForPreview;
-(id)containerViewConfigurationBlock;
-(void)_prepareContainerViewForPresentationTransition;
-(void)_prepareDismissGestureRecognizersIfNeeded;
-(UIResponder *)currentPinnedResponder;
-(void)_finalizeAfterDismissalTransition;
-(void)_layoutForInteractiveHighlight;
-(void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)_layoutForCancel;
-(BOOL)appliesVisualEffectsToPresentingView;
-(void)setCurrentPinnedResponder:(UIResponder *)arg1 ;
-(void)_prepareStatusBarForPresentationTransition;
-(void)setKeyboardSnapshotters:(NSArray *)arg1 ;
-(void)_prepareKeyboardForPresentationTransition;
-(void)_previewTransitionDidEnd:(BOOL)arg1 ;
-(void)_animatePreviewTransitionIfNeeded:(id)arg1 ;
-(id<UIPreviewPresentationControllerDelegate>)previewPresentationDelegate;
-(void)_handleDismissGestureRecognizer:(id)arg1 ;
-(void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1 ;
-(void)_cancelTransitionDidEnd:(BOOL)arg1 ;
-(void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1 ;
-(void)setPresentationContainerEffectView:(UIVisualEffectView *)arg1 ;
-(id)dismissalTransitionDidEndBlock;
-(void)setContainerViewConfigurationBlock:(id)arg1 ;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(void)presentationTransitionWillBegin;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(UIVisualEffectView *)presentationContainerEffectView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)setPreviewPresentationDelegate:(id<UIPreviewPresentationControllerDelegate>)arg1 ;
-(void)setAppliesVisualEffectsToPresentingView:(BOOL)arg1 ;
-(void)setDismissalTransitionDidEndBlock:(id)arg1 ;
-(UIWindow *)presentationWindow;
@end

