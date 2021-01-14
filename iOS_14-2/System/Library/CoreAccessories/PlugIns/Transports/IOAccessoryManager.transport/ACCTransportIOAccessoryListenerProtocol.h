/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCTransportIOAccessoryListenerProtocol <NSObject>
@required
-(void)IOAccessoryManagerServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryAuthCPServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceInfoSet:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceArrived:(unsigned)arg1;
-(void)IOAccessoryEAServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryPortServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceArrived:(unsigned)arg1;
-(void)IOAccessoryManagerServiceDetached:(unsigned)arg1;
-(void)IOAccessoryOOBPairingServiceTerminated:(unsigned)arg1;
-(void)IOAccessoryEAServiceArrived:(unsigned)arg1;
-(void)IOAccessoryPortServiceTerminated:(unsigned)arg1;

@end

