/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene;


@protocol SBApplicationSceneStatusBarDescribing <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) BOOL sceneWantsDeviceOrientationEventsEnabled; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) _UIStatusBarData * overlayStatusBarData; 
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider * breadcrumbProvider; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * classicApplicationSceneHandleIfExists; 
@property (nonatomic,readonly) FBScene * sceneToHandleStatusBarTapIfExists; 
@required
-(NSString *)statusBarSceneIdentifier;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1;
-(CGRect)statusBarAvoidanceFrame;
-(double)statusBarAlpha;
-(FBScene *)sceneToHandleStatusBarTapIfExists;
-(BOOL)statusBarHidden;
-(SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
-(long long)statusBarOrientation;
-(long long)statusBarStyle;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(int)statusBarStyleOverridesToSuppress;
-(_UIStatusBarData *)overlayStatusBarData;

@end

