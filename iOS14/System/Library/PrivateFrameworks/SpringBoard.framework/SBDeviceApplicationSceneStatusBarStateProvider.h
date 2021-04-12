/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBSUIInCallSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, NSString;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {

	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	UIApplicationSceneSettingsDiffInspector* _appSceneSettingsDiffInspector;
	SBSUIInCallSceneClientSettingsDiffInspector* _inCallSceneClientSettingsDiffInspector;
	BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
	SBDeviceApplicationSceneHandle* _sceneHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(void)invalidateStatusBarSettings;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_suppressInheritedPartStyles;
-(id)statusBarSceneIdentifier;
-(BOOL)_anyObserverWants:(SEL)arg1 ;
-(long long)_statusBarStyle;
-(void)_handleStatusBarStyleOverridesToSuppressUpdate;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(CGRect)statusBarAvoidanceFrame;
-(void)_performUpdateWith:(id)arg1 actions:(/*^block*/id)arg2 ;
-(id)sceneToHandleStatusBarTapIfExists;
-(id)_initWithSceneHandle:(id)arg1 ;
-(id)classicApplicationSceneHandleIfExists;
-(void)invalidate;
-(id)breadcrumbProvider;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(int)statusBarStyleOverridesToSuppress;
-(void)dealloc;
-(id)overlayStatusBarData;
@end

