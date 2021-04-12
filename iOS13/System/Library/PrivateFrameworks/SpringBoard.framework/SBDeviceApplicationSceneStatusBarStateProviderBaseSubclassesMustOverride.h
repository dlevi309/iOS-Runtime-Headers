/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>
@required
-(long long)_statusBarStyle;
-(CGRect*)statusBarAvoidanceFrame;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(id)statusBarSceneIdentifier;
-(id)statusBarControllingSceneHandle;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;

@end

