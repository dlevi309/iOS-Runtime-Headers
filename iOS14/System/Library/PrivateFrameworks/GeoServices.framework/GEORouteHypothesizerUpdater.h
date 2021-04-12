/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEORouteHypothesizerUpdaterDelegate;
@class GEODirectionsRequestFeedback, GEOComposedWaypoint, GEODirectionsRequest, GEORouteAttributes, GEOCommonOptions, GEOLocation, GEOComposedRoute, GEORouteMatch, GEOMapRegion, NSMutableArray, NSDate;

@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding> {

	id<GEORouteHypothesizerUpdaterDelegate> _delegate;
	GEODirectionsRequestFeedback* _feedback;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	GEODirectionsRequest* _currentRequest;
	GEORouteAttributes* _routeAttributes;
	GEOCommonOptions* _commonOptions;
	GEOLocation* _originLocation;
	GEOLocation* _lastMatchedLocation;
	GEOComposedRoute* _route;
	GEORouteMatch* _routeMatch;
	BOOL _isTraveling;
	BOOL _hasArrived;
	GEOMapRegion* _arrivalMapRegion;
	double _score;
	NSMutableArray* _rerouteEntries;
	BOOL _shouldThrottleReroutes;
	NSDate* _lastRerouteDate;
	unsigned long long _numThrottledReroutes;
	os_unfair_lock_s _requestLock;
	BOOL _isNavd;

}

@property (assign,nonatomic,__weak) id<GEORouteHypothesizerUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                               //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * route;                                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                                         //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) double score;                                                       //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL isTraveling;                                                   //@synthesize isTraveling=_isTraveling - In the implementation block
@property (nonatomic,readonly) BOOL hasArrived;                                                    //@synthesize hasArrived=_hasArrived - In the implementation block
@property (assign,nonatomic) BOOL isNavd;                                                          //@synthesize isNavd=_isNavd - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedRoute *)route;
-(int)_transportType;
-(id)init;
-(BOOL)isNavd;
-(id<GEORouteHypothesizerUpdaterDelegate>)delegate;
-(double)score;
-(GEORouteMatch *)routeMatch;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GEORouteHypothesizerUpdaterDelegate>)arg1 ;
-(BOOL)_checkForArrival:(id)arg1 routeMatch:(id)arg2 ;
-(id)description;
-(BOOL)isTraveling;
-(id)routeMatchForLocation:(id)arg1 ;
-(void)_updateScoreForLocation:(id)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)cancelCurrentRequest;
-(void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)startUpdatingFromLocation:(id)arg1 usualRouteData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasArrived;
-(void)setIsNavd:(BOOL)arg1 ;
@end

