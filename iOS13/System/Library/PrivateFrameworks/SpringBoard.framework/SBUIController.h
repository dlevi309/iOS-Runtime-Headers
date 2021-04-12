/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBWallpaperOrientationProvider.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>
#import <libobjc.A.dylib/SBHomeScreenBackdropViewBaseDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <libobjc.A.dylib/CSPowerStatusProviding.h>

@class SBHomeScreenWindow, SBIconContentView, UIView, SBMainScreenActiveInterfaceOrientationWindow, UIStatusBar, SBHomeScreenBackdropViewBase, SBWindow, SBWallpaperEffectView, SBAppStatusBarSettingsAssertion, UIForceStageInteractionProgress, SBHUDController, SBVolumeControl, NSMutableDictionary, SBDismissOnlyAlertItem, SBAppSwitcherSettings, NSMutableSet, SBIconController, NSString;

@interface SBUIController : NSObject <SBWallpaperObserver, PTSettingsKeyObserver, UIInteractionProgressObserver, SBWallpaperOrientationProvider, SBReachabilityObserver, SBHomeScreenBackdropViewBaseDelegate, UIWindowDelegate, CSPowerStatusProviding> {

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
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isFullyCharged : 1;
	unsigned _isBatteryCritical : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToExternalChargingAccessory : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
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
	BOOL _chargingChimeEnabled;
	SBIconController* _iconController;

}

@property (nonatomic,readonly) SBIconController * iconController;                                                              //@synthesize iconController=_iconController - In the implementation block
@property (assign,nonatomic) BOOL chargingChimeEnabled;                                                                        //@synthesize chargingChimeEnabled=_chargingChimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOnAC,nonatomic,readonly) BOOL onAC; 
@property (getter=isConnectedToExternalChargingSource,nonatomic,readonly) BOOL connectedToExternalChargingSource; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(CGRect)statusBarFrameForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 statusBarStyleRequest:(id)arg4 withinBounds:(CGRect)arg5 inReferenceSpace:(BOOL)arg6 ;
+(CGAffineTransform)_transformForStatusBarWithOrientation:(long long)arg1 scaleFactor:(double)arg2 ;
+(CGAffineTransform)_transformAndFrame:(CGRect*)arg1 forLaunchImageHostViewWithOrientation:(long long)arg2 statusBarHeight:(double)arg3 inJailRect:(CGRect)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 remainderFrame:(CGRect*)arg2 orientation:(long long)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 orientation:(long long)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4 ;
+(id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 sceneHandle:(id)arg2 ;
+(id)zoomViewForDeviceApplicationSceneHandle:(id)arg1 displayConfiguration:(id)arg2 interfaceOrientation:(long long)arg3 snapshot:(id)arg4 snapshotSize:(CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)contentView;
-(id)window;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)getRotationContentSettings:(SCD_Struct_SB4*)arg1 forWindow:(id)arg2 ;
-(id)_legibilitySettings;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)updateBatteryState:(id)arg1 ;
-(void)_hideKeyboard;
-(void)cancelVolumeEvent;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)_deviceUILocked;
-(id)scalingView;
-(void)_updateLegibility;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(BOOL)isConnectedToExternalChargingSource;
-(void)_activateApplicationFromAccessibility:(id)arg1 ;
-(SBIconController *)iconController;
-(BOOL)isBatteryCharging;
-(float)batteryCapacity;
-(void)handleWillBeginReachabilityAnimation;
-(void)handleDidEndReachabilityAnimation;
-(void)playChargingChimeIfAppropriate;
-(void)suppressChimeForConnectedPowerSources;
-(BOOL)isOnAC;
-(void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_setupHomeScreenContentBackdropView;
-(void)_setupHomeScreenDimmingWindow;
-(void)noteStatusBarHeightChanged:(id)arg1 ;
-(void)statusBarOverridesDidChange:(id)arg1 ;
-(void)_reduceMotionStatusDidChange:(id)arg1 ;
-(void)externalChargingAccessoriesChanged;
-(void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1 ;
-(void)removeFakeSpringBoardStatusBar;
-(BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1 ;
-(void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1 ;
-(id)_fakeSpringBoardStatusBar;
-(id)alertItemForPreventingLaunchOfApp:(id)arg1 ;
-(long long)transitionSourceForIconLocation:(id)arg1 ;
-(void)_willRevealOrHideContentView;
-(void)restoreContentWithOptions:(unsigned long long)arg1 ;
-(BOOL)isIconListViewTornDown;
-(void)_closeOpenFolderIfNecessary;
-(void)updateStatusBarLegibility;
-(void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)restoreContent;
-(void)beginRequiringContentForReason:(id)arg1 options:(unsigned long long)arg2 ;
-(void)tearDownIconListAndBar;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)_removeReachabilityEffectViewIfNecessary;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)cancelInProcessAnimations;
-(BOOL)hasVisibleAlertItemOrSheet:(out BOOL*)arg1 ;
-(BOOL)dissmissAlertItemsAndSheetsIfPossible;
-(void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1 ;
-(void)ACPowerChanged;
-(int)batteryCapacityAsPercentage;
-(void)_enumeratePowerSourcesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)chargingChimeEnabled;
-(BOOL)_powerSourceWantsToPlayChime;
-(void)possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1 ;
-(void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)homeScreenAutorotatesEvenWhenIconIsDragging;
-(void)setHomeScreenAutorotatesEvenWhenIconIsDragging:(BOOL)arg1 ;
-(void)disableAnimationForNextIconRotation;
-(id)_currentHomeScreenLegibilitySettings;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(long long)interfaceOrientationForWallpaperController:(id)arg1 ;
-(void)homeScreenBackdropView:(id)arg1 opaquenessDidChange:(BOOL)arg2 ;
-(void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1 ;
-(id)fakeStatusBarStyleRequestForStyle:(long long)arg1 ;
-(void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2 ;
-(void)setHomeScreenAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHomeScreenScale:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHomeScreenDimmingAlpha:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHomeScreenBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5 ;
-(void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 ;
-(void)beginRequiringContentForReason:(id)arg1 ;
-(void)endRequiringContentForReason:(id)arg1 ;
-(BOOL)disableAppSwitchForcePressDueToHomeButtonForce;
-(BOOL)handleHomeButtonSinglePressUp;
-(BOOL)handleHomeButtonDoublePressDown;
-(void)setChargingChimeEnabled:(BOOL)arg1 ;
-(BOOL)isFullyCharged;
-(BOOL)isConnectedToChargeIncapablePowerSource;
-(void)setCursorInteractionsEnabled:(BOOL)arg1 ;
-(BOOL)isConnectedToUnsupportedChargingAccessory;
-(BOOL)supportsDetailedBatteryCapacity;
-(BOOL)isHeadsetDocked;
-(BOOL)isHeadsetBatteryCharging;
-(unsigned char)headsetBatteryCapacity;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
@end

