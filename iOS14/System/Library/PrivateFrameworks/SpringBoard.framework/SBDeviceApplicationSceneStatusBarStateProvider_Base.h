/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribingInternal.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribing.h>

@class NSString, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene, NSMutableArray;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing> {

	NSMutableArray* _observers;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(id)succinctDescription;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_suppressInheritedPartStyles;
-(NSString *)statusBarSceneIdentifier;
-(long long)_statusBarStyle;
-(id)_allObservers;
-(id)init;
-(id)statusBarPartStyles;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)statusBarAvoidanceFrame;
-(double)statusBarAlpha;
-(FBScene *)sceneToHandleStatusBarTapIfExists;
-(BOOL)statusBarHidden;
-(NSString *)description;
-(SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
-(long long)statusBarOrientation;
-(id)_observerRecords;
-(long long)statusBarStyle;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(id)succinctDescriptionBuilder;
-(int)statusBarStyleOverridesToSuppress;
-(_UIStatusBarData *)overlayStatusBarData;
-(void)addStatusBarObserver:(id)arg1 ;
-(void)removeStatusBarObserver:(id)arg1 ;
@end

