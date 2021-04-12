/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBDeviceApplicationSceneStatusBarStateProvider, NSString;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {

	SBDeviceApplicationSceneStatusBarStateProvider* _stateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(long long)_statusBarStyle;
-(CGRect)statusBarAvoidanceFrame;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(id)statusBarSceneIdentifier;
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(BOOL)_anyObserverWants:(SEL)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(id)statusBarControllingSceneHandle;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(CGRect)arg2 ;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;
-(void)invalidateStatusBarSettings;
-(id)initWithStateProvider:(id)arg1 ;
@end

