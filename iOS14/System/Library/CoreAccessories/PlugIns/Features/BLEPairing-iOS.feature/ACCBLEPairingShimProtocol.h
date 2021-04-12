/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
*/


@protocol ACCBLEPairingShimProtocol
@required
-(void)deviceUpdate:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3;
-(void)deviceSend:(id)arg1 pairType:(int)arg2 pairingData:(id)arg3;
-(void)deviceStartBLEUpdates:(id)arg1 pairType:(int)arg2 btRadio:(BOOL)arg3 pairInfo:(BOOL)arg4;
-(void)deviceStopBLEUpdates:(id)arg1;
-(void)deviceStateUpdate:(id)arg1 btRadio:(unsigned char)arg2 pairStatus:(int)arg3 pairModeOn:(BOOL)arg4 forceUpdates:(BOOL)arg5;
-(id)bleAccessoryForConnectionID:(unsigned)arg1;

@end

