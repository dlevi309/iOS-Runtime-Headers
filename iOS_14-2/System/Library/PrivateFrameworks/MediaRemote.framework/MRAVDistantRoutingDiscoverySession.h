/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)serviceInterface;
+(id)clientInterface;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(id)arg1 ;
-(id)routingContextUID;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(unsigned)discoveryMode;
-(NSMutableDictionary *)distantExternalDevices;
-(void)availableOutputDevicesDidChange:(id)arg1 ;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1 ;
-(NSXPCConnection *)hostedRoutingSessionConnection;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadHostedRoutingServiceEndpointFeatures;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(NSArray *)distantOutputDevices;
-(void)availableEndpointsDidChange:(id)arg1 ;
-(void)setHostedRoutingSessionConnection:(NSXPCConnection *)arg1 ;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1 ;
-(id)availableEndpoints;
-(void)setDistantExternalDevices:(NSMutableDictionary *)arg1 ;
-(void)setDistantEndpoints:(NSArray *)arg1 ;
-(NSArray *)distantEndpoints;
-(unsigned)endpointFeatures;
-(void)_initializeHostedRoutingConnectionWithCompletion:(/*^block*/id)arg1 ;
-(id)availableOutputDevices;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(void)_reloadAvailableDistantOutputDevices;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(BOOL)_shouldAddLocalEndpoint;
-(id)_hostedRoutingConnection;
-(void)dealloc;
-(void)setEndpointFeatures:(unsigned)arg1 ;
@end

