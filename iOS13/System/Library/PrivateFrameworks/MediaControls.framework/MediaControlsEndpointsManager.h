/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <MediaControls/MediaControlsHomeObserverDelegate.h>
#import <libobjc.A.dylib/MPAVOutputDevicePlaybackDataSource.h>

@protocol OS_dispatch_queue, MediaControlsEndpointsManagerDelegate;
@class NSObject, NSMutableDictionary, NSArray, MPAVEndpointRoute, MPMediaControlsConfiguration, MediaControlsHomeObserver, MPAVRoutingController, NSString;

@interface MediaControlsEndpointsManager : NSObject <MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpointControllersMap;
	BOOL _didLoadHomeUIDsOnce;
	BOOL _isRequestingActiveRoute;
	BOOL _isUpdatingRoutes;
	NSArray* _pendingRoutesToUpdate;
	MPAVEndpointRoute* _resolvedActiveSystemRoute;
	MPMediaControlsConfiguration* _configuration;
	long long _discoveryMode;
	NSArray* _routes;
	id<MediaControlsEndpointsManagerDelegate> _delegate;
	MediaControlsHomeObserver* _homeObserver;
	MPAVRoutingController* _routingController;
	NSString* _activeSystemRouteUID;
	NSString* _pendingActiveSystemRouteUID;

}

@property (nonatomic,readonly) MediaControlsHomeObserver * homeObserver;                             //@synthesize homeObserver=_homeObserver - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController;                            //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeSystemRouteUID;                                 //@synthesize activeSystemRouteUID=_activeSystemRouteUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingActiveSystemRouteUID;                          //@synthesize pendingActiveSystemRouteUID=_pendingActiveSystemRouteUID - In the implementation block
@property (nonatomic,readonly) MPAVEndpointRoute * activeSystemRoute; 
@property (nonatomic,retain) MPAVEndpointRoute * resolvedActiveSystemRoute;                          //@synthesize resolvedActiveSystemRoute=_resolvedActiveSystemRoute - In the implementation block
@property (nonatomic,copy,readonly) MPMediaControlsConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                                //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routes;                                                //@synthesize routes=_routes - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsEndpointsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isActiveSystemEndpointEqualToLocalEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MediaControlsEndpointsManagerDelegate>)delegate;
-(void)setDelegate:(id<MediaControlsEndpointsManagerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)setDiscoveryMode:(long long)arg1 ;
-(NSArray *)routes;
-(long long)discoveryMode;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(void)getOutputDeviceIsPlaying:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)endpointControllerForRoute:(id)arg1 ;
-(void)setActiveSystemRoute:(id)arg1 reason:(id)arg2 ;
-(MPAVEndpointRoute *)activeSystemRoute;
-(MPAVEndpointRoute *)resolvedActiveSystemRoute;
-(BOOL)isActiveSystemEndpointEqualToLocalEndpoint;
-(void)homeObserverDidUpdateKnownUIDs:(id)arg1 ;
-(void)_activeSystemRouteDidChange:(id)arg1 ;
-(void)_updateWithRoutes:(id)arg1 ;
-(long long)_indexOfRouteWithUID:(id)arg1 ;
-(void)_updateActiveRouteWithReason:(id)arg1 ;
-(id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id*)arg2 ;
-(BOOL)_homeHasRoute:(id)arg1 ;
-(id)_createSectionedCollectionFromRoutes:(id)arg1 ;
-(void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2 ;
-(void)setResolvedActiveSystemRoute:(MPAVEndpointRoute *)arg1 ;
-(MediaControlsHomeObserver *)homeObserver;
-(NSString *)activeSystemRouteUID;
-(NSString *)pendingActiveSystemRouteUID;
@end

