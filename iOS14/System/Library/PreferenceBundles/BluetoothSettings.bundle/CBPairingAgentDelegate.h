/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@protocol CBPairingAgentDelegate <NSObject>
@optional
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;

@end

