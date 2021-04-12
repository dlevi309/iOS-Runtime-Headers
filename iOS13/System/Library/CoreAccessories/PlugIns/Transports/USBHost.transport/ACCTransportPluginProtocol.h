/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@protocol ACCTransportPluginProtocol <NSObject,ACCPluginProtocol>
@optional
-(void)authStatusDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthStatus:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6;
-(void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
-(void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;

@required
-(BOOL)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;

@end

