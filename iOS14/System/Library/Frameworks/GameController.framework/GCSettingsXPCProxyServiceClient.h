/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol GCSettingsXPCProxyServiceClient <_GCIPCServiceClient>
@property (readonly) id<_GCIPCEndpointConnection> settingsXPCProxyServiceConnection; 
@property (readonly) id<GCSettingsXPCProxyServiceRemoteServerInterface> settingsXPCProxyServiceRemoteServer; 
@required
-(id<GCSettingsXPCProxyServiceRemoteServerInterface>)settingsXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)settingsXPCProxyServiceConnection;

@end

