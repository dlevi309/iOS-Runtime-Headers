/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRoute:(id)arg1 ;
-(NSString *)routeUID;
-(void)setAllowsAutomaticResponseLoading:(BOOL)arg1 ;
-(MPAVRoutingController *)routingController;
-(id)initWithRouteUID:(id)arg1 ;
-(id)_routeForEndpoint:(void*)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)setEndpointObserver:(MPMRAVEndpointObserverWrapper *)arg1 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)beginObserving;
-(id)initWithEndpoint:(id)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2 ;
-(id)proxyDelegate;
-(void)endObserving;
-(BOOL)isEndpointDiscovered;
-(MPMRAVEndpointObserverWrapper *)endpointObserver;
-(void)updateAllowsAutomaticResponseLoading;
-(void)dealloc;
-(void)setEndpointDiscovered:(BOOL)arg1 ;
@end

