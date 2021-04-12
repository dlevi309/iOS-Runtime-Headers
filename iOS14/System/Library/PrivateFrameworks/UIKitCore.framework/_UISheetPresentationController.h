/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKitCore/_UISheetLayoutInfoDelegate.h>
#import <UIKitCore/_UISheetInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>

@class _UISheetInteraction, _UISheetLayoutInfo, UIDimmingView, _UISheetAnimationController, UIPercentDrivenInteractiveTransition, UIDragInteraction, NSUserActivity, _UIRemoteViewController, UIViewPropertyAnimator, UIDropShadowView, _UISheetPresentationControllerConfiguration, UIView, NSArray, NSString;

@interface _UISheetPresentationController : UIPresentationController <UIDimmingViewDelegate, _UISheetLayoutInfoDelegate, _UISheetInteractionDelegate, UIDragInteractionDelegate> {

	BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
	BOOL __didAttemptToStartDismiss;
	BOOL __didTearOff;
	BOOL __remoteDismissing;
	BOOL __dimmingViewTapDismissing;
	BOOL __keyboardShown;
	BOOL __isRemote;
	BOOL __presentsAtStandardHalfHeight;
	BOOL __allowsTearOff;
	_UISheetInteraction* __sheetInteraction;
	double __preferredRecessedCornerRadius;
	_UISheetLayoutInfo* __layoutInfo;
	UIDimmingView* __confinedDimmingView;
	_UISheetAnimationController* __animationController;
	UIPercentDrivenInteractiveTransition* __interactionController;
	UIDragInteraction* __tearOffInteraction;
	NSUserActivity* __tearOffActivity;
	_UIRemoteViewController* __connectedRemoteViewController;
	UIViewPropertyAnimator* __remoteDismissalPropertyAnimator;
	UIDropShadowView* _dropShadowView;
	UIDimmingView* _dimmingView;
	CGPoint __initialTearOffPoint;
	CGRect _frameOfPresentedViewInContainerView;

}

