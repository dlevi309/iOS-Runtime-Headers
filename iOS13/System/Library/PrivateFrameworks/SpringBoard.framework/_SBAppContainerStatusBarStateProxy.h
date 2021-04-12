/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBAppContainerViewController* _appVCBackReference;

}

@property (assign,nonatomic,__weak) SBAppContainerViewController * appVCBackReference;              //@synthesize appVCBackReference=_appVCBackReference - In the implementation block
-(long long)_statusBarStyle;
-(double)_statusBarAlpha;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(long long)_fallbackInterfaceOrientation;
-(long long)overrideStatusBarStyle;
-(void)setAppVCBackReference:(SBAppContainerViewController *)arg1 ;
-(SBAppContainerViewController *)appVCBackReference;
@end

