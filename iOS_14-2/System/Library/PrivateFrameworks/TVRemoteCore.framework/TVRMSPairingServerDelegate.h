/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSPairingServerDelegate <NSObject>
@optional
-(void)pairingServer:(id)arg1 didFailToPairWithService:(id)arg2;

@required
-(void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
-(void)pairingServerDidFail:(id)arg1;

@end

