/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/UIAppearanceContainer.h>

@class UIViewController, _UIPopoverView, UIDimmingView, UIView, UIBarButtonItem, UIColor, _UIPopoverLayoutInfo, UIPanGestureRecognizer, NSArray, UIPopoverPresentationController, NSString;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {

	id _delegate;
	UIViewController* _contentViewController;
	UIViewController* _splitParentController;
	_UIPopoverView* _popoverView;
	UIDimmingView* _dimmingView;
	UIView* _layoutConstraintView;
	CGRect _targetRectInEmbeddingView;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned long long _requestedArrowDirections;
	unsigned long long _currentArrowDirection;
	long long _popoverBackgroundStyle;
	UIColor* _backgroundColor;
	_UIPopoverLayoutInfo* _preferredLayoutInfo;
	Class _popoverBackgroundViewClass;
	CGSize _popoverContentSize;
	CGRect _targetRectInDimmingView;
	CGRect _embeddedTargetRect;
	long long _popoverControllerStyle;
	BOOL _ignoresKeyboardNotifications;
	UIView* _currentPresentationView;
	CGRect _currentPresentationRectInView;
	unsigned long long _originalArrowDirections;
	unsigned draggingChildScrollViewCount;
	id _target;
	SEL _didEndSelector;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	unsigned long long _toViewAutoResizingMask;
	UIViewController* _slidingViewController;
	UIView* _presentingView;
	unsigned long long _presentationEdge;
	long long _presentationDirection;
	int _presentationState;
	BOOL _didPresentInActiveSequence;
	unsigned long long _slideTransitionCount;
	UIPanGestureRecognizer* _vendedGestureRecognizer;
	UIPanGestureRecognizer* _dimmingViewGestureRecognizer;
	UIPopoverController* _retainedSelf;
	NSArray* _passthroughViews;
	struct {
		unsigned isPresentingModalViewController : 1;
		unsigned isPresentingActionSheet : 1;
		unsigned wasIgnoringDimmingViewTouchesBeforeScrolling : 1;
		unsigned isInTextEffectsWindow : 1;
		unsigned isEmbeddingInView : 1;
		unsigned embeddedPresentationBounces : 1;
		unsigned isWaitingToPresentShimmedPopover : 1;
	}  _popoverControllerFlags;
	BOOL _dismissesOnRotation;
	BOOL _showsTargetRect;
	BOOL _showsOrientationMarker;
	BOOL _showsPresentationArea;
	BOOL _retainsSelfWhilePresented;
	BOOL _allowsPopoverPresentationToAdapt;
	unsigned long long _popoverArrowDirection;
	UIPopoverPresentationController* _presentationController;
	UIEdgeInsets _popoverLayoutMargins;

}

