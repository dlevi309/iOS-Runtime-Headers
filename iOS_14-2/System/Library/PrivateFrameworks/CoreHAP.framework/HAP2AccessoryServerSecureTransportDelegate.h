/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerSecureTransportDelegate <NSObject>
@required
-(void)secureTransport:(id)arg1 needsLocalPairingIdentityWithCompletion:(/*^block*/id)arg2;
-(void)secureTransport:(id)arg1 needsRemotePairingIdentityForDeviceID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)secureTransport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3;
-(void)secureTransport:(id)arg1 didReceiveEvent:(id)arg2;

@end

