/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerPairingDriverDelegate <NSObject>
@required
-(void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2;
-(void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(/*^block*/id)arg2;
-(void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2;
-(void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5;

@end

