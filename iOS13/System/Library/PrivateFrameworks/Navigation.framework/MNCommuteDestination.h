/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedRoute, MNCommuteDestinationSuggestion, GEOComposedRouteTraffic, GEODirectionsRequest, MNLocation, GEOETARoute, GEOETATrafficUpdateResponse, NSDictionary, MNObserverHashTable, NSString, GEOComposedWaypoint;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying> {

	GEOComposedRoute* _nonRecommendedRoute;
	BOOL _invalid;
	BOOL _rerouting;
	MNCommuteDestinationSuggestion* _suggestion;
	GEOComposedRoute* _route;
	GEOComposedRouteTraffic* _traffic;
	GEODirectionsRequest* _directionsRequest;
	MNLocation* _lastMatchedLocation;
	GEOETARoute* _etaRoute;
	GEOETATrafficUpdateResponse* _etaResponse;
	double _remainingTime;
	double _remainingDistance;
	MNLocation* _lastLocation;
	long long _score;
	NSDictionary* _scores;
	MNObserverHashTable* _observers;

}

@property (nonatomic,retain) GEOComposedRoute * nonRecommendedRoute; 
@property (nonatomic,retain) MNObserverHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                             //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) GEOComposedWaypoint * waypoint; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain) GEOComposedRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEOComposedRouteTraffic * traffic;                        //@synthesize traffic=_traffic - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,retain) MNLocation * lastMatchedLocation;                         //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (readonly) BOOL canGetETARoute; 
@property (nonatomic,retain) GEOETARoute * etaRoute;                                   //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * etaResponse;                //@synthesize etaResponse=_etaResponse - In the implementation block
@property (readonly) BOOL canCalculateETA; 
@property (assign,nonatomic) double remainingTime;                                     //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) double remainingDistance;                                 //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) BOOL rerouting;                                           //@synthesize rerouting=_rerouting - In the implementation block
@property (nonatomic,retain) MNLocation * lastLocation;                                //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) double geodesicDistance; 
@property (assign,nonatomic) long long score;                                          //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSDictionary * scores;                                      //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(long long)score;
-(void)setScore:(long long)arg1 ;
-(NSString *)shortDescription;
-(BOOL)invalid;
-(void)setObservers:(MNObserverHashTable *)arg1 ;
-(MNObserverHashTable *)observers;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(double)remainingDistance;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(GEOComposedRoute *)route;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(MNLocation *)lastLocation;
-(GEOComposedWaypoint *)waypoint;
-(GEODirectionsRequest *)directionsRequest;
-(void)setSuggestion:(MNCommuteDestinationSuggestion *)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(MNCommuteDestinationSuggestion *)suggestion;
-(GEOComposedRouteTraffic *)traffic;
-(NSDictionary *)scores;
-(void)setScores:(NSDictionary *)arg1 ;
-(void)setTraffic:(GEOComposedRouteTraffic *)arg1 ;
-(MNLocation *)lastMatchedLocation;
-(void)setEtaRoute:(GEOETARoute *)arg1 ;
-(GEOETARoute *)etaRoute;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(double)geodesicDistance;
-(void)setLastMatchedLocation:(MNLocation *)arg1 ;
-(BOOL)rerouting;
-(void)setRerouting:(BOOL)arg1 ;
-(GEOComposedRoute *)nonRecommendedRoute;
-(void)setNonRecommendedRoute:(GEOComposedRoute *)arg1 ;
-(BOOL)canGetETARoute;
-(BOOL)canCalculateETA;
-(void)updateFrom:(id)arg1 ;
@end

