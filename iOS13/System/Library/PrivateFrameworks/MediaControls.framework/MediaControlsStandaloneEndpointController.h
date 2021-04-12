/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControlsEndpointController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <MediaControls/MediaControlsEndpointObserverDelegate.h>
#import <MediaControls/MediaControlsEndpointControllerConnectionDelegate.h>

@class NSString, MPAVRoutingController, MPMRAVEndpointObserverWrapper;

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate> {

	BOOL _allowsAutomaticResponseLoading;
	BOOL _endpointDiscovered;
	NSString* _routeUID;
	MPAVRoutingController* _routingController;
	MPMRAVEndpointObserverWrapper* _endpointObserver;

}

@property (assign,getter=isEndpointDiscovered,nonatomic) BOOL endpointDiscovered;              //@synthesize endpointDiscovered=_endpointDiscovered - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController;                      //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) MPMRAVEndpointObserverWrapper * endpointObserver;                 //@synthesize endpointObserver=_endpointObserver - In the implementation block
@property (nonatomic,retain) NSString * routeUID;                                              //@synthesize routeUID=_routeUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)beginObserving;
-(void)endObserving;
-(void)setAllowsAutomaticResponseLoading:(BOOL)arg1 ;
-(id)initWithRouteUID:(id)arg1 ;
-(id)proxyDelegate;
-(BOOL)isEndpointDiscovered;
-(void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2 ;
-(void)setEndpointObserver:(MPMRAVEndpointObserverWrapper *)arg1 ;
-(void)setEndpointDiscovered:(BOOL)arg1 ;
-(void)updateAllowsAutomaticResponseLoading;
-(MPMRAVEndpointObserverWrapper *)endpointObserver;
-(id)_routeForEndpoint:(void*)arg1 ;
@end

