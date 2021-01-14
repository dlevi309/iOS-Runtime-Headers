/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIHostedTextServiceSessionDelegate.h>
#import <UIKitCore/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKitCore/_UISheetPresentationControllerDelegate.h>
#import <UIKitCore/_UIFocusMovementActionForwarding.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSMutableArray, NSString, NSArray, UIViewController, _UIHostedWindow, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext, NSUndoManager;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UISheetPresentationControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	NSMutableArray* _deferredToViewDidAppear;
	int _hostPID;
	int _mediaPID;
	NSString* _hostBundleID;
	SCD_Struct_UI60 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _pluginDisplayConfigurations;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	BOOL _disableAutomaticKeyboardBehavior;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned long long _supportedOrientations;
	long long _availableTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	double _localViewControllerRequestedLeftMargin;
	double _localViewControllerRequestedRightMargin;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	long long _editAlertToken;
	NSUndoManager* _editAlertUndoManager;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
	/*^block*/id __traitsWillChangeHandler;
	/*^block*/id __traitsDidChangeHandler;

}

@property (setter=_setTraitsWillChangeHandler:,nonatomic,copy) id _traitsWillChangeHandler;                 //@synthesize _traitsWillChangeHandler=__traitsWillChangeHandler - In the implementation block
@property (setter=_setTraitsDidChangeHandler:,nonatomic,copy) id _traitsDidChangeHandler;                   //@synthesize _traitsDidChangeHandler=__traitsDidChangeHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * localViewController; 
@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI60)arg4 ;
+(id)XPCInterface;
-(void)__hostDidEnterBackground;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__hostWillEnterForeground;
-(BOOL)becomeFirstResponder;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(oneway void)release;
-(void)_popoverDidDismiss:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(int)__automatic_invalidation_logic;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(id)_queue;
-(double)_canvasSystemMinimumMargin;
-(BOOL)_tryRetain;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)__hostDidUpdateDisplay:(id)arg1 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)__createViewControllerWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__hostSceneWillEnterForeground;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)_windowDidUnregisterScrollToTopView;
-(void)__hostDidBecomeActive;
-(UIViewController *)localViewController;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(id)autorelease;
-(void)__undoActionWithToken:(long long)arg1 ;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2 ;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)__textServiceDidDismiss;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_viewControllersForRotationCallbacks;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 fence:(id)arg6 whenDone:(/*^block*/id)arg7 ;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 withFence:(id)arg3 ;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(id)_showServiceForType:(long long)arg1 withContext:(id)arg2 ;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)__hostWillResignActive;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(CGSize)preferredContentSize;
-(void)__showEditAlertView;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)__setSheetConfiguration:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)viewDidLoad;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(BOOL)isModalInPresentation;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(long long)_availableTextServices;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3 ;
-(unsigned long long)retainCount;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)__dimmingViewWasTapped;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(void)_sheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)_forwardFocusMovementAction:(id)arg1 ;
-(BOOL)_providesCustomBasePresentationInsets;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 inRemoteViewHierarchy:(BOOL)arg4 ;
-(void)_windowDidRegisterScrollToTopView;
-(id)invalidate;
-(id)_inputViewsKey;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(id)_traitsWillChangeHandler;
-(void)__hostDidPromoteFirstResponder;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)__hostSceneDidEnterBackground;
-(id)childViewControllerForStatusBarHidden;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)loadView;
-(void)setNeedsUpdateOfPrefersPointerLocked;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(UIEdgeInsets)_customBasePresentationInsetsForView:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(void)__cancelAlertActionWithToken:(long long)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__redoActionWithToken:(long long)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(id)_appearanceSource;
-(void)__hostDidDetachDisplay:(id)arg1 ;
-(BOOL)_isHostedRootViewController;
-(id)_traitsDidChangeHandler;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)__setMediaOverridePID:(int)arg1 ;
-(void)__setBoundingPath:(id)arg1 ;
-(id)_window;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)dealloc;
-(id)_presentationControllerClassName;
-(id)childViewControllerForPointerLock;
-(id)_dataFromPressesEvent:(id)arg1 ;
@end

