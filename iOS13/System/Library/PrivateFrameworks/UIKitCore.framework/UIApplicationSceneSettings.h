/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@required
-(long long)userInterfaceStyle;
-(NSString *)persistenceIdentifier;
-(BOOL)underLock;
-(unsigned long long)deactivationReasons;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(double)statusBarHeight;
-(long long)deviceOrientation;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)canShowAlerts;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1;
-(BOOL)forcedStatusBarForegroundTransparent;
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
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;

@end


@class FBSDisplayConfiguration, NSString, NSNumber, BSCornerRadiusConfiguration;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
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
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned)hostContextIdentifierForSnapshotting;
-(unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
@end

