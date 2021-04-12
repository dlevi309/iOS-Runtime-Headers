/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedRoute, MNCommuteDestinationSuggestion, GEODirectionsRequest, MNLocation, GEOComposedETARoute, GEOETATrafficUpdateResponse, NSDictionary, MNObserverHashTable, NSString, GEOComposedWaypoint;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying> {

	GEOComposedRoute* _nonRecommendedRoute;
	BOOL _invalid;
	BOOL _rerouting;
	MNCommuteDestinationSuggestion* _suggestion;
	GEOComposedRoute* _route;
	GEODirectionsRequest* _directionsRequest;
	MNLocation* _lastMatchedLocation;
	GEOComposedETARoute* _etaRoute;
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
@property (nonatomic,retain) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,retain) MNLocation * lastMatchedLocation;                         //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (readonly) BOOL canGetETARoute; 
@property (nonatomic,retain) GEOComposedETARoute * etaRoute;                           //@synthesize etaRoute=_etaRoute - In the implementation block
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
-(MNLocation *)lastLocation;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(double)remainingTime;
-(GEOComposedRoute *)route;
-(void)setRemainingTime:(double)arg1 ;
-(MNObserverHashTable *)observers;
-(id)init;
-(BOOL)invalid;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(long long)score;
-(NSDictionary *)scores;
-(GEOComposedETARoute *)etaRoute;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)uniqueIdentifier;
-(void)setScore:(long long)arg1 ;
-(MNCommuteDestinationSuggestion *)suggestion;
-(GEODirectionsRequest *)directionsRequest;
-(NSString *)name;
-(id)description;
-(void)setInvalid:(BOOL)arg1 ;
-(void)setObservers:(MNObserverHashTable *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(void)removeObserver:(id)arg1 ;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuggestion:(MNCommuteDestinationSuggestion *)arg1 ;
-(void)setScores:(NSDictionary *)arg1 ;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(MNLocation *)lastMatchedLocation;
-(void)setEtaRoute:(GEOComposedETARoute *)arg1 ;
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

