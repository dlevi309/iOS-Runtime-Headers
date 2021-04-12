/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOETAUpdaterDelegate;
@class NSString, GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, GEOComposedETARoute, NSTimer, NSData, GEOCommonOptions, GEOApplicationAuditToken;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	GEOComposedETARoute* _etaRoute;
	long long _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	BOOL _shouldUpdateTrafficOnRoute;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	unsigned long long _maxAlternateRoutesCount;
	NSData* _directionsResponseID;
	GEOCommonOptions* _commonOptions;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,readonly) BOOL requestInProgress; 
@property (assign,nonatomic,__weak) id<GEOETAUpdaterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                              //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                   //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                      //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                        //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTrafficOnRoute;                         //@synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute - In the implementation block
@property (assign,nonatomic) double requestInterval;                                  //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                          //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(id)_updateOrCreateRequest:(id)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(GEOComposedRoute *)route;
-(void)_updateRequest:(id)arg1 ;
-(void)cancelRequest;
-(unsigned long long)maxAlternateRoutesCount;
-(double)requestInterval;
-(id)init;
-(id)currentStep;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)_trafficRequest:(id)arg1 finished:(id)arg2 ;
-(void)requestUpdate;
-(id<GEOETAUpdaterDelegate>)delegate;
-(GEORouteMatch *)routeMatch;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)startUpdateRequests;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(double)_calculateNextTransitionTime;
-(BOOL)shouldUpdateTrafficOnRoute;
-(void)stopUpdateRequests;
-(void)_sendRequest:(id)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(void)_continueUpdateRequests;
-(NSString *)requestingAppIdentifier;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(void)_addRouteAttributesToRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)allowRequests;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(void)setRequestInterval:(double)arg1 ;
-(void)reset;
-(void)_clearTimer;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(double)debugTimeWindowDuration;
-(void)setShouldUpdateTrafficOnRoute:(BOOL)arg1 ;
-(BOOL)shouldUseConditionalRequest;
-(GEOLocation *)userLocation;
-(void)setAllowRequests:(BOOL)arg1 ;
-(BOOL)_shouldStartConditionalETARequest;
-(void)_startConditionalConnectionETARequest;
-(double)_currentTime;
-(BOOL)requestInProgress;
-(GEOComposedWaypoint *)destination;
-(void)dealloc;
@end

