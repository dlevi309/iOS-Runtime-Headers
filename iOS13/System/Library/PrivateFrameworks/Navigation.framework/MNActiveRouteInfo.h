/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRoute, GEOETARoute, GEOETATrafficUpdateResponse, NSDate, GEOComposedRouteTraffic, NSUUID, GEOTransitRouteUpdateRequest;

@interface MNActiveRouteInfo : NSObject <NSSecureCoding> {

	GEOComposedRoute* _route;
	GEOETARoute* _etaRoute;
	GEOETATrafficUpdateResponse* _etaResponse;
	NSDate* _displayETA;
	unsigned long long _displayRemainingMinutes;
	GEOComposedRouteTraffic* _traffic;
	unsigned long long _alternateRouteIndex;

}

@property (nonatomic,readonly) NSUUID * routeID; 
@property (nonatomic,retain) GEOComposedRoute * route;                                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEOETARoute * etaRoute;                                                  //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * etaResponse;                               //@synthesize etaResponse=_etaResponse - In the implementation block
@property (nonatomic,retain) NSDate * displayETA;                                                     //@synthesize displayETA=_displayETA - In the implementation block
@property (assign,nonatomic) unsigned long long displayRemainingMinutes;                              //@synthesize displayRemainingMinutes=_displayRemainingMinutes - In the implementation block
@property (nonatomic,retain) GEOComposedRouteTraffic * traffic;                                       //@synthesize traffic=_traffic - In the implementation block
@property (assign,nonatomic) unsigned long long alternateRouteIndex;                                  //@synthesize alternateRouteIndex=_alternateRouteIndex - In the implementation block
@property (nonatomic,readonly) GEOTransitRouteUpdateRequest * transitRouteUpdateRequest; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)routeID;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(GEOTransitRouteUpdateRequest *)transitRouteUpdateRequest;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(GEOComposedRouteTraffic *)traffic;
-(void)setTraffic:(GEOComposedRouteTraffic *)arg1 ;
-(void)setEtaRoute:(GEOETARoute *)arg1 ;
-(GEOETARoute *)etaRoute;
-(void)setAlternateRouteIndex:(unsigned long long)arg1 ;
-(id)initWithRoute:(id)arg1 traffic:(id)arg2 ;
-(id)initWithRoute:(id)arg1 trafficRoute:(id)arg2 routeInitalizerData:(id)arg3 ;
-(NSDate *)displayETA;
-(unsigned long long)displayRemainingMinutes;
-(unsigned long long)alternateRouteIndex;
-(void)setDisplayETA:(NSDate *)arg1 ;
-(void)setDisplayRemainingMinutes:(unsigned long long)arg1 ;
-(void)updateWithETARoute:(id)arg1 offsetInMeters:(double)arg2 ;
@end

