/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSPairingSessionDelegate <NSObject>
@optional
-(void)pairingSession:(id)arg1 didBeginPairingWithPasscode:(id)arg2;

@required
-(void)pairingSessionDidFail:(id)arg1;
-(void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3;

@end

