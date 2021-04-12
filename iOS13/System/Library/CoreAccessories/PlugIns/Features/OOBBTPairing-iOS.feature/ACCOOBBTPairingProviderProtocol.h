/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/OOBBTPairing-iOS.feature/OOBBTPairing-iOS
*/


@protocol ACCOOBBTPairingProviderProtocol <NSObject>
@required
-(void)oobBtPairing:(id)arg1 accessoryAttached:(id)arg2 accInfoDict:(id)arg3;
-(void)oobBtPairing:(id)arg1 accessoryDetached:(id)arg2;
-(void)oobBtPairing:(id)arg1 accessoryInfo:(id)arg2 oobBtPairingUID:(id)arg3 accessoryMacAddr:(id)arg4 deviceClass:(unsigned)arg5;
-(void)oobBtPairing:(id)arg1 completion:(id)arg2 oobBtPairingUID:(id)arg3 result:(unsigned char)arg4;
-(void)oobBtPairing:(id)arg1 legacyConnectionIDForAccessoryUID:(id)arg2 connectionID:(unsigned)arg3;

@end