@property (nonatomic,readonly) _UISheetLayoutInfo * _layoutInfo;                                                                                                             //@synthesize _layoutInfo=__layoutInfo - In the implementation block
@property (nonatomic,readonly) UIDimmingView * _confinedDimmingView;                                                                                                         //@synthesize _confinedDimmingView=__confinedDimmingView - In the implementation block
@property (nonatomic,readonly) _UISheetPresentationController * _parentSheetPresentationController; 
@property (nonatomic,readonly) _UISheetPresentationController * _childSheetPresentationController; 
@property (assign,nonatomic) CGRect frameOfPresentedViewInContainerView;                                                                                                     //@synthesize frameOfPresentedViewInContainerView=_frameOfPresentedViewInContainerView - In the implementation block
@property (assign,setter=_setShouldPresentedViewControllerControlStatusBarAppearance:,nonatomic) BOOL _shouldPresentedViewControllerControlStatusBarAppearance;              //@synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) _UISheetInteraction * _sheetInteraction;                                                                                                      //@synthesize _sheetInteraction=__sheetInteraction - In the implementation block
@property (nonatomic,readonly) _UISheetInteraction * _sheetInteractionIfLoaded; 
@property (setter=_setAnimatedTransition:,nonatomic,retain) _UISheetAnimationController * _animationController;                                                              //@synthesize _animationController=__animationController - In the implementation block
@property (setter=_setInteractiveTransition:,nonatomic,retain) UIPercentDrivenInteractiveTransition * _interactionController;                                                //@synthesize _interactionController=__interactionController - In the implementation block
@property (assign,setter=_setDidAttemptToStartDismiss:,nonatomic) BOOL _didAttemptToStartDismiss;                                                                            //@synthesize _didAttemptToStartDismiss=__didAttemptToStartDismiss - In the implementation block
@property (nonatomic,readonly) UIDragInteraction * _tearOffInteraction;                                                                                                      //@synthesize _tearOffInteraction=__tearOffInteraction - In the implementation block
@property (assign,setter=_setDidTearOff:,nonatomic) BOOL _didTearOff;                                                                                                        //@synthesize _didTearOff=__didTearOff - In the implementation block
@property (assign,setter=_setInitialTearOffPoint:,nonatomic) CGPoint _initialTearOffPoint;                                                                                   //@synthesize _initialTearOffPoint=__initialTearOffPoint - In the implementation block
@property (setter=_setTearOffActivity:,nonatomic,retain) NSUserActivity * _tearOffActivity;                                                                                  //@synthesize _tearOffActivity=__tearOffActivity - In the implementation block
@property (getter=_isHosting,nonatomic,readonly) BOOL _hosting; 
@property (nonatomic,readonly) _UIRemoteViewController * _connectedRemoteViewController;                                                                                     //@synthesize _connectedRemoteViewController=__connectedRemoteViewController - In the implementation block
@property (nonatomic,readonly) _UIRemoteViewController * _expectedRemoteViewController; 
@property (assign,setter=_setRemoteDismissing:,getter=_isRemoteDismissing,nonatomic) BOOL _remoteDismissing;                                                                 //@synthesize _remoteDismissing=__remoteDismissing - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * _remoteDismissalPropertyAnimator;                                                                                      //@synthesize _remoteDismissalPropertyAnimator=__remoteDismissalPropertyAnimator - In the implementation block
@property (assign,setter=_setDimmingViewTapDismissing:,getter=_isDimmingViewTapDismissing,nonatomic) BOOL _dimmingViewTapDismissing;                                         //@synthesize _dimmingViewTapDismissing=__dimmingViewTapDismissing - In the implementation block
@property (assign,setter=_setKeyboardShown:,getter=_isKeyboardShown,nonatomic) BOOL _keyboardShown;                                                                          //@synthesize _keyboardShown=__keyboardShown - In the implementation block
@property (nonatomic,readonly) UIDropShadowView * dropShadowView;                                                                                                            //@synthesize dropShadowView=_dropShadowView - In the implementation block
@property (nonatomic,readonly) UIDimmingView * dimmingView;                                                                                                                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode; 
@property (assign,setter=_setIsRemote:,nonatomic) BOOL _isRemote;                                                                                                            //@synthesize _isRemote=__isRemote - In the implementation block
@property (setter=_setConfiguration:,nonatomic,retain) _UISheetPresentationControllerConfiguration * _configuration; 
@property (nonatomic,readonly) BOOL _isRootPresentation; 
@property (assign,setter=_setAdditionalMinimumTopInset:,nonatomic) double _additionalMinimumTopInset; 
@property (assign,setter=_setGrabberTopSpacing:,nonatomic) double _grabberTopSpacing; 
@property (assign,setter=_setWantsBottomAttached:,nonatomic) BOOL _wantsBottomAttached; 
@property (assign,setter=_setAllowsInteractiveDismissWhenFullScreen:,nonatomic) BOOL _allowsInteractiveDismissWhenFullScreen; 
@property (assign,setter=_setPresentsAtStandardHalfHeight:,nonatomic) BOOL _presentsAtStandardHalfHeight;                                                                    //@synthesize _presentsAtStandardHalfHeight=__presentsAtStandardHalfHeight - In the implementation block
@property (assign,setter=_setAllowsTearOff:,nonatomic) BOOL _allowsTearOff;                                                                                                  //@synthesize _allowsTearOff=__allowsTearOff - In the implementation block
@property (setter=_setSourceView:,nonatomic,retain) UIView * _sourceView; 
@property (assign,setter=_setShouldDismissWhenTappedOutside:,getter=_shouldDismissWhenTappedOutside,nonatomic) BOOL shouldDismissWhenTappedOutside; 
@property (assign,setter=_setShouldScaleDownBehindDescendantSheets:,nonatomic) BOOL _shouldScaleDownBehindDescendantSheets; 
@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen; 
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight; 
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached; 
@property (assign,setter=_setWantsGrabber:,nonatomic) BOOL _wantsGrabber; 
@property (assign,setter=_setCornerRadiusForPresentationAndDismissal:,nonatomic) double _cornerRadiusForPresentationAndDismissal; 
@property (assign,setter=_setPreferredCornerRadius:,nonatomic) double _preferredCornerRadius; 
@property (assign,setter=_setPreferredRecessedCornerRadius:,nonatomic) double _preferredRecessedCornerRadius;                                                                //@synthesize _preferredRecessedCornerRadius=__preferredRecessedCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<_UISheetPresentationControllerDelegate> delegate; 
@property (setter=_setDetents:,nonatomic,copy) NSArray * _detents; 
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent; 
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent; 
@property (assign,setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:,nonatomic) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; 
@property (setter=_setPassthroughViews:,nonatomic,copy) NSArray * _passthroughViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_initialMode;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_wantsBottomAttached;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_isHosting;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_setPassthroughViews:(id)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(NSArray *)_detents;
-(void)_setAllowsInteractiveDismissWhenFullScreen:(BOOL)arg1 ;
-(double)_additionalMinimumTopInset;
-(BOOL)_wantsGrabber;
-(NSArray *)_passthroughViews;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(void)_setPreferredCornerRadius:(double)arg1 ;
-(_UISheetPresentationControllerConfiguration *)_configuration;
-(void)_keyboardAboutToChangeFrame:(id)arg1 ;
-(long long)_mode;
-(BOOL)_wantsFullScreen;
-(double)_cornerRadiusForPresentationAndDismissal;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(void)_setDetents:(id)arg1 ;
-(void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
-(long long)presentationStyle;
-(long long)_indexOfCurrentDetent;
-(void)_setTearOffActivity:(id)arg1 ;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(BOOL)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setMode:(long long)arg1 ;
-(void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
-(void)sheetInteraction:(id)arg1 didChangeOffset:(CGPoint)arg2 ;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(UIPercentDrivenInteractiveTransition *)_interactionController;
-(void)_tryToConnectToRemoteViewController:(id)arg1 ;
-(double)_grabberTopSpacing;
-(void)_setAllowsTearOff:(BOOL)arg1 ;
-(BOOL)_isRemote;
-(UIDropShadowView *)dropShadowView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)presentedView;
-(void)_keyboardAboutToHide:(id)arg1 ;
-(BOOL)_isKeyboardShown;
-(void)_setInitialTearOffPoint:(CGPoint)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)_setGrabberTopSpacing:(double)arg1 ;
-(void)_setDidTearOff:(BOOL)arg1 ;
-(_UISheetInteraction *)_sheetInteraction;
-(BOOL)_shouldDismissWhenTappedOutside;
-(void)set_remoteDismissalPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(double)_preferredRecessedCornerRadius;
-(void)_containerViewSafeAreaInsetsDidChange;
-(void)_setKeyboardShown:(BOOL)arg1 ;
-(void)_updateAnimationController;
-(void)_setDimmingViewTapDismissing:(BOOL)arg1 ;
-(void)_setWantsGrabber:(BOOL)arg1 ;
-(NSUserActivity *)_tearOffActivity;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)setFrameOfPresentedViewInContainerView:(CGRect)arg1 ;
-(BOOL)_presentsAtStandardHalfHeight;
-(void)_containerViewBoundsDidChange;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)_sheetLayoutInfoLayout:(id)arg1 ;
-(void)_setShouldDismissWhenTappedOutside:(BOOL)arg1 ;
-(BOOL)_isDimmingViewTapDismissing;
-(void)_resetRemoteDismissing;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)sheetInteraction:(id)arg1 shouldAllowVerticalRubberBandingWithEvent:(id)arg2 ;
-(void)_updateInteractiveTransitionWithProgress:(double)arg1 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)_keyboardAboutToShow:(id)arg1 ;
-(_UISheetPresentationController *)_childSheetPresentationController;
-(BOOL)_isRemoteDismissing;
-(void)_updatePresentedViewFrame;
-(void)_setPreferredRecessedCornerRadius:(double)arg1 ;
-(void)_startInteractiveTransitionWithProgress:(double)arg1 ;
-(void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1 ;
-(UIView *)_sourceView;
-(_UISheetInteraction *)_sheetInteractionIfLoaded;
-(void)_setWantsBottomAttached:(BOOL)arg1 ;
-(void)_containerViewTraitCollectionDidChange;
-(BOOL)_isRootPresentation;
-(BOOL)_allowsTearOff;
-(void)_setAdditionalMinimumTopInset:(double)arg1 ;
-(BOOL)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg2 ;
-(void)_completeInteractiveTransition:(BOOL)arg1 duration:(double)arg2 timingCurve:(id)arg3 ;
-(_UISheetAnimationController *)_animationController;
-(void)_handleKeyboardNotification:(id)arg1 aboutToHide:(BOOL)arg2 ;
-(void)_setAnimatedTransition:(id)arg1 ;
-(void)_setInteractiveTransition:(id)arg1 ;
-(BOOL)_didTearOff;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)_setPresentsAtStandardHalfHeight:(BOOL)arg1 ;
-(BOOL)_shouldPreserveFirstResponder;
-(void)_setConfiguration:(id)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)_didAttemptToStartDismiss;
-(void)_setDidAttemptToStartDismiss:(BOOL)arg1 ;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(_UIRemoteViewController *)_expectedRemoteViewController;
-(CGPoint)offsetForInterruptedAnimationInSheetInteraction:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(UIDimmingView *)_confinedDimmingView;
-(CGPoint)_initialTearOffPoint;
-(BOOL)_shouldScaleDownBehindDescendantSheets;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)_setRemoteDismissing:(BOOL)arg1 ;
-(id)_preferredAnimationControllerForDismissal;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)_realSourceViewGeometryDidChange;
-(void)transitionWillBegin:(BOOL)arg1 ;
-(void)_updateLayoutInfoContainerTraitCollection;
-(UIViewPropertyAnimator *)_remoteDismissalPropertyAnimator;
-(UIDimmingView *)dimmingView;
-(void)_setShouldPresentedViewControllerControlStatusBarAppearance:(BOOL)arg1 ;
-(void)_sheetLayoutInfoPrelayout:(id)arg1 ;
-(void)_setShouldScaleDownBehindDescendantSheets:(BOOL)arg1 ;
-(void)_remoteSheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)_setSourceView:(id)arg1 ;
-(void)_accessibilityReduceMotionStatusDidChange;
-(void)_setCornerRadiusForPresentationAndDismissal:(double)arg1 ;
-(double)_preferredCornerRadius;
-(void)_updateLayoutInfoContainerSafeAreaInsets;
-(void)_containerViewLayoutSubviews;
-(_UISheetLayoutInfo *)_layoutInfo;
-(void)_setIsRemote:(BOOL)arg1 ;
-(void)_sheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 deferredDismissible:(/*^block*/id)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(_UIRemoteViewController *)_connectedRemoteViewController;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(id)_preferredInteractionControllerForDismissal:(id)arg1 ;
-(_UISheetPresentationController *)_parentSheetPresentationController;
-(UIDragInteraction *)_tearOffInteraction;
-(BOOL)_allowsInteractiveDismissWhenFullScreen;
@end

