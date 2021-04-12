/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol RMSPairingSessionDelegate <NSObject>
@optional
-(void)pairingSession:(id)arg1 didBeginPairingWithPasscode:(id)arg2;

@required
-(void)pairingSessionDidFail:(id)arg1;
-(void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3;

@end

