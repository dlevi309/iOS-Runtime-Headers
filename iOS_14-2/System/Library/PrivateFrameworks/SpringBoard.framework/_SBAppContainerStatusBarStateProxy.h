/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBAppContainerViewController* _appVCBackReference;

}

@property (assign,nonatomic,__weak) SBAppContainerViewController * appVCBackReference;              //@synthesize appVCBackReference=_appVCBackReference - In the implementation block
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(long long)_statusBarStyle;
-(void)setAppVCBackReference:(SBAppContainerViewController *)arg1 ;
-(SBAppContainerViewController *)appVCBackReference;
-(long long)overrideStatusBarStyle;
@end