@property (assign,nonatomic) unsigned long long popoverArrowDirection;                                                                                                 //@synthesize popoverArrowDirection=_popoverArrowDirection - In the implementation block
@property (nonatomic,retain) UIDimmingView * dimmingView;                                                                                                              //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL dismissesOnRotation;                                                                                                                 //@synthesize dismissesOnRotation=_dismissesOnRotation - In the implementation block
@property (nonatomic,retain) _UIPopoverLayoutInfo * preferredLayoutInfo;                                                                                               //@synthesize preferredLayoutInfo=_preferredLayoutInfo - In the implementation block
@property (assign,setter=_setPresentingView:,getter=_presentingView,nonatomic,__weak) UIView * presentingView;                                                         //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,setter=_setPresentationEdge:,getter=_presentationEdge,nonatomic) unsigned long long presentationEdge;                                                //@synthesize presentationEdge=_presentationEdge - In the implementation block
@property (assign,setter=_setIgnoresKeyboardNotifications:,nonatomic) BOOL _ignoresKeyboardNotifications; 
@property (setter=_setPresentationController:,getter=_presentationController,nonatomic,retain) UIPopoverPresentationController * presentationController;               //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL showsTargetRect;                                                                                                                     //@synthesize showsTargetRect=_showsTargetRect - In the implementation block
@property (assign,nonatomic) BOOL showsOrientationMarker;                                                                                                              //@synthesize showsOrientationMarker=_showsOrientationMarker - In the implementation block
@property (assign,nonatomic) BOOL showsPresentationArea;                                                                                                               //@synthesize showsPresentationArea=_showsPresentationArea - In the implementation block
@property (assign,setter=_setRetainsSelfWhilePresented:,getter=_retainsSelfWhilePresented,nonatomic) BOOL retainsSelfWhilePresented;                                   //@synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented - In the implementation block
@property (assign,setter=_setAllowsPopoverPresentationToAdapt:,getter=_allowsPopoverPresentationToAdapt,nonatomic) BOOL allowsPopoverPresentationToAdapt;              //@synthesize allowsPopoverPresentationToAdapt=_allowsPopoverPresentationToAdapt - In the implementation block
@property (assign,nonatomic,__weak) id<UIPopoverControllerDelegate> delegate;                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,nonatomic) CGSize popoverContentSize; 
@property (getter=isPopoverVisible,nonatomic,readonly) BOOL popoverVisible; 
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets popoverLayoutMargins;                                                                                                        //@synthesize popoverLayoutMargins=_popoverLayoutMargins - In the implementation block
@property (nonatomic,retain) Class popoverBackgroundViewClass;                                                                                                         //@synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_showTargetRectPref;
+(BOOL)_forceAttemptsToAvoidKeyboard;
+(UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2 ;
+(Class)_popoverViewClass;
+(BOOL)_popoversDisabled;
+(BOOL)_useLegacyPopoverControllers;
+(void)_setForceModernPopoverUse:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id<UIPopoverControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPopoverControllerDelegate>)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_managingSplitViewController;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)_dimmingView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIViewController *)contentViewController;
-(void)_setPopoverBackgroundStyle:(long long)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)_presentationController;
-(long long)_popoverControllerStyle;
-(void)setDimmingView:(UIDimmingView *)arg1 ;
-(UIDimmingView *)dimmingView;
-(Class)_defaultChromeViewClass;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(void)_swipe:(id)arg1 ;
-(id)_layoutInfoForCurrentKeyboardState;
-(double)_presentationAnimationDuration;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setPreferredLayoutInfo:(_UIPopoverLayoutInfo *)arg1 ;
-(BOOL)isPopoverVisible;
-(BOOL)_isPresenting;
-(void)setPopoverFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)_setPresentationState:(int)arg1 ;
-(void)_setPopoverView:(id)arg1 ;
-(void)_stopWatchingForNotifications;
-(UIEdgeInsets)popoverLayoutMargins;
-(BOOL)_attemptsToAvoidKeyboard;
-(id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2 ;
-(void)_moveAwayFromTheKeyboard:(id)arg1 ;
-(void)_keyboardStateChanged:(id)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(BOOL)_isDismissing;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)showsTargetRect;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg1 ;
-(void)_startWatchingForScrollViewNotifications;
-(/*^block*/id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1 ;
-(void)_postludeForDismissal;
-(CGSize)popoverContentSize;
-(void)setPopoverContentSize:(CGSize)arg1 ;
-(int)_presentationState;
-(unsigned long long)_slideTransitionCount;
-(void)_incrementSlideTransitionCount:(BOOL)arg1 ;
-(void)_resetSlideTransitionCount;
-(void)_invalidateLayoutInfo;
-(CGPoint)_centerPointForScale:(double)arg1 frame:(CGRect)arg2 anchor:(CGPoint)arg3 ;
-(id)popoverView;
-(CGSize)_currentPopoverContentSize;
-(double)_dismissalAnimationDuration;
-(void)_performHierarchyCheckOnViewController:(id)arg1 ;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(long long)_popoverBackgroundStyle;
-(void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_setGesturesEnabled:(BOOL)arg1 ;
-(void)setPopoverLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)_ignoresKeyboardNotifications;
-(void)_setIgnoresKeyboardNotifications:(BOOL)arg1 ;
-(BOOL)isPresentingOrDismissing;
-(BOOL)_embedsInView;
-(BOOL)dismissesOnRotation;
-(void)setDismissesOnRotation:(BOOL)arg1 ;
-(Class)popoverBackgroundViewClass;
-(void)setPopoverBackgroundViewClass:(Class)arg1 ;
-(void)setShowsTargetRect:(BOOL)arg1 ;
-(BOOL)showsOrientationMarker;
-(void)setShowsOrientationMarker:(BOOL)arg1 ;
-(BOOL)showsPresentationArea;
-(void)setShowsPresentationArea:(BOOL)arg1 ;
-(BOOL)_retainsSelfWhilePresented;
-(void)_setRetainsSelfWhilePresented:(BOOL)arg1 ;
-(_UIPopoverLayoutInfo *)preferredLayoutInfo;
-(id)_presentingView;
-(void)_setPresentingView:(id)arg1 ;
-(unsigned long long)_presentationEdge;
-(void)_setPresentationEdge:(unsigned long long)arg1 ;
-(unsigned long long)popoverArrowDirection;
-(void)setPopoverArrowDirection:(unsigned long long)arg1 ;
-(void)_containedViewControllerModalStateChanged;
-(void)_startWatchingForNavigationControllerNotifications:(id)arg1 ;
-(void)_stopWatchingForNavigationControllerNotifications:(id)arg1 ;
-(id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(long long)arg2 ;
-(void)_setPresentationController:(id)arg1 ;
-(void)setContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shimPopoverPresentationController;
-(void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(void)_startWatchingForWindowRotations;
-(void)_presentPopoverBySlidingIn:(BOOL)arg1 fromEdge:(unsigned long long)arg2 ofView:(id)arg3 animated:(BOOL)arg4 stateOnly:(BOOL)arg5 notifyDelegate:(BOOL)arg6 ;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animate:(BOOL)arg5 ;
-(void)_presentPopoverFromEdge:(unsigned long long)arg1 ofView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)arg1 ;
-(void)_setupPresentationController;
-(void)_presentShimmedPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_commonPresentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned long long)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6 ;
-(id)_splitParentController;
-(void)_setSplitParentController:(id)arg1 ;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2 ;
-(void)_newViewControllerWasPushed:(id)arg1 ;
-(BOOL)_canRepresentAutomatically;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_hostingWindowWillRotate:(id)arg1 ;
-(void)_hostingWindowDidRotate:(id)arg1 ;
-(void)_stopWatchingForWindowRotations;
-(void)_modalAnimationFinishedEndIgnoringInteractiveEvents:(BOOL)arg1 ;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned long long)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4 ;
-(id)_gestureRecognizerForPresentationFromEdge:(unsigned long long)arg1 ;
-(void)_setManagingSplitViewController:(id)arg1 ;
-(void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(BOOL)_allowsPopoverPresentationToAdapt;
-(void)_setAllowsPopoverPresentationToAdapt:(BOOL)arg1 ;
@end

