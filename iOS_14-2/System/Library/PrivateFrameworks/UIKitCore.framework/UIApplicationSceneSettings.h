/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKitCore/_UIDisplayInfoProviding.h>
#import <UIKit/UIApplicationSceneSettings.h>
@class NSString, NSNumber, BSCornerRadiusConfiguration;


@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) NSString * persistenceIdentifier; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (nonatomic,readonly) unsigned hostContextIdentifierForSnapshotting; 
@property (nonatomic,readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting; 
@property (nonatomic,readonly) long long accessibilityContrast; 
@property (nonatomic,readonly) long long pointerLockStatus; 
@required
-(double)statusBarHeight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(NSString *)persistenceIdentifier;
-(long long)userInterfaceStyle;
-(BOOL)underLock;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(CGRect)statusBarAvoidanceFrame;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(long long)pointerLockStatus;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
-(UIEdgeInsets)peripheryInsets;
-(long long)accessibilityContrast;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(long long)statusBarParts;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(long long)deviceOrientation;
-(double)systemMinimumMargin;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)canShowAlerts;
-(BOOL)forcedStatusBarForegroundTransparent;
-(unsigned long long)deactivationReasons;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(unsigned long long)artworkSubtype;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1;

@end


@class FBSDisplayConfiguration, NSString, NSNumber, BSCornerRadiusConfiguration;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * persistenceIdentifier; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) unsigned long long deactivationReasons; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,readonly) BOOL forcedStatusBarForegroundTransparent; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL canShowAlerts; 
@property (nonatomic,readonly) BOOL idleModeEnabled; 
@property (nonatomic,readonly) BOOL statusBarDisabled; 
@property (nonatomic,readonly) long long statusBarParts; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (nonatomic,readonly) unsigned hostContextIdentifierForSnapshotting; 
@property (nonatomic,readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting; 
@property (nonatomic,readonly) long long accessibilityContrast; 
@property (nonatomic,readonly) long long pointerLockStatus; 
-(double)statusBarHeight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(NSString *)persistenceIdentifier;
-(long long)userInterfaceStyle;
-(BOOL)underLock;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(CGRect)statusBarAvoidanceFrame;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(long long)pointerLockStatus;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(long long)accessibilityContrast;
-(BOOL)isUISubclass;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(long long)statusBarParts;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(long long)deviceOrientation;
-(double)systemMinimumMargin;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)canShowAlerts;
-(BOOL)forcedStatusBarForegroundTransparent;
-(unsigned long long)deactivationReasons;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(unsigned long long)artworkSubtype;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
@end

