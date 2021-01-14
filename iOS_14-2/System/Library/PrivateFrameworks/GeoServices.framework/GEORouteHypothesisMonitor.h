/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_group;
@class GEODirectionsRequestFeedback, GEOComposedWaypoint, GEOLocation, NSDate, GEORouteHypothesis, NSObject, GEOETAUpdater, GEOComposedETARoute, GEORouteAttributes, GEOCommonOptions, GEOMapServiceTraits, GEORouteHypothesizerAnalyticsStore, GEONavdClientInfo, GEOComposedRoute, geo_isolater, GEODirectionsRequest, NSMutableArray, GEORouteMatch, GEOMapRegion, NSString, NSData;

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding> {

	/*^block*/id _handler;
	GEODirectionsRequestFeedback* _feedback;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	GEOLocation* _originLocation;
	int _transportType;
	NSDate* _arrivalDate;
	GEORouteHypothesis* _hypothesis;
	GEOLocation* _lastLocation;
	NSObject*<OS_dispatch_group> _etaUpdaterDispatchGroup;
	GEOETAUpdater* _liveETAUpdater;
	GEOETAUpdater* _baselineETAUpdater;
	GEOComposedETARoute* _liveETARoute;
	GEOComposedETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEOCommonOptions* _commonOptions;
	GEOMapServiceTraits* _traits;
	GEORouteHypothesizerAnalyticsStore* _analyticsStore;
	GEONavdClientInfo* _clientInfo;
	GEOComposedRoute* _route;
	geo_isolater* _requestIsolater;
	GEODirectionsRequest* _currentRequest;
	BOOL _needReroute;
	NSMutableArray* _rerouteEntries;
	GEORouteMatch* _routeMatch;
	GEOLocation* _lastMatchedLocation;
	BOOL _hasArrived;
	BOOL _isTraveling;
	double _travelScore;
	GEOMapRegion* _arrivalMapRegion;
	NSString* _traceName;
	NSData* _sessionState;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSDate * arrivalDate;                               //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;               //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * hypothesis;                    //@synthesize hypothesis=_hypothesis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)monitorWithSource:(id)arg1 toDestination:(id)arg2 traceName:(id)arg3 traits:(id)arg4 routeAttributes:(id)arg5 clientInfo:(id)arg6 ;
+(void)setUserPreferencesProvider:(id)arg1 ;
+(id)serverFormattedStringFormatter;
+(void)setServerFormattedStringFormatter:(id)arg1 ;
+(id)routeAttributesForTransportType:(int)arg1 withArrivalDate:(id)arg2 ;
+(id)userPreferencesProvider;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(NSString *)routeName;
-(GEODirectionsRequestFeedback *)feedback;
-(void)stopMonitoring;
-(GEORouteAttributes *)routeAttributes;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_fetchETAWithRouteMatch:(id)arg1 ;
-(int)transportType;
-(void)_recalculateETAWithRouteMatch:(id)arg1 ;
-(NSDate *)arrivalDate;
-(NSString *)description;
-(GEORouteHypothesis *)hypothesis;
-(id)_newETAUpdater;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 traceName:(id)arg3 traits:(id)arg4 routeAttributes:(id)arg5 clientInfo:(id)arg6 ;
-(void)callHandlerIvar;
-(BOOL)supportsDirections;
-(void)_updateLocation:(id)arg1 allowServer:(BOOL)arg2 ;
-(BOOL)_hasInitialRoute;
-(BOOL)_isNavigating;
-(BOOL)_isNavigatingToDestination;
-(void)recordETAUpdatesAfterEventStart;
-(void)_updateRouteMatchETAAndTravelState;
-(void)_showDebugAlert;
-(void)_executeBlockAccessingCurrentRequest:(/*^block*/id)arg1 ;
-(void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(BOOL)arg3 ;
-(void)_routeRequestFailed:(id)arg1 ;
-(id)navDestination;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(void)updateLocation:(id)arg1 allowServer:(BOOL)arg2 hypothesisHandler:(/*^block*/id)arg3 ;
-(void)clientDisplayedUINotification:(unsigned long long)arg1 ;
-(void)_allETAUpdaterRequestsFinished;
-(void)travelStateChanged;
-(id)routeMatchForLocation:(id)arg1 ;
-(void)_updateScoreForLocation:(id)arg1 ;
-(void)cancelCurrentRequest;
-(void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2 ;
-(BOOL)supportsLiveTraffic;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterRequestCompleted:(id)arg1 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 etaRoute:(id)arg3 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)checkRouteForLocation:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)dealloc;
-(GEOComposedWaypoint *)source;
@end

