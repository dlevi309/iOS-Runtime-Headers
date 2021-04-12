/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@protocol ACCTransportXPCClientProtocol <NSObject>
@required
-(void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
-(void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;
-(void)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6;

@end

