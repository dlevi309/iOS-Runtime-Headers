/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, AVRoutingSessionManager, MPMRAVOutputContextWrapper, MPAVEndpointRoute, NSString;

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
	BOOL _supportsRoutePrediction;
	MPMRAVOutputContextWrapper* _applicationOutputContext;
	MPAVEndpointRoute* _endpointRoute;
	NSString* _initiator;

}

@property (nonatomic,retain) MPMRAVOutputContextWrapper * applicationOutputContext;              //@synthesize applicationOutputContext=_applicationOutputContext - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID; 
@property (assign,nonatomic) BOOL supportsMultipleSelection;                                     //@synthesize supportsMultipleSelection=_supportsMultipleSelection - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                  //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                               //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) BOOL supportsRoutePrediction;                                       //@synthesize supportsRoutePrediction=_supportsRoutePrediction - In the implementation block
+(id)_globalAudioSessionLock;
-(id)init;
-(void)dealloc;
-(NSString *)initiator;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)setDiscoveryMode:(long long)arg1 ;
-(NSString *)routingContextUID;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(BOOL)supportsMultipleSelection;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(MPAVEndpointRoute *)endpointRoute;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(MPMRAVOutputContextWrapper *)applicationOutputContext;
-(id)routingSessionManager;
-(void)addRouteToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRouteFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endpointsDidChangeNotification:(id)arg1 ;
-(void)_outputDevicesDidChangeNotification:(id)arg1 ;
-(void)_outputDevicesDidChange:(id)arg1 ;
-(id)_outputDeviceRouteWithUID:(id)arg1 ;
-(void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)arg1 ;
-(void)setApplicationOutputContext:(MPMRAVOutputContextWrapper *)arg1 ;
-(void)setSupportsMultipleSelection:(BOOL)arg1 ;
-(void)setInitiator:(NSString *)arg1 ;
-(BOOL)supportsRoutePrediction;
-(void)setSupportsRoutePrediction:(BOOL)arg1 ;
@end

