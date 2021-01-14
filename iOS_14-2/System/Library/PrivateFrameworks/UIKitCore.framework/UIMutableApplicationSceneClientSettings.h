/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSMutableSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSDictionary, NSString, FBSDisplayMode, FBSDisplayConfigurationRequest, NSArray, NSData;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {

	BOOL _statusBarForegroundTransparent;
	long long _sceneActivationBias;

}

@property (assign,nonatomic) long long statusBarStyle; 
@property (assign,nonatomic) long long statusBarModernStyle; 
@property (nonatomic,copy) NSDictionary * statusBarPartStyles; 
@property (assign,nonatomic) BOOL statusBarHidden; 
@property (assign,nonatomic) double statusBarAlpha; 
@property (assign,getter=isStatusBarForegroundTransparent,nonatomic) BOOL statusBarForegroundTransparent;              //@synthesize statusBarForegroundTransparent=_statusBarForegroundTransparent - In the implementation block
@property (assign,nonatomic) unsigned statusBarContextID; 
@property (assign,nonatomic) long long defaultStatusBarStyle; 
@property (assign,nonatomic) BOOL defaultStatusBarHidden; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) NSString * defaultPNGName; 
@property (assign,nonatomic) double defaultPNGExpirationTime; 
@property (assign,nonatomic) long long compatibilityMode; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL interfaceOrientationChangesDisabled; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL idleTimerDisabled; 
@property (assign,nonatomic) unsigned long long proximityDetectionModes; 
@property (assign,nonatomic) double controlCenterAmbiguousActivationMargin; 
@property (assign,nonatomic) long long controlCenterRevealMode; 
@property (assign,nonatomic) long long notificationCenterRevealMode; 
@property (assign,nonatomic) UIEdgeInsets primaryWindowOverlayInsets; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) BOOL idleModeVisualEffectsEnabled; 
@property (assign,nonatomic) long long whitePointAdaptivityStyle; 
@property (nonatomic,copy) FBSDisplayMode * requestedDisplayMode; 
@property (nonatomic,copy) FBSDisplayConfigurationRequest * displayConfigurationRequest; 
@property (assign,getter=isReachabilitySupported,nonatomic) BOOL reachabilitySupported; 
@property (assign,nonatomic) unsigned long long screenEdgesDeferringSystemGestures; 
@property (assign,nonatomic) BOOL homeIndicatorAutoHidden; 
@property (assign,nonatomic) BOOL wantsExclusiveForeground; 
@property (assign,nonatomic) unsigned long long visibleMiniAlertCount; 
@property (nonatomic,retain) NSArray * audioCategoriesDisablingVolumeHUD; 
@property (assign,nonatomic) double brightnessLevel; 
@property (assign,nonatomic) BOOL disablesMirroring; 
@property (nonatomic,copy) NSString * canvasTitle; 
@property (nonatomic,retain) NSData * activationConditionsData; 
@property (assign,nonatomic) long long sceneActivationBias;                                                            //@synthesize sceneActivationBias=_sceneActivationBias - In the implementation block
@property (assign,nonatomic) CGRect screenFocusedFrame; 
@property (assign,nonatomic) long long preferredPointerLockStatus; 
@property (nonatomic,retain) NSArray * multitaskingDragExclusionRects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(long long)userInterfaceStyle;
-(NSDictionary *)statusBarPartStyles;
-(long long)backgroundStyle;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(NSString *)canvasTitle;
-(double)brightnessLevel;
-(void)setStatusBarAlpha:(double)arg1 ;
-(long long)compatibilityMode;
-(BOOL)homeIndicatorAutoHidden;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)idleTimerDisabled;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(unsigned)statusBarContextID;
-(long long)statusBarModernStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(FBSDisplayMode *)requestedDisplayMode;
-(unsigned long long)proximityDetectionModes;
-(long long)controlCenterRevealMode;
-(double)controlCenterAmbiguousActivationMargin;
-(BOOL)disablesMirroring;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(FBSDisplayConfigurationRequest *)displayConfigurationRequest;
-(unsigned long long)visibleMiniAlertCount;
-(NSArray *)audioCategoriesDisablingVolumeHUD;
-(long long)sceneActivationBias;
-(long long)preferredPointerLockStatus;
-(void)setProximityDetectionModes:(unsigned long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setDisablesMirroring:(BOOL)arg1 ;
-(void)setInterfaceOrientationChangesDisabled:(BOOL)arg1 ;
-(void)setControlCenterAmbiguousActivationMargin:(double)arg1 ;
-(void)setControlCenterRevealMode:(long long)arg1 ;
-(void)setPrimaryWindowOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)setNotificationCenterRevealMode:(long long)arg1 ;
-(void)setRequestedDisplayMode:(FBSDisplayMode *)arg1 ;
-(void)setIdleModeVisualEffectsEnabled:(BOOL)arg1 ;
-(void)setReachabilitySupported:(BOOL)arg1 ;
-(void)setDisplayConfigurationRequest:(FBSDisplayConfigurationRequest *)arg1 ;
-(void)setVisibleMiniAlertCount:(unsigned long long)arg1 ;
-(void)setWantsExclusiveForeground:(BOOL)arg1 ;
-(void)setAudioCategoriesDisablingVolumeHUD:(NSArray *)arg1 ;
-(void)setBrightnessLevel:(double)arg1 ;
-(void)setPreferredPointerLockStatus:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(double)statusBarAlpha;
-(void)setStatusBarStyle:(long long)arg1 ;
-(NSString *)defaultPNGName;
-(BOOL)statusBarHidden;
-(BOOL)isUISubclass;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)isReachabilitySupported;
-(long long)interfaceOrientation;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setScreenEdgesDeferringSystemGestures:(unsigned long long)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(void)setCanvasTitle:(NSString *)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)setScreenFocusedFrame:(CGRect)arg1 ;
-(CGRect)screenFocusedFrame;
-(void)setActivationConditionsData:(NSData *)arg1 ;
-(BOOL)deviceOrientationEventsEnabled;
-(long long)defaultStatusBarStyle;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)setDefaultStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarHidden:(BOOL)arg1 ;
-(void)setDefaultPNGName:(NSString *)arg1 ;
-(void)setDefaultPNGExpirationTime:(double)arg1 ;
-(NSArray *)multitaskingDragExclusionRects;
-(long long)statusBarStyle;
-(NSData *)activationConditionsData;
-(BOOL)isStatusBarForegroundTransparent;
-(void)setStatusBarForegroundTransparent:(BOOL)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)setStatusBarModernStyle:(long long)arg1 ;
-(void)setStatusBarPartStyles:(NSDictionary *)arg1 ;
-(void)setStatusBarContextID:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSceneActivationBias:(long long)arg1 ;
-(void)setHomeIndicatorAutoHidden:(BOOL)arg1 ;
-(void)setMultitaskingDragExclusionRects:(NSArray *)arg1 ;
-(BOOL)wantsExclusiveForeground;
@end

