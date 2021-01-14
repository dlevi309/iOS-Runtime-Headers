/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/OOBBTPairing-iOS.feature/OOBBTPairing-iOS
*/


@protocol ACCOOBBTPairingProviderProtocol <NSObject>
@required
-(void)oobBtPairing:(id)arg1 accessoryInfo:(id)arg2 oobBtPairingUID:(id)arg3 accessoryMacAddr:(id)arg4 deviceClass:(unsigned)arg5;
-(void)oobBtPairing:(id)arg1 legacyConnectionIDForAccessoryUID:(id)arg2 connectionID:(unsigned)arg3;
-(void)oobBtPairing:(id)arg1 accessoryAttached:(id)arg2 accInfoDict:(id)arg3;
-(void)oobBtPairing:(id)arg1 completion:(id)arg2 oobBtPairingUID:(id)arg3 result:(unsigned char)arg4;
-(void)oobBtPairing:(id)arg1 accessoryDetached:(id)arg2;

@end

