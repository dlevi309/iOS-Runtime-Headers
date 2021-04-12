/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScene.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKitCore/_UISceneUIWindowHosting.h>
#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding.h>

@protocol _UIDisplayInfoProviding, UICoordinateSpace, _UISceneMetricsCalculating;
@class UIScreen, UITraitCollection, UIStatusBarManager, _UIContextBinder, NSPointerArray, UIAlertControllerStackManager, _UICanvasDefinition, FBSScene, _UISystemAppearanceManager, UIInputResponderController, UIScreenshotService, NSString, _UIBannerManager, UIWindow, FBSDisplayConfigurationRequest, UISceneSizeRestrictions, NSArray;

@interface UIWindowScene : UIScene <_UIFallbackEnvironment, _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding> {

	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	_UIContextBinder* _contextBinder;
	NSPointerArray* _keyWindowHistory;
	BOOL _isPerformingSystemSnapshot;
	id<_UIDisplayInfoProviding> _displayEdgeInfoProvider;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _shouldDisableTouchCancellationOnRotation;
	BOOL _windowWasInitializedWithDefaultStoryboard;
	BOOL _didMakeKeyAndVisible;
	id<_UISceneMetricsCalculating> _metricsCalculator;
	BOOL __isKeyWindowScene;
	BOOL _excludedFromWindowsMenu;
	long long _screenRequestedOverscanCompensation;
	long long _avkitRequestedOverscanCompensation;

}

