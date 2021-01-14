/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCTransportIOAccessoryPortProtocol <NSObject>
@required
-(id)IOAccessoryPortArrived:(id)arg1 withEndpointProtocol:(int)arg2 publish:(BOOL)arg3;
-(void)IOAccessoryPortPropertyChanged:(id)arg1;
-(BOOL)IOAccessoryPortDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(void)IOAccessoryPortPublish:(id)arg1;
-(void)IOAccessoryPortDetach:(id)arg1;

@end

