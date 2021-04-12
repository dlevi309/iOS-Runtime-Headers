/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/_MCStateDumpPropertyListTransformable.h>

@protocol MediaControlsEndpointControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate;
@class MPMediaControlsConfiguration, NSArray, MPRequestResponseController, MPAVRoutingController, MPAVEndpointRoute, NSString, MPCPlayerPath, MPCPlayerResponse;

@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, MPAVRoutingControllerDelegate, _MCStateDumpPropertyListTransformable> {

	BOOL _allowsAutomaticResponseLoading;
	BOOL _onScreen;
	BOOL _deviceUnlocked;
	BOOL _hasEverReceivedResponse;
	BOOL _attemptingConnection;
	BOOL _automaticResponseLoading;
	MPMediaControlsConfiguration* _configuration;
	NSArray* _routeNames;
	long long _state;
	id<MediaControlsEndpointControllerDelegate> _delegate;
	id<MediaControlsEndpointObserverDelegate> _proxyDelegate;
	MPRequestResponseController* _requestController;
	MPAVRoutingController* _routingController;
	id<MediaControlsEndpointControllerConnectionDelegate> _connectionDelegate;

}

@property (nonatomic,readonly) MPRequestResponseController * requestController;                                            //@synthesize requestController=_requestController - In the implementation block
@property (assign,nonatomic) BOOL hasEverReceivedResponse;                                                                 //@synthesize hasEverReceivedResponse=_hasEverReceivedResponse - In the implementation block
@property (assign,nonatomic) long long state;                                                                              //@synthesize state=_state - In the implementation block
@property (assign,getter=isAttemptingConnection,nonatomic) BOOL attemptingConnection;                                      //@synthesize attemptingConnection=_attemptingConnection - In the implementation block
@property (nonatomic,retain) MPAVRoutingController * routingController;                                                    //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * route; 
@property (assign,getter=isAutomaticResponseLoading,nonatomic) BOOL automaticResponseLoading;                              //@synthesize automaticResponseLoading=_automaticResponseLoading - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsEndpointControllerConnectionDelegate> connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * representedBundleID; 
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration;                                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,readonly) MPCPlayerResponse * response; 
@property (nonatomic,copy,readonly) NSArray * routeNames;                                                                  //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) BOOL allowsAutomaticResponseLoading;                                                          //@synthesize allowsAutomaticResponseLoading=_allowsAutomaticResponseLoading - In the implementation block
@property (nonatomic,readonly) BOOL hasAvailableRoutes; 
@property (getter=isAirPlaying,nonatomic,readonly) BOOL airplaying; 
@property (nonatomic,readonly) BOOL isDeviceSystemRoute; 
@property (getter=isRoutingToWireless,nonatomic,readonly) BOOL routingToWireless; 
@property (assign,nonatomic) BOOL onScreen;                                                                                //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) BOOL deviceUnlocked;                                                                          //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsEndpointControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsEndpointObserverDelegate> proxyDelegate;                               //@synthesize proxyDelegate=_proxyDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRoute:(MPAVEndpointRoute *)arg1 ;
-(void)setAllowsAutomaticResponseLoading:(BOOL)arg1 ;
-(void)setConnectionDelegate:(id<MediaControlsEndpointControllerConnectionDelegate>)arg1 ;
-(void)updateRoutePropertiesIfNeeded;
-(MPAVRoutingController *)routingController;
-(BOOL)onScreen;
-(MPRequestResponseController *)requestController;
-(void)_getConnected:(BOOL*)arg1 invalid:(BOOL*)arg2 ;
-(void)_initRoutingController;
-(NSArray *)routeNames;
-(MPAVEndpointRoute *)route;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_connectionDidAttemptConnection:(id)arg1 ;
-(NSString *)representedBundleID;
-(id<MediaControlsEndpointControllerDelegate>)delegate;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(void)setAutomaticResponseLoading:(BOOL)arg1 ;
-(BOOL)deviceUnlocked;
-(BOOL)hasEverReceivedResponse;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(BOOL)isDeviceSystemRoute;
-(BOOL)isAutomaticResponseLoading;
-(id)initWithEndpoint:(id)arg1 ;
-(BOOL)allowsAutomaticResponseLoading;
-(void)_maybeReloadPlayerPathWithRoute:(id)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(id<MediaControlsEndpointControllerConnectionDelegate>)connectionDelegate;
-(void)connectAllowingAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)setProxyDelegate:(id<MediaControlsEndpointObserverDelegate>)arg1 ;
-(void)_reloadPlayerPathWithRoute:(id)arg1 ;
-(id<MediaControlsEndpointObserverDelegate>)proxyDelegate;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(void)_getConnected:(BOOL*)arg1 connecting:(BOOL*)arg2 invalid:(BOOL*)arg3 ;
-(void)setHasEverReceivedResponse:(BOOL)arg1 ;
-(void)representsLongFormVideoContentWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateState;
-(BOOL)isRoutingToWireless;
-(void)setDelegate:(id<MediaControlsEndpointControllerDelegate>)arg1 ;
-(NSString *)description;
-(MPMediaControlsConfiguration *)configuration;
-(MPCPlayerResponse *)response;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(void)_connectionDidConnect:(id)arg1 ;
-(id)_stateDumpObject;
-(NSString *)bundleID;
-(MPCPlayerPath *)playerPath;
-(void)launchNowPlayingApp;
-(void)setAttemptingConnection:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)hasAvailableRoutes;
-(void)_connectionHasBecomeInvalid;
-(long long)state;
-(void)_connectionDidInvalidate:(id)arg1 ;
-(BOOL)isAttemptingConnection;
-(void)_connectIfNeeded;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)_createRequestController;
-(void)dealloc;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(BOOL)isAirPlaying;
@end

