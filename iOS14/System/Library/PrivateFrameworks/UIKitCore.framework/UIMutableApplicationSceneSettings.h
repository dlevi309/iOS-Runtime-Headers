/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSMutableSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@class NSString, NSNumber, BSCornerRadiusConfiguration;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (nonatomic,retain) NSString * persistenceIdentifier; 
@property (assign,nonatomic) BOOL underLock; 
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress; 
@property (assign,nonatomic) unsigned long long deactivationReasons; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarStyle; 
@property (assign,nonatomic) BOOL forcedStatusBarForegroundTransparent; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL canShowAlerts; 
@property (assign,nonatomic) BOOL idleModeEnabled; 
@property (assign,nonatomic) BOOL statusBarDisabled; 
@property (assign,nonatomic) UIEdgeInsets peripheryInsets; 
@property (assign,nonatomic) long long statusBarParts; 
@property (assign,nonatomic) CGRect statusBarAvoidanceFrame; 
@property (assign,nonatomic) double statusBarHeight; 
@property (assign,nonatomic) double systemMinimumMargin; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsPortrait; 
@property (assign,nonatomic) double homeAffordanceOverlayAllowance; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (assign,nonatomic) unsigned hostContextIdentifierForSnapshotting; 
@property (assign,nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting; 
@property (assign,nonatomic) long long accessibilityContrast; 
@property (assign,nonatomic) long long pointerLockStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)statusBarHeight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(NSString *)persistenceIdentifier;
-(long long)userInterfaceStyle;
-(void)setSafeAreaInsetsLandscapeLeft:(UIEdgeInsets)arg1 ;
-(void)setStatusBarAvoidanceFrame:(CGRect)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UIEdgeInsets)arg1 ;
-(void)setUnderLock:(BOOL)arg1 ;
-(BOOL)underLock;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(CGRect)statusBarAvoidanceFrame;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(long long)pointerLockStatus;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(void)setForcedStatusBarForegroundTransparent:(BOOL)arg1 ;
-(void)setCanShowAlerts:(BOOL)arg1 ;
-(void)setDefaultStatusBarHeight:(double)arg1 forOrientation:(long long)arg2 ;
-(void)setStatusBarDisabled:(BOOL)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setHostContextIdentifierForSnapshotting:(unsigned)arg1 ;
-(void)setScenePresenterRenderIdentifierForSnapshotting:(unsigned long long)arg1 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(void)setAccessibilityContrast:(long long)arg1 ;
-(void)setPointerLockStatus:(long long)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(long long)accessibilityContrast;
-(BOOL)isUISubclass;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(double)homeAffordanceOverlayAllowance;
-(void)setPeripheryInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(long long)statusBarParts;
-(void)setHomeAffordanceOverlayAllowance:(double)arg1 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)setSystemMinimumMargin:(double)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(long long)deviceOrientation;
-(void)setStatusBarParts:(long long)arg1 ;
-(double)systemMinimumMargin;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)canShowAlerts;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UIEdgeInsets)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(BOOL)forcedStatusBarForegroundTransparent;
-(unsigned long long)deactivationReasons;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(int)statusBarStyleOverridesToSuppress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)forcedStatusBarStyle;
-(unsigned long long)artworkSubtype;
-(void)setSafeAreaInsetsLandscapeRight:(UIEdgeInsets)arg1 ;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
@end

