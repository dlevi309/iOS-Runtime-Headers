/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id<MediaControlsEndpointControllerDelegate>)delegate;
-(void)setDelegate:(id<MediaControlsEndpointControllerDelegate>)arg1 ;
-(long long)state;
-(id)initWithEndpoint:(id)arg1 ;
-(NSString *)bundleID;
-(void)setState:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(MPCPlayerResponse *)response;
-(void)_updateState;
-(void)setRoute:(MPAVEndpointRoute *)arg1 ;
-(NSArray *)routeNames;
-(MPAVEndpointRoute *)route;
-(void)_connectIfNeeded;
-(id)_stateDumpObject;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(MPAVRoutingController *)routingController;
-(NSString *)representedBundleID;
-(MPCPlayerPath *)playerPath;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(BOOL)isAirPlaying;
-(void)setConnectionDelegate:(id<MediaControlsEndpointControllerConnectionDelegate>)arg1 ;
-(id<MediaControlsEndpointControllerConnectionDelegate>)connectionDelegate;
-(BOOL)deviceUnlocked;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(void)setAllowsAutomaticResponseLoading:(BOOL)arg1 ;
-(id<MediaControlsEndpointObserverDelegate>)proxyDelegate;
-(BOOL)isDeviceSystemRoute;
-(void)launchNowPlayingApp;
-(BOOL)isRoutingToWireless;
-(BOOL)hasAvailableRoutes;
-(void)representsLongFormVideoContentWithCompletion:(/*^block*/id)arg1 ;
-(void)connectAllowingAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)_initRoutingController;
-(void)_createRequestController;
-(void)_maybeReloadPlayerPathWithRoute:(id)arg1 ;
-(void)_getConnected:(BOOL*)arg1 invalid:(BOOL*)arg2 ;
-(void)setAttemptingConnection:(BOOL)arg1 ;
-(void)setAutomaticResponseLoading:(BOOL)arg1 ;
-(void)setHasEverReceivedResponse:(BOOL)arg1 ;
-(void)_reloadPlayerPathWithRoute:(id)arg1 ;
-(void)_connectionDidInvalidate:(id)arg1 ;
-(void)_connectionDidConnect:(id)arg1 ;
-(void)updateRoutePropertiesIfNeeded;
-(void)_connectionHasBecomeInvalid;
-(BOOL)allowsAutomaticResponseLoading;
-(BOOL)onScreen;
-(void)setProxyDelegate:(id<MediaControlsEndpointObserverDelegate>)arg1 ;
-(MPRequestResponseController *)requestController;
-(BOOL)hasEverReceivedResponse;
-(BOOL)isAttemptingConnection;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(BOOL)isAutomaticResponseLoading;
@end

