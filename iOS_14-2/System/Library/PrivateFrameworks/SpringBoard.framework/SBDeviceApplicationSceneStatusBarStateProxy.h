/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBDeviceApplicationSceneStatusBarStateProvider, SBDeviceApplicationSceneHandle, NSString;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {

	SBDeviceApplicationSceneStatusBarStateProvider* _stateProvider;
	SBDeviceApplicationSceneHandle* _deviceApplicationSceneHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2 ;
-(void)invalidateStatusBarSettings;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(CGRect)arg2 ;
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1 ;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_suppressInheritedPartStyles;
-(id)statusBarSceneIdentifier;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 ;
-(BOOL)_anyObserverWants:(SEL)arg1 ;
-(long long)_statusBarStyle;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(CGRect)statusBarAvoidanceFrame;
-(id)sceneToHandleStatusBarTapIfExists;
-(id)classicApplicationSceneHandleIfExists;
-(void)invalidate;
-(id)breadcrumbProvider;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(int)statusBarStyleOverridesToSuppress;
-(id)overlayStatusBarData;
@end

