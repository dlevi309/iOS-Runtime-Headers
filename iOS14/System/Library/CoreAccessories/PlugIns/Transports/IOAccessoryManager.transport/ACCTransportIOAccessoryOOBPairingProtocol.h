/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCTransportIOAccessoryOOBPairingProtocol <NSObject>
@required
-(BOOL)IOAccessoryOOBPairingInfoArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingDataFinishedForEndpointUUID:(id)arg1;
-(BOOL)IOAccessoryOOBPairingDataStartedForEndpointUUID:(id)arg1;

@end

