/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCTransportIOAccessoryListenerProtocol <NSObject>
@required
-(void)IOAccessoryManagerServiceInfoSet:(unsigned)arg1;
-(void)IOAccessoryManagerServiceDetached:(unsigned)arg1;
-(void)IOAccessoryManagerServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryEAServiceArrived:(unsigned)arg1;
-(void)IOAccessoryEAServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceArrived:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceTerminated:(unsigned)arg1;

@end

