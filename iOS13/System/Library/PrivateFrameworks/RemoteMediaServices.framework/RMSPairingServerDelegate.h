/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol RMSPairingServerDelegate <NSObject>
@optional
-(void)pairingServer:(id)arg1 didFailToPairWithService:(id)arg2;

@required
-(void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
-(void)pairingServerDidFail:(id)arg1;

@end

