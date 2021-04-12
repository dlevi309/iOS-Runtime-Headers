/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribingInternal.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribing.h>

@class NSString, SBDeviceApplicationSceneHandle, NSMutableArray;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing> {

	NSMutableArray* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * statusBarControllingSceneHandle; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)statusBarStyle;
-(long long)_statusBarStyle;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(CGRect)statusBarAvoidanceFrame;
-(id)statusBarPartStyles;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(long long)statusBarOrientation;
-(id)_allObservers;
-(id)_observerRecords;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(NSString *)statusBarSceneIdentifier;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1 ;
-(SBDeviceApplicationSceneHandle *)statusBarControllingSceneHandle;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;
-(void)addStatusBarObserver:(id)arg1 ;
-(void)removeStatusBarObserver:(id)arg1 ;
@end

