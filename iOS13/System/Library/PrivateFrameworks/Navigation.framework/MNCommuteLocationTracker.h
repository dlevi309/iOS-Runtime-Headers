/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEOMapServiceTicket, GEODirectionServiceTicket;
@class GEOComposedWaypoint, MNLocation, MNActiveRouteInfo, GEONavigationMapMatcher, GEOETAUpdater, MNNavigationTraceManager, MNCommuteDestinationSuggestion, GEOComposedRoute, NSString;

@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate> {

	GEOComposedWaypoint* _lastOrigin;
	MNLocation* _lastLocation;
	MNActiveRouteInfo* _routeInfo;
	id<GEOMapServiceTicket> _currentLocationTicket;
	id<GEODirectionServiceTicket> _directionsRequestTicket;
	GEONavigationMapMatcher* _mapMatcher;
	GEOETAUpdater* _etaUpdater;
	MNNavigationTraceManager* _traceManager;
	BOOL _routingInProgress;
	unsigned long long _destinationID;
	MNCommuteDestinationSuggestion* _suggestion;

}

@property (assign,nonatomic) BOOL routingInProgress;                                     //@synthesize routingInProgress=_routingInProgress - In the implementation block
@property (nonatomic,readonly) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (assign,nonatomic) unsigned long long destinationID;                           //@synthesize destinationID=_destinationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(GEOComposedWaypoint *)destination;
-(int)transportType;
-(id)_routeAttributes;
-(GEOComposedRoute *)route;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(MNCommuteDestinationSuggestion *)suggestion;
-(void)updateETA;
-(void)stopTracking;
-(void)updateLocation:(id)arg1 ;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)_setAuditToken:(id)arg1 ;
-(BOOL)routingInProgress;
-(void)setRoutingInProgress:(BOOL)arg1 ;
-(void)_handleWaypoint:(id)arg1 fromLocation:(id)arg2 error:(id)arg3 ;
-(void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2 ;
-(id)_directionsRequestFeedback;
-(void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3 ;
-(void)_requestRouteFromLocation:(id)arg1 ;
-(BOOL)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 traceManager:(id)arg2 ;
@end

