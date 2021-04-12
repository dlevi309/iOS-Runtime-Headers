/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBDashBoardHostedAppViewController* _hostedAppVCBackReference;

}

@property (assign,nonatomic,__weak) SBDashBoardHostedAppViewController * hostedAppVCBackReference;              //@synthesize hostedAppVCBackReference=_hostedAppVCBackReference - In the implementation block
-(double)_statusBarAlpha;
-(BOOL)_suppressInheritedPartStyles;
-(long long)_fallbackInterfaceOrientation;
-(void)setHostedAppVCBackReference:(SBDashBoardHostedAppViewController *)arg1 ;
-(SBDashBoardHostedAppViewController *)hostedAppVCBackReference;
@end

