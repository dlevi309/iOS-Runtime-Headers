/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(long long)userInterfaceStyle;
-(NSString *)persistenceIdentifier;
-(BOOL)isUISubclass;
-(BOOL)underLock;
-(unsigned long long)deactivationReasons;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(double)statusBarHeight;
-(long long)deviceOrientation;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)canShowAlerts;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
-(BOOL)forcedStatusBarForegroundTransparent;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(NSNumber *)forcedStatusBarStyle;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(UIEdgeInsets)peripheryInsets;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(double)systemMinimumMargin;
-(unsigned long long)artworkSubtype;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
-(void)setUnderLock:(BOOL)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setForcedStatusBarForegroundTransparent:(BOOL)arg1 ;
-(void)setPeripheryInsets:(UIEdgeInsets)arg1 ;
-(void)setStatusBarParts:(long long)arg1 ;
-(void)setStatusBarAvoidanceFrame:(CGRect)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)setDefaultStatusBarHeight:(double)arg1 forOrientation:(long long)arg2 ;
-(void)setSystemMinimumMargin:(double)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UIEdgeInsets)arg1 ;
-(void)setHomeAffordanceOverlayAllowance:(double)arg1 ;
-(void)setSafeAreaInsetsLandscapeLeft:(UIEdgeInsets)arg1 ;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UIEdgeInsets)arg1 ;
-(void)setSafeAreaInsetsLandscapeRight:(UIEdgeInsets)arg1 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)setCanShowAlerts:(BOOL)arg1 ;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(void)setStatusBarDisabled:(BOOL)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setHostContextIdentifierForSnapshotting:(unsigned)arg1 ;
-(void)setScenePresenterRenderIdentifierForSnapshotting:(unsigned long long)arg1 ;
@end

