/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_routeForEndpoint:(void*)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)setRouteType:(long long)arg1 ;
-(void)setDeferredPlayerPathFuture:(MPCFuture *)arg1 ;
-(void)setDeferredPlayerPathTimer:(MSVPersistentTimer *)arg1 ;
-(void)_resetDeferredPlayerPath;
-(void)setIsDeferred:(BOOL)arg1 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(NSString *)activeRouteUID;
-(BOOL)isDeferred;
-(void)setOnScreen:(BOOL)arg1 ;
-(id)deferredPlayerPathInvalidationToken;
-(void)_fetchActiveSystemRoute:(/*^block*/id)arg1 ;
-(void)setDeferredPlayerPathInvalidationToken:(id)arg1 ;
-(void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2 ;
-(void)_maybeRestoreDeferredPlayerPath;
-(void)_restoreDeferredPlayerPath;
-(id)initWithActiveRouteType:(long long)arg1 ;
-(NSString *)activeEndpointUID;
-(void)setActiveEndpointUID:(NSString *)arg1 ;
-(void)_maybeUpdateActiveSystemRoute;
-(void)_updateActiveSystemRoute;
-(void)activeSystemRouteDidChangeNotification:(id)arg1 ;
-(MPCFuture *)deferredPlayerPathFuture;
-(void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1 ;
-(MSVPersistentTimer *)deferredPlayerPathTimer;
@end

