/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBDashBoardHostedAppViewController* _hostedAppVCBackReference;

}

@property (assign,nonatomic,__weak) SBDashBoardHostedAppViewController * hostedAppVCBackReference;              //@synthesize hostedAppVCBackReference=_hostedAppVCBackReference - In the implementation block
-(double)_statusBarAlpha;
-(long long)_fallbackInterfaceOrientation;
-(BOOL)_suppressInheritedPartStyles;
-(void)setHostedAppVCBackReference:(SBDashBoardHostedAppViewController *)arg1 ;
-(SBDashBoardHostedAppViewController *)hostedAppVCBackReference;
@end

