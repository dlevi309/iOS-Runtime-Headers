/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _hostBundleID;
	SCD_Struct_UI52 _hostAuditToken;
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
	BOOL _canShowTextServices;
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
@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI52)arg4 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)invalidate;
-(id)_queue;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)loadView;
-(id)_window;
-(id)preferredFocusEnvironments;
-(BOOL)becomeFirstResponder;
-(CGSize)preferredContentSize;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)_presentationControllerClassName;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(id)_showServiceForType:(long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_providesCustomBasePresentationInsets;
-(UIEdgeInsets)_customBasePresentationInsetsForView:(id)arg1 ;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(BOOL)isModalInPresentation;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)_startInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2 ;
-(void)_updateInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2 ;
-(void)_completeInteractiveSheetTransitionInHost:(BOOL)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_isHostedRootViewController;
-(CGSize)contentSizeForViewInPopover;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(double)_canvasSystemMinimumMargin;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(id)_viewControllersForRotationCallbacks;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)_forwardFocusMovementAction:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(int)__automatic_invalidation_logic;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 withFence:(id)arg3 ;
-(void)__setBoundingPath:(id)arg1 ;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 traitCollection:(id)arg5 initialInterfaceOrientation:(long long)arg6 hostAccessibilityServerPort:(id)arg7 canShowTextServices:(BOOL)arg8 replyHandler:(/*^block*/id)arg9 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostSceneWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostSceneDidEnterBackground;
-(void)__hostDidBecomeActive;
-(void)__hostWillResignActive;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3 ;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(void)__hostDidUpdateDisplay:(id)arg1 ;
-(void)__hostDidDetachDisplay:(id)arg1 ;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 ;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 fence:(id)arg6 whenDone:(/*^block*/id)arg7 ;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2 ;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 inRemoteViewHierarchy:(BOOL)arg4 ;
-(void)__dimmingViewWasTapped;
-(void)__setSheetConfiguration:(id)arg1 ;
-(id)_appearanceSource;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 ;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)__textServiceDidDismiss;
-(void)__cancelAlertActionWithToken:(long long)arg1 ;
-(void)__undoActionWithToken:(long long)arg1 ;
-(void)__redoActionWithToken:(long long)arg1 ;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 hostAccessibilityServerPort:(id)arg3 canShowTextServices:(BOOL)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)_popoverDidDismiss:(id)arg1 ;
-(id)_inputViewsKey;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)_windowDidUnregisterScrollToTopView;
-(id)_traitsWillChangeHandler;
-(id)_traitsDidChangeHandler;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(void)__showEditAlertView;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(id)_dataFromPressesEvent:(id)arg1 ;
-(BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

