/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVDistantRoutingDiscoveryClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString, NSXPCConnection, NSMutableDictionary;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	BOOL _enableThrottling;
	NSArray* _distantEndpoints;
	NSArray* _distantOutputDevices;
	NSString* _routingContextUID;
	int _serviceResetNotifyToken;
	BOOL _hostedRoutingConnectionDidInitialize;
	NSXPCConnection* _hostedRoutingSessionConnection;
	NSMutableDictionary* _distantExternalDevices;

}

@property (nonatomic,retain) NSXPCConnection * hostedRoutingSessionConnection;              //@synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection - In the implementation block
@property (nonatomic,retain) NSArray * distantEndpoints; 
@property (nonatomic,retain) NSArray * distantOutputDevices; 
@property (nonatomic,retain) NSMutableDictionary * distantExternalDevices;                  //@synthesize distantExternalDevices=_distantExternalDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serviceInterface;
-(void)dealloc;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(id)routingContextUID;
-(unsigned)discoveryMode;
-(BOOL)devicePresenceDetected;
-(id)availableOutputDevices;
-(void)setRoutingContextUID:(id)arg1 ;
-(void)availableEndpointsDidChange:(id)arg1 ;
-(void)availableOutputDevicesDidChange:(id)arg1 ;
-(void)_initializeHostedRoutingConnectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(id)_hostedRoutingConnection;
-(NSArray *)distantEndpoints;
-(NSArray *)distantOutputDevices;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadAvailableDistantOutputDevices;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1 ;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1 ;
-(void)setHostedRoutingSessionConnection:(NSXPCConnection *)arg1 ;
-(id)initWithEndpointFeatures:(unsigned)arg1 enableThrottling:(BOOL)arg2 ;
-(unsigned)endpointFeatures;
-(id)availableEndpoints;
-(void)setDistantEndpoints:(NSArray *)arg1 ;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(NSXPCConnection *)hostedRoutingSessionConnection;
-(NSMutableDictionary *)distantExternalDevices;
-(void)setDistantExternalDevices:(NSMutableDictionary *)arg1 ;
@end

