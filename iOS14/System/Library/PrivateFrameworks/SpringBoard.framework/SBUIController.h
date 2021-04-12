/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBWallpaperOrientationProvider.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>
#import <libobjc.A.dylib/SBHomeScreenBackdropViewBaseDelegate.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>
#import <libobjc.A.dylib/ACCConnectionInfoDelegateProtocol.h>
#import <libobjc.A.dylib/SBFMotionAlarmDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <libobjc.A.dylib/CSPowerStatusProviding.h>
#import <libobjc.A.dylib/CSAccessoryStatusProviding.h>

@class CSAccessory, SBHomeScreenWindow, SBIconContentView, UIView, SBMainScreenActiveInterfaceOrientationWindow, UIStatusBar, SBHomeScreenBackdropViewBase, SBWindow, SBWallpaperEffectView, SBAppStatusBarSettingsAssertion, UIForceStageInteractionProgress, BCBatteryDeviceController, SBHIDUILockAssertion, SBHomeGestureParticipant, SBHUDController, SBVolumeControl, NSMutableDictionary, SBDismissOnlyAlertItem, SBAppSwitcherSettings, NSMutableSet, ATXAppDirectoryClient, ACCConnectionInfo, BSTimer, SBFMotionAlarmController, BSPersistentTimer, SBIconController, NSString;

@interface SBUIController : NSObject <SBWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, BCBatteryDeviceObserving, ACCConnectionInfoDelegateProtocol, SBFMotionAlarmDelegate, UIWindowDelegate, CSPowerStatusProviding, CSAccessoryStatusProviding> {

	SBHomeScreenWindow* _window;
	SBIconContentView* _iconsView;
	UIView* _contentView;
	SBMainScreenActiveInterfaceOrientationWindow* _fakeSpringBoardStatusBarWindow;
	UIStatusBar* _fakeSpringBoardStatusBar;
	SBHomeScreenBackdropViewBase* _homeScreenBackdropView;
	SBWindow* _homeScreenDimmingWindow;
	SBWallpaperEffectView* _reachabilityWallpaperEffectView;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	UIForceStageInteractionProgress* _homeButtonForceProgress;
	BCBatteryDeviceController* _batteryDeviceController;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isFullyCharged : 1;
	unsigned _isBatteryCritical : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToExternalChargingAccessory : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	unsigned _wasConnectedToWirelessChargingAccessory : 1;
	unsigned _isConnectedToWirelessInternalChargingAccessory : 1;
	unsigned _isConnectedToWirelessInternalAccessory : 1;
	unsigned _isConnectedToWindowedAccessory : 1;
	CGRect _visibleScreenCoordinatesForWindowedAccessory;
	SBHIDUILockAssertion* _suspendProximityForAttachedWindowedAccessoryAssertion;
	SBHomeGestureParticipant* _homeGestureParticipant;
	unsigned _isConnectedToQiPower : 1;
	SBHUDController* _HUDController;
	SBVolumeControl* _volumeControl;
	float _batteryCapacity;
	BOOL _supportsDetailedBatteryCapacity;
	BOOL _disableAppSwitchForcePressDueToHomeButtonForce;
	int _powerStateUpdateToken;
	NSMutableDictionary* _powerSourceHasChimed;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem* _unsupportedChargerAlert;
	SBAppSwitcherSettings* _switcherSettings;
	NSMutableSet* _contentRequiringReasons;
	ATXAppDirectoryClient* _appDirectoryClient;
	BOOL _disallowsPointerInteraction;
	int _firmwareUpdateStateToken;
	ACCConnectionInfo* _accessoryConnectionInfo;
	BSTimer* _accessoryAttachmentAnimationBlockingTimer;
	SBFMotionAlarmController* _motionAlarmController;
	BOOL _disableChimeForWirelessCharging;
	BOOL _disableScreenWakeForWirelessCharging;
	BSPersistentTimer* _debounceWirelessChargingTimer;
	BOOL _isAccessoryAnimationAllowed;
	CSAccessory* _lastAttachedAccessory;
	CSAccessory* _lastDetachedAccessory;
	NSMutableDictionary* _accessoriesAttachedByUUID;
	BOOL _chargingChimeEnabled;
	SBIconController* _iconController;

}

