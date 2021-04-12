/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol TVRCDeviceDelegate <NSObject>
@optional
-(void)deviceBeganConnecting:(id)arg1;
-(BOOL)deviceShouldAllowConnectionAuthentication:(id)arg1;
-(void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2;
-(void)deviceConnected:(id)arg1;
-(void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3;
-(void)deviceNameChanged:(id)arg1;
-(void)device:(id)arg1 removedSupportedButtons:(id)arg2 added:(id)arg3;

@end

