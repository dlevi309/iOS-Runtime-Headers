/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
*/


@protocol ACCBLEPairingShimProtocol
@required
-(id)bleAccessoryForConnectionID:(unsigned)arg1;
-(void)deviceStartBLEUpdates:(id)arg1 pairType:(int)arg2 btRadio:(BOOL)arg3 pairInfo:(BOOL)arg4;
-(void)deviceStateUpdate:(id)arg1 btRadio:(unsigned char)arg2 pairStatus:(int)arg3 pairModeOn:(BOOL)arg4 forceUpdates:(BOOL)arg5;
-(void)deviceSend:(id)arg1 pairType:(int)arg2 pairingData:(id)arg3;
-(void)deviceUpdate:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3;
-(void)deviceStopBLEUpdates:(id)arg1;

@end

