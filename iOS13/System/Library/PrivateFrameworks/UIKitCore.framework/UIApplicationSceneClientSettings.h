/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>
@class NSDictionary, NSString, FBSDisplayMode, FBSDisplayConfigurationRequest, NSArray, NSData;


@protocol UIApplicationSceneClientSettings <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long statusBarModernStyle; 
@property (nonatomic,copy,readonly) NSDictionary * statusBarPartStyles; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) double controlCenterAmbiguousActivationMargin; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
@property (nonatomic,copy,readonly) FBSDisplayMode * requestedDisplayMode; 
@property (nonatomic,copy,readonly) FBSDisplayConfigurationRequest * displayConfigurationRequest; 
@property (getter=isReachabilitySupported,nonatomic,readonly) BOOL reachabilitySupported; 
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures; 
@property (nonatomic,readonly) BOOL homeIndicatorAutoHidden; 
@property (nonatomic,readonly) BOOL wantsExclusiveForeground; 
@property (nonatomic,readonly) unsigned long long visibleMiniAlertCount; 
@property (nonatomic,readonly) NSArray * audioCategoriesDisablingVolumeHUD; 
@property (nonatomic,readonly) double brightnessLevel; 
@property (nonatomic,readonly) BOOL disablesMirroring; 
@property (nonatomic,copy,readonly) NSString * canvasTitle; 
@property (nonatomic,readonly) NSData * activationConditionsData; 
@property (nonatomic,readonly) long long sceneActivationBias; 
@required
-(long long)interfaceOrientation;
-(long long)userInterfaceStyle;
-(NSData *)activationConditionsData;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)statusBarStyle;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)isStatusBarForegroundTransparent;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(NSDictionary *)statusBarPartStyles;
-(BOOL)homeIndicatorAutoHidden;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(long long)whitePointAdaptivityStyle;
-(NSString *)defaultPNGName;
-(long long)backgroundStyle;
-(long long)statusBarModernStyle;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(long long)compatibilityMode;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(unsigned long long)proximityDetectionModes;
-(double)controlCenterAmbiguousActivationMargin;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(FBSDisplayMode *)requestedDisplayMode;
-(FBSDisplayConfigurationRequest *)displayConfigurationRequest;
-(BOOL)isReachabilitySupported;
-(BOOL)wantsExclusiveForeground;
-(unsigned long long)visibleMiniAlertCount;
-(NSArray *)audioCategoriesDisablingVolumeHUD;
-(double)brightnessLevel;
-(BOOL)disablesMirroring;
-(NSString *)canvasTitle;
-(long long)sceneActivationBias;

@end


@class NSDictionary, NSString, FBSDisplayMode, FBSDisplayConfigurationRequest, NSArray, NSData;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long statusBarModernStyle; 
@property (nonatomic,copy,readonly) NSDictionary * statusBarPartStyles; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) double controlCenterAmbiguousActivationMargin; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
@property (nonatomic,copy,readonly) FBSDisplayMode * requestedDisplayMode; 
@property (nonatomic,copy,readonly) FBSDisplayConfigurationRequest * displayConfigurationRequest; 
@property (getter=isReachabilitySupported,nonatomic,readonly) BOOL reachabilitySupported; 
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures; 
@property (nonatomic,readonly) BOOL homeIndicatorAutoHidden; 
@property (nonatomic,readonly) BOOL wantsExclusiveForeground; 
@property (nonatomic,readonly) unsigned long long visibleMiniAlertCount; 
@property (nonatomic,readonly) NSArray * audioCategoriesDisablingVolumeHUD; 
@property (nonatomic,readonly) double brightnessLevel; 
@property (nonatomic,readonly) BOOL disablesMirroring; 
@property (nonatomic,copy,readonly) NSString * canvasTitle; 
@property (nonatomic,readonly) NSData * activationConditionsData; 
@property (nonatomic,readonly) long long sceneActivationBias; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(long long)interfaceOrientation;
-(long long)userInterfaceStyle;
-(NSData *)activationConditionsData;
-(BOOL)isUISubclass;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)statusBarStyle;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)isStatusBarForegroundTransparent;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(NSDictionary *)statusBarPartStyles;
-(BOOL)homeIndicatorAutoHidden;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(long long)whitePointAdaptivityStyle;
-(NSString *)defaultPNGName;
-(long long)backgroundStyle;
-(long long)statusBarModernStyle;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(long long)compatibilityMode;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(unsigned long long)proximityDetectionModes;
-(double)controlCenterAmbiguousActivationMargin;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(FBSDisplayMode *)requestedDisplayMode;
-(FBSDisplayConfigurationRequest *)displayConfigurationRequest;
-(BOOL)isReachabilitySupported;
-(BOOL)wantsExclusiveForeground;
-(unsigned long long)visibleMiniAlertCount;
-(NSArray *)audioCategoriesDisablingVolumeHUD;
-(double)brightnessLevel;
-(BOOL)disablesMirroring;
-(NSString *)canvasTitle;
-(long long)sceneActivationBias;
-(id)keyDescriptionForOtherSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofOtherSetting:(unsigned long long)arg3 ;
@end

