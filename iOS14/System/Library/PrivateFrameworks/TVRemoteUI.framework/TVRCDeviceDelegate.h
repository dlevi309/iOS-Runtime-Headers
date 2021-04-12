/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol TVRCDeviceDelegate <NSObject>
@optional
-(void)deviceConnected:(id)arg1;
-(void)deviceBeganConnecting:(id)arg1;
-(void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3;
-(void)device:(id)arg1 removedSupportedButtons:(id)arg2 added:(id)arg3;
-(void)deviceNameChanged:(id)arg1;
-(void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2;
-(BOOL)deviceShouldAllowConnectionAuthentication:(id)arg1;

@end

