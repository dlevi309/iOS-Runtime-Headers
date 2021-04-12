/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBDeviceApplicationSceneHandle, NSString;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {

	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	UIApplicationSceneSettingsDiffInspector* _appSceneSettingsDiffInspector;
	SBDeviceApplicationSceneHandle* _sceneHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(long long)_statusBarStyle;
-(CGRect)statusBarAvoidanceFrame;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)statusBarSceneIdentifier;
-(BOOL)_anyObserverWants:(SEL)arg1 ;
-(void)_performUpdateWith:(id)arg1 actions:(/*^block*/id)arg2 ;
-(id)statusBarControllingSceneHandle;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;
-(id)_initWithSceneHandle:(id)arg1 ;
-(void)invalidateStatusBarSettings;
@end

