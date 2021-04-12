/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
*/


@protocol ACCBLEPairingProviderProtocol <NSObject>
@optional
-(void)blePairing:(id)arg1 accessoryDetect:(int)arg2;
-(void)blePairing:(id)arg1 pairingFinished:(id)arg2 blePairingUUID:(id)arg3;

@required
-(void)blePairing:(id)arg1 accessoryAttached:(id)arg2 blePairingUUID:(id)arg3 accInfoDict:(id)arg4 supportedPairTypes:(id)arg5;
-(void)blePairing:(id)arg1 accessoryDetached:(id)arg2 blePairingUUID:(id)arg3;
-(void)blePairingStateUpdate:(id)arg1 validMask:(unsigned)arg2 btRadioOn:(BOOL)arg3 pairingState:(int)arg4 pairingModeOn:(BOOL)arg5 accessory:(id)arg6 blePairingUUID:(id)arg7;
-(void)blePairingInfoUpdate:(id)arg1 pairType:(int)arg2 pairInfoList:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5;
-(void)blePairingDataUpdate:(id)arg1 pairType:(int)arg2 pairData:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5;

@end

