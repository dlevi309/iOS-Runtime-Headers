/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, AVRoutingSessionManager, MPMRAVOutputContextWrapper, MPAVEndpointRoute, NSString, MRAVRoutingDiscoverySessionConfiguration;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _attemptedToInitializeAppOutputContext;
	void* _discoverySession;
	void* _callbackToken;
	BOOL _supportsMultipleSelection;
	BOOL _devicePresenceDetected;
	NSArray* _outputDeviceRoutes;
	BOOL _shouldSourceOutputDevicesFromAVODDS;
	AVRoutingSessionManager* _routingSessionManager;
	BOOL _detachesRoutesToGroup;
	BOOL _supportsQueueHandoff;
	BOOL _supportsRoutePrediction;
	MPMRAVOutputContextWrapper* _applicationOutputContext;
	MPAVEndpointRoute* _endpointRoute;
	NSString* _initiator;

}

@property (nonatomic,retain) MPMRAVOutputContextWrapper * applicationOutputContext;                                   //@synthesize applicationOutputContext=_applicationOutputContext - In the implementation block
@property (nonatomic,readonly) MRAVRoutingDiscoverySessionConfiguration * discoverySessionConfiguration; 
@property (nonatomic,copy) NSString * routingContextUID; 
@property (assign,nonatomic) BOOL supportsMultipleSelection;                                                          //@synthesize supportsMultipleSelection=_supportsMultipleSelection - In the implementation block
@property (assign,nonatomic) BOOL detachesRoutesToGroup;                                                              //@synthesize detachesRoutesToGroup=_detachesRoutesToGroup - In the implementation block
@property (assign,nonatomic) BOOL supportsQueueHandoff;                                                               //@synthesize supportsQueueHandoff=_supportsQueueHandoff - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                                       //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                                                    //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) BOOL supportsRoutePrediction;                                                            //@synthesize supportsRoutePrediction=_supportsRoutePrediction - In the implementation block
+(id)_globalAudioSessionLock;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSString *)routingContextUID;
-(id)getRoutesForCategory:(id)arg1 ;
-(long long)discoveryMode;
-(void)_registerNotifications;
-(void)setSupportsQueueHandoff:(BOOL)arg1 ;
-(void)_outputDevicesDidChange:(id)arg1 ;
-(id)init;
-(BOOL)supportsMultipleSelection;
-(MPAVEndpointRoute *)endpointRoute;
-(void)removeRouteFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)detachesRoutesToGroup;
-(BOOL)supportsQueueHandoff;
-(void)setInitiator:(NSString *)arg1 ;
-(MRAVRoutingDiscoverySessionConfiguration *)discoverySessionConfiguration;
-(BOOL)_shouldDetachOutputDevicesToGroup:(id)arg1 ;
-(void)setSupportsMultipleSelection:(BOOL)arg1 ;
-(void)addRouteToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setApplicationOutputContext:(MPMRAVOutputContextWrapper *)arg1 ;
-(void)createGroupFromOutputDevices:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_unregisterNotifications;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(NSString *)initiator;
-(void)removeRoutesFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsRoutePrediction;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)addRoutesToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSupportsRoutePrediction:(BOOL)arg1 ;
-(void)setDetachesRoutesToGroup:(BOOL)arg1 ;
-(void)_outputDevicesDidChangeNotification:(id)arg1 ;
-(void)_endpointsDidChangeNotification:(id)arg1 ;
-(id)routingSessionManager;
-(void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)arg1 ;
-(id)_outputDeviceRouteWithUID:(id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(void)dealloc;
-(id)outputDevicesForRoutes:(id)arg1 ;
-(MPMRAVOutputContextWrapper *)applicationOutputContext;
@end

