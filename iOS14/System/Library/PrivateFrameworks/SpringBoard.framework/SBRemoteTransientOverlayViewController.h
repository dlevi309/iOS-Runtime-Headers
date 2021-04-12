/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBRemoteTransientOverlayHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol SBRemoteTransientOverlayViewControllerDelegate;
@class SBRemoteTransientOverlayHostViewController, UIView, SBIdleTimerCoordinatorHelper, BSAnimationSettings, SBTransientOverlayWallpaperEffectView, NSString;

@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController <SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating> {

	SBRemoteTransientOverlayHostViewController* _contentViewController;
	UIView* _contentViewWrapperView;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	BOOL _isPresented;
	long long _lastWallpaperStyle;
	BSAnimationSettings* _pendingAnimationSettings;
	long long _wallpaperEffectAnimations;
	SBTransientOverlayWallpaperEffectView* _wallpaperEffectView;
	long long _preferredDismissalAnimationStyle;
	id<SBRemoteTransientOverlayViewControllerDelegate> _delegate;
	long long _wallpaperVariant;

}

@property (getter=isActivatingForSiri,nonatomic,readonly) BOOL activatingForSiri; 
@property (nonatomic,readonly) BOOL isScreenshotMarkup; 
@property (nonatomic,readonly) BOOL shouldInvalidateWhenDeactivated; 
@property (getter=isSwitcherEligible,nonatomic,readonly) BOOL switcherEligible; 
@property (nonatomic,readonly) long long preferredDismissalAnimationStyle;                                    //@synthesize preferredDismissalAnimationStyle=_preferredDismissalAnimationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long wallpaperVariant;                                                      //@synthesize wallpaperVariant=_wallpaperVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestViewControllerForAlertDefinition:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)handleHomeButtonLongPress;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)resignFirstResponder;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)setIdleTimerCoordinator:(id)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleHomeButtonPress;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<SBRemoteTransientOverlayViewControllerDelegate>)delegate;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)serviceProcessIdentifier;
-(int)_preferredStatusBarVisibility;
-(BOOL)prefersStatusBarActivityItemVisible;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SBRemoteTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)shouldDisableControlCenter;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidate;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(BOOL)isContentOpaque;
-(id)succinctDescriptionBuilder;
-(BOOL)handleDoubleHeightStatusBarTap;
-(BOOL)isActivatingForSiri;
-(BOOL)shouldInvalidateWhenDeactivated;
-(BOOL)isSwitcherEligible;
-(BOOL)shouldDisableSiri;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)beginIgnoringContentOverlayInsetUpdates;
-(void)endIgnoringAppearanceUpdates;
-(void)endIgnoringContentOverlayInsetUpdates;
-(void)setWallpaperVariant:(long long)arg1 ;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldPendAlertItems;
-(BOOL)isScreenshotMarkup;
-(BOOL)hasServiceProcessIdentifier:(int)arg1 ;
-(void)preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)handleGestureDismissal;
-(void)restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(id)_initWithContentViewController:(id)arg1 ;
-(void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg1 ;
-(long long)preferredLockedGestureDismissalStyle;
-(id)preferredSceneDeactivationReasonValue;
-(BOOL)_needsWallpaperEffectView;
-(int)preferredStatusBarStyleOverridesToCancel;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1 ;
-(void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2 ;
-(long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1 ;
-(id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2 ;
-(id)serviceEventDeferringToken;
-(int)pictureInPictureProcessIdentifier;
-(id)preferredDisplayLayoutElementIdentifier;
-(id)representedDisplayItem;
-(void)_setMediaOverridePID:(int)arg1 ;
-(long long)preferredDismissalAnimationStyle;
-(long long)wallpaperVariant;
@end