@property (nonatomic,readonly) SBIconController * iconController;                                                                                    //@synthesize iconController=_iconController - In the implementation block
@property (assign,nonatomic) BOOL chargingChimeEnabled;                                                                                              //@synthesize chargingChimeEnabled=_chargingChimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOnAC,nonatomic,readonly) BOOL onAC; 
@property (getter=isConnectedToExternalChargingSource,nonatomic,readonly) BOOL connectedToExternalChargingSource; 
@property (getter=isConnectedToWirelessInternalChargingAccessory,nonatomic,readonly) BOOL connectedToWirelessInternalChargingAccessory; 
@property (getter=isConnectedToQiPower,nonatomic,readonly) BOOL connectedToQiPower; 
@property (nonatomic,readonly) CSAccessory * lastAttachedAccessory; 
@property (nonatomic,readonly) CSAccessory * lastDetachedAccessory; 
@property (nonatomic,readonly) BOOL isAccessoryAnimationAllowed; 
+(CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2 ;
+(id)sharedInstance;
+(CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(CGRect)arg5 inReferenceSpace:(BOOL)arg6 ;
+(id)sharedInstanceIfExists;
+(id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7 ;
+(CGAffineTransform)_transformAndFrame:(CGRect*)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(CGRect)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 remainderFrame:(CGRect*)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5 ;
+(id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2 ;
-(SBIconController *)iconController;
-(BOOL)isBackdropVisible;
-(void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1 ;
-(id)succinctDescription;
-(void)cancelInProcessAnimations;
-(void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1 ;
-(void)handleDidEndReachabilityAnimation;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_legibilitySettings;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(long long)interfaceOrientationForWallpaperController:(id)arg1 ;
-(void)_deviceUILocked;
-(BOOL)handleHomeButtonDoublePressDown;
-(id)init;
-(void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1 ;
-(void)endRequiringContentForReason:(id)arg1 ;
-(void)handleWillBeginReachabilityAnimation;
-(void)removeDetachedAccessory:(id)arg1 ;
-(void)windowedAccessoryDismissed;
-(BOOL)_isAccessoryAttached:(long long)arg1 ;
-(void)_debounceWirelessChargingTimerFired;
-(void)_hideKeyboard;
-(BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1 ;
-(void)tearDownIconListAndBar;
-(void)_resetWirelessChargingState;
-(BOOL)isIconListViewTornDown;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLastAttachedAccessory:(CSAccessory *)arg1 ;
-(void)ACPowerChanged;
-(void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_powerSourceWantsToPlayChime;
-(long long)transitionSourceForIconLocation:(id)arg1 ;
-(BOOL)isHeadsetBatteryCharging;
-(void)removeFakeSpringBoardStatusBar;
-(void)statusBarOverridesDidChange:(id)arg1 ;
-(void)beginRequiringContentForReason:(id)arg1 ;
-(id)_fakeSpringBoardStatusBar;
-(BOOL)isConnectedToWindowedAccessory;
-(void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1 ;
-(void)disableAnimationForNextIconRotation;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)_playAccessoryAttachChimeIfAppropriateWithDelay:(double)arg1 ;
-(void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1 ;
-(CSAccessory *)lastDetachedAccessory;
-(void)setChargingChimeEnabled:(BOOL)arg1 ;
-(void)_willRevealOrHideContentView;
-(BOOL)isConnectedToUnsupportedChargingAccessory;
-(void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(BOOL)arg2 ;
-(BOOL)isConnectedToWirelessInternalAccessory;
-(BOOL)isHeadsetDocked;
-(void)updateStatusBarLegibility;
-(void)windowedAccessoryPresented;
-(int)batteryCapacityAsPercentage;
-(void)_setupHomeScreenContentBackdropView;
-(void)_setupHomeScreenDimmingWindow;
-(NSString *)description;
-(void)_animationBlockingTimerFired;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 ;
-(void)_setConnectedToWindowedAccessory:(BOOL)arg1 ;
-(BOOL)isFullyCharged;
-(void)_enumeratePowerSourcesWithBlock:(/*^block*/id)arg1 ;
-(void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1 ;
-(void)setPointerInteractionsEnabled:(BOOL)arg1 ;
-(void)_setAccessoryAttachmentAnimationBlockingTimerWithDuration:(double)arg1 ;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(BOOL)_shouldShowAnimationForAccessory:(id)arg1 ;
-(BOOL)isConnectedToQiPower;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5 ;
-(void)_disableWirelessChargingChimeAndScreenWakeForDuration:(double)arg1 ;
-(BOOL)handleHomeButtonSinglePressUpWithSourceType:(unsigned long long)arg1 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(id)window;
-(BOOL)isConnectedToExternalChargingSource;
-(BOOL)disableAppSwitchForcePressDueToHomeButtonForce;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(void)_dismissAccessory:(id)arg1 playChime:(BOOL)arg2 ;
-(BOOL)isBatteryCharging;
-(CGRect)visibleScreenCoordinatesForWindowedAccessory;
-(void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)restoreContent;
-(unsigned char)headsetBatteryCapacity;
-(void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)isConnectedToWirelessInternalChargingAccessory;
-(void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2 ;
-(void)didDetectDeviceMotion;
-(BOOL)dissmissAlertItemsAndSheetsIfPossible;
-(BOOL)isOnAC;
-(id)fakeStatusBarStyleRequestForStyle:(long long)arg1 ;
-(void)cancelVolumeEvent;
-(void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2 ;
-(void)restoreContentWithOptions:(unsigned long long)arg1 ;
-(void)_reduceMotionStatusDidChange:(id)arg1 ;
-(void)storeAttachedAccessory:(id)arg1 ;
-(void)setIsAccessoryAnimationAllowed:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_cancelDebounceWirelessChargingTimer;
-(BOOL)_shouldInitiateAnimationForAccessory:(id)arg1 ;
-(BOOL)handleHomeButtonSinglePressUp;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_setDebounceWirelessChargingTimerWithDuration:(double)arg1 ;
-(void)_activateApplicationFromAccessibility:(id)arg1 ;
-(void)noteStatusBarHeightChanged:(id)arg1 ;
-(void)updateBatteryState:(id)arg1 ;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(BOOL)hasVisibleAlertItemOrSheet:(out BOOL*)arg1 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)contentView;
-(id)succinctDescriptionBuilder;
-(BOOL)homeScreenAutorotatesEvenWhenIconIsDragging;
-(void)_updateLegibility;
-(void)_activateWorkspaceEntity:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 validator:(/*^block*/id)arg4 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(BOOL)chargingChimeEnabled;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(CSAccessory *)lastAttachedAccessory;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(id)_currentHomeScreenLegibilitySettings;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(BOOL)supportsDetailedBatteryCapacity;
-(void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)suppressChimeForConnectedPowerSources;
-(void)setLastDetachedAccessory:(CSAccessory *)arg1 ;
-(void)getRotationContentSettings:(SCD_Struct_SB4*)arg1 forWindow:(id)arg2 ;
-(void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5 ;
-(void)_closeOpenFolderIfNecessary;
-(void)setHomeScreenAutorotatesEvenWhenIconIsDragging:(BOOL)arg1 ;
-(void)_removeReachabilityEffectViewIfNecessary;
-(id)scalingView;
-(void)playChargingChimeIfAppropriate;
-(void)dealloc;
-(BOOL)isAccessoryAnimationAllowed;
-(BOOL)_isConnectedToWirelessCharging;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(float)batteryCapacity;
@end

