/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEORouteHypothesizerUpdaterDelegate.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEORouteHypothesizerDelegate;
@class GEODirectionsRequestFeedback, GEOLocationShifter, GEOComposedWaypoint, NSDate, GEORouteHypothesisOld, GEOLocation, GEOETAUpdater, GEOETARoute, GEORouteAttributes, GEORouteHypothesizerUpdater, NSData, GEOComposedRoute, NSString;

@interface GEORouteHypothesizerOld : NSObject <GEORouteHypothesizerUpdaterDelegate, GEOETAUpdaterDelegate> {

	id<GEORouteHypothesizerDelegate> _delegate;
	/*^block*/id _handler;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocationShifter* _locationShifter;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	GEORouteHypothesisOld* _hypothesis;
	GEOLocation* _lastLocation;
	NSDate* _suggestedNextUpdateDate;
	NSDate* _lastETARequestDate;
	double _etaUpdateInterval;
	unsigned long long _etaUpdateFrequency;
	GEOETAUpdater* _etaUpdater;
	GEOETARoute* _liveETARoute;
	GEOETARoute* _baselineETARoute;
	GEORouteAttributes* _routeAttributes;
	GEORouteHypothesizerUpdater* _updater;
	NSData* _usualRouteData;

}

@property (assign,nonatomic,__weak) id<GEORouteHypothesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long etaUpdateFrequency;                         //@synthesize etaUpdateFrequency=_etaUpdateFrequency - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                       //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic; 
@property (nonatomic,readonly) BOOL supportsDirections; 
@property (nonatomic,readonly) GEOComposedWaypoint * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                           //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                                      //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                        //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedNextUpdateDate;                            //@synthesize suggestedNextUpdateDate=_suggestedNextUpdateDate - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<GEORouteHypothesizerDelegate>)delegate;
-(void)setDelegate:(id<GEORouteHypothesizerDelegate>)arg1 ;
-(GEOComposedWaypoint *)source;
-(GEOComposedWaypoint *)destination;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(void)_commonInit;
-(GEODirectionsRequestFeedback *)feedback;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEOComposedRoute *)route;
-(BOOL)supportsLiveTraffic;
-(BOOL)supportsDirections;
-(void)_updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(void)_createUpdaterWithStartingLocation:(id)arg1 ;
-(void)_updateETAWithRouteMatch:(id)arg1 ;
-(void)_updateLocationAndETAUpdateInterval;
-(void)_refreshETAWithRouteMatch:(id)arg1 ;
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4 ;
-(void)addRouteAttributes:(id)arg1 ;
-(void)updateLocation:(id)arg1 hypothesisHandler:(/*^block*/id)arg2 ;
-(NSDate *)suggestedNextUpdateDate;
-(unsigned long long)etaUpdateFrequency;
-(void)setEtaUpdateFrequency:(unsigned long long)arg1 ;
@end

