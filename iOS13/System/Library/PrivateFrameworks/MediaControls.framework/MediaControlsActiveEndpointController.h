/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsEndpointController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <MediaControls/MediaControlsEndpointObserverDelegate.h>
#import <MediaControls/MediaControlsEndpointControllerConnectionDelegate.h>

@class NSString, MPCFuture, MSVPersistentTimer;

@interface MediaControlsActiveEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate> {

	BOOL _isDeferred;
	long long _routeType;
	NSString* _activeRouteUID;
	MPCFuture* _deferredPlayerPathFuture;
	id _deferredPlayerPathInvalidationToken;
	MSVPersistentTimer* _deferredPlayerPathTimer;
	NSString* _activeEndpointUID;

}

@property (nonatomic,retain) MPCFuture * deferredPlayerPathFuture;                      //@synthesize deferredPlayerPathFuture=_deferredPlayerPathFuture - In the implementation block
@property (nonatomic,retain) id deferredPlayerPathInvalidationToken;                    //@synthesize deferredPlayerPathInvalidationToken=_deferredPlayerPathInvalidationToken - In the implementation block
@property (nonatomic,retain) MSVPersistentTimer * deferredPlayerPathTimer;              //@synthesize deferredPlayerPathTimer=_deferredPlayerPathTimer - In the implementation block
@property (nonatomic,retain) NSString * activeEndpointUID;                              //@synthesize activeEndpointUID=_activeEndpointUID - In the implementation block
@property (assign,nonatomic) long long routeType;                                       //@synthesize routeType=_routeType - In the implementation block
@property (assign,nonatomic) BOOL isDeferred;                                           //@synthesize isDeferred=_isDeferred - In the implementation block
@property (nonatomic,readonly) NSString * activeRouteUID;                               //@synthesize activeRouteUID=_activeRouteUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)mediaRecentlyPlayedTimeout;
-(long long)routeType;
-(void)setRouteType:(long long)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(id)initWithActiveRouteType:(long long)arg1 ;
-(void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2 ;
-(id)_routeForEndpoint:(void*)arg1 ;
-(void)activeSystemRouteDidChangeNotification:(id)arg1 ;
-(void)_updateActiveSystemRoute;
-(BOOL)isDeferred;
-(void)_maybeRestoreDeferredPlayerPath;
-(void)_maybeUpdateActiveSystemRoute;
-(void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1 ;
-(void)setIsDeferred:(BOOL)arg1 ;
-(void)setActiveEndpointUID:(NSString *)arg1 ;
-(void)setDeferredPlayerPathFuture:(MPCFuture *)arg1 ;
-(void)setDeferredPlayerPathInvalidationToken:(id)arg1 ;
-(void)setDeferredPlayerPathTimer:(MSVPersistentTimer *)arg1 ;
-(void)_resetDeferredPlayerPath;
-(MPCFuture *)deferredPlayerPathFuture;
-(NSString *)activeEndpointUID;
-(MSVPersistentTimer *)deferredPlayerPathTimer;
-(void)_restoreDeferredPlayerPath;
-(void)_fetchActiveSystemRoute:(/*^block*/id)arg1 ;
-(NSString *)activeRouteUID;
-(id)deferredPlayerPathInvalidationToken;
@end

