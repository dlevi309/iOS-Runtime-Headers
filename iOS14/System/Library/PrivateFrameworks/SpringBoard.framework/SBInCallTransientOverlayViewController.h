/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;
@class UIView, SBIdleTimerCoordinatorHelper, SBSUIInCallSceneClientSettingsDiffInspector, _SBInCallProxySceneBackgroundView, SBDeviceApplicationSceneViewController, SBInCallSettings, SBDeviceApplicationSceneHandle, NSString;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable> {

	UIView*<SBApplicationSceneBackgroundView> _existingSceneBackgroundView;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	SBSUIInCallSceneClientSettingsDiffInspector* _inCallSceneClientSettingsDiffInspector;
	_SBInCallProxySceneBackgroundView* _proxySceneBackgroundView;
	SBDeviceApplicationSceneViewController* _sceneViewController;
	SBInCallSettings* _settings;
	BOOL _shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	id<SBInCallTransientOverlayViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle;                                  //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic,__weak) id<SBInCallTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;                          //@synthesize shouldIgnoreHomeIndicatorAutoHiddenClientSettings=_shouldIgnoreHomeIndicatorAutoHiddenClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(BOOL)handleVolumeDownButtonPress;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)canResignFirstResponder;
-(void)setIdleTimerCoordinator:(id)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleHomeButtonPress;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id<SBInCallTransientOverlayViewControllerDelegate>)delegate;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)serviceProcessIdentifier;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SBInCallTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithSceneHandle:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)invalidate;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isContentOpaque;
-(id)succinctDescriptionBuilder;
-(void)viewDidLayoutSubviews;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)dealloc;
-(long long)preferredUnlockedGestureDismissalStyle;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)_inCallSceneClientSettingsDiffInspector;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(int)preferredStatusBarStyleOverridesToCancel;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)setShouldIgnoreHomeIndicatorAutoHiddenClientSettings:(BOOL)arg1 ;
-(BOOL)shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
-(/*^block*/id)sceneDeactivationPredicate;
-(BOOL)shouldUseSceneBasedKeyboardFocus;
@end

