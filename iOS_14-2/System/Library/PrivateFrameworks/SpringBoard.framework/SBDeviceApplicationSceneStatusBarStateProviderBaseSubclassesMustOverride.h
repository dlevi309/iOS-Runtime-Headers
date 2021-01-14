/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>
@required
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
-(id)_statusBarPartStyles;
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2;
-(BOOL)_suppressInheritedPartStyles;
-(id)statusBarSceneIdentifier;
-(long long)_statusBarStyle;
-(CGRect*)statusBarAvoidanceFrame;
-(int)statusBarStyleOverridesToSuppress;

@end