@property (nonatomic,readonly) UIAlertControllerStackManager * _alertControllerStackManager; 
@property (nonatomic,readonly) long long state; 
@property (getter=isKeyCanvas,nonatomic,readonly) BOOL keyCanvas; 
@property (nonatomic,readonly) _UICanvasDefinition * _definition; 
@property (getter=_scene,nonatomic,readonly) FBSScene * scene; 
@property (nonatomic,readonly) UIStatusBarManager * statusBarManager; 
@property (nonatomic,readonly) _UISystemAppearanceManager * _systemAppearanceManager; 
@property (nonatomic,readonly) UIInputResponderController * inputResponderController; 
@property (nonatomic,readonly) UIScreenshotService * screenshotService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_bannerManager,nonatomic,readonly) _UIBannerManager * _bannerManager; 
@property (nonatomic,readonly) _UIContextBinder * _contextBinder; 
@property (nonatomic,readonly) UIWindow * _keyWindow; 
@property (nonatomic,readonly) BOOL _canReceiveDeviceOrientationEvents; 
@property (nonatomic,readonly) UIEdgeInsets _peripheryInsets; 
@property (nonatomic,readonly) id<_UIDisplayInfoProviding> _displayInfoProvider; 
@property (setter=_setDisplayConfigurationRequest:,getter=_displayConfigurationRequest,nonatomic,retain) FBSDisplayConfigurationRequest * _displayConfigurationRequest; 
@property (assign,setter=_setScreenRequestedDisplayNativePixelSize:,getter=_screenRequestedDisplayNativePixelSize,nonatomic) CGSize _screenRequestedDisplayNativePixelSize; 
@property (assign,setter=_setScreenRequestedOverscanCompensation:,getter=_screenRequestedOverscanCompensation,nonatomic) long long _screenRequestedOverscanCompensation;                 //@synthesize screenRequestedOverscanCompensation=_screenRequestedOverscanCompensation - In the implementation block
@property (assign,setter=_setAVKitRequestedOverscanCompensation:,getter=_avkitRequestedOverscanCompensation,nonatomic) long long _avkitRequestedOverscanCompensation;                    //@synthesize avkitRequestedOverscanCompensation=_avkitRequestedOverscanCompensation - In the implementation block
@property (assign,nonatomic) BOOL _isKeyWindowScene;                                                                                                                                     //@synthesize _isKeyWindowScene=__isKeyWindowScene - In the implementation block
@property (assign,getter=isExcludedFromWindowsMenu,nonatomic) BOOL excludedFromWindowsMenu;                                                                                              //@synthesize excludedFromWindowsMenu=_excludedFromWindowsMenu - In the implementation block
@property (assign,setter=_setBackgroundStyle:,nonatomic) long long _backgroundStyle; 
@property (assign,setter=_setKeepContextAssociationInBackground:,getter=_keepContextAssociationInBackground,nonatomic) BOOL keepContextAssociationInBackground; 
@property (nonatomic,readonly) BOOL _isPerformingSystemSnapshot;                                                                                                                         //@synthesize isPerformingSystemSnapshot=_isPerformingSystemSnapshot - In the implementation block
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) UISceneSizeRestrictions * sizeRestrictions; 
@property (nonatomic,readonly) NSArray * windows; 
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
+(void)initialize;
+(id)_placeholderWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(BOOL)_shouldRestoreKeyWindowSceneOnActivation;
+(void)_setShouldRestoreKeyWindowSceneOnActivation:(BOOL)arg1 ;
+(void)_registerComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3 ;
+(void)_updateVisibleSceneAndWindowOrderWithTest:(/*^block*/id)arg1 ;
+(BOOL)_hostsWindows;
+(id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(id)_findNewKeyWindowSceneOnScreen:(id)arg1 ;
+(id)_canvasForScene:(id)arg1 ;
+(id)_keyWindowScene;
+(id)_keyboardWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(id)_scene;
-(UITraitCollection *)_traitCollection;
-(void)_invalidate;
-(long long)_interfaceOrientation;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(BOOL*)arg4 withBlock:(/*^block*/id)arg5 ;
-(UITraitCollection *)traitCollection;
-(BOOL)_windowsIgnoreSceneClientOrientation;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(NSArray *)windows;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)_updateTraitCollection;
-(void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg1 ;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_currentlySupportedInterfaceOrientations;
-(UIScreen *)_screen;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2 ;
-(void)_attachWindow:(id)arg1 ;
-(void)_loadWindowWithStoryboardIfNeeded:(id)arg1 ;
-(id)_windowSceneDelegate;
-(id)_inheritingWindowsIncludingInvisible:(BOOL)arg1 ;
-(FBSDisplayConfigurationRequest *)_displayConfigurationRequest;
-(UISceneSizeRestrictions *)sizeRestrictions;
-(void)_setDisplayConfigurationRequest:(id)arg1 ;
-(long long)_resolvedOverscanCompensation;
-(BOOL)_keepContextAssociationInBackground;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg1 ;
-(void)_setShouldDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(BOOL)isExcludedFromWindowsMenu;
-(void)_computeMetricsForWindows:(id)arg1 animated:(BOOL)arg2 ;
-(id)_disableTouchCancellationOnRotation;
-(long long)_avkitRequestedOverscanCompensation;
-(CGSize)_screenRequestedDisplayNativePixelSize;
-(void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3 ;
-(void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1 ;
-(void)set_isKeyWindowScene:(BOOL)arg1 ;
-(void)_setAVKitRequestedOverscanCompensation:(long long)arg1 ;
-(void)setExcludedFromWindowsMenu:(BOOL)arg1 ;
-(void)_setScreenRequestedDisplayNativePixelSize:(CGSize)arg1 ;
-(long long)_screenRequestedOverscanCompensation;
-(void)_setScreenRequestedOverscanCompensation:(long long)arg1 ;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(void)_recycleAttachmentForWindow:(id)arg1 ;
-(_UIBannerManager *)_bannerManager;
-(NSString *)description;
-(id)_allWindows;
-(id<_UIDisplayInfoProviding>)_displayInfoProvider;
-(long long)interfaceOrientation;
-(UIWindow *)_keyWindow;
-(BOOL)_shouldLoadStoryboard;
-(id)_topVisibleWindowPassingTest:(/*^block*/id)arg1 ;
-(UIEdgeInsets)_peripheryInsets;
-(void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2 ;
-(id)_fallbackTraitCollection;
-(BOOL)isKeyCanvas;
-(_UICanvasDefinition *)_definition;
-(id)canvasToolbar;
-(BOOL)_canReceiveDeviceOrientationEvents;
-(void)_unregisterSettingsDiffActionsForKey:(id)arg1 ;
-(BOOL)_windowIsFront:(id)arg1 ;
-(id)_visibleWindows;
-(void)_computeMetrics:(BOOL)arg1 ;
-(long long)_backgroundStyle;
-(long long)state;
-(void)_setBackgroundStyle:(long long)arg1 ;
-(UIStatusBarManager *)statusBarManager;
-(UIScreen *)screen;
-(void)_readySceneForConnection;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(void)_prepareForResume;
-(UIScreenshotService *)screenshotService;
-(id)_screenshotServiceIfPresent;
-(void)_applySnapshotSettings:(id)arg1 forActions:(/*^block*/id)arg2 ;
-(BOOL)_isPerformingSystemSnapshot;
-(UIAlertControllerStackManager *)_alertControllerStackManager;
-(UIInputResponderController *)inputResponderController;
-(void)_makeKeyAndVisibleIfNeeded;
-(UIStatusBarManager *)_statusBarManager;
-(double)_systemMinimumMargin;
-(BOOL)_isKeyWindowScene;
-(id)_componentForKey:(id)arg1 ;
-(void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(_UIContextBinder *)_contextBinder;
-(void)_prepareForSuspend;
-(void)_detachWindow:(id)arg1 ;
-(_UISystemAppearanceManager *)_systemAppearanceManager;
-(BOOL)_needsMakeKeyAndVisible;
-(void)_registerSettingsDiffActions:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_permitContextCreationForBindingDescription:(SCD_Struct_UI37)arg1 ;
-(void)_registerSceneActionsHandler:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterSceneActionsHandler:(id)arg1 ;
-(id<UICoordinateSpace>)_coordinateSpace;
-(void)_registerComponent:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterComponentForKey:(id)arg1 ;
-(CGRect)_referenceBounds;
@end

