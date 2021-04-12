/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCTransportIOAccessoryPortProtocol <NSObject>
@required
-(id)IOAccessoryPortArrived:(id)arg1 withEndpointProtocol:(int)arg2;
-(BOOL)IOAccessoryPortDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(void)IOAccessoryPortDetach:(id)arg1;
-(void)IOAccessoryPortPropertyChanged:(id)arg1;

@end

