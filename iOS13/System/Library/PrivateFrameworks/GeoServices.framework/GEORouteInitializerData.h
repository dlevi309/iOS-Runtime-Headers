/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, GEODirectionsResponse, GEOETATrafficUpdateResponse, GEORouteAttributes, GEODirectionsRequest;

@interface GEORouteInitializerData : NSObject <NSSecureCoding> {

	NSArray* _waypoints;
	GEODirectionsResponse* _directionsResponse;
	GEOETATrafficUpdateResponse* _etaTrafficUpdateResponse;
	GEORouteAttributes* _routeAttributes;
	GEODirectionsRequest* _directionsRequest;

}

@property (nonatomic,readonly) NSArray * waypoints;                                                 //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;                          //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) GEOETATrafficUpdateResponse * etaTrafficUpdateResponse;              //@synthesize etaTrafficUpdateResponse=_etaTrafficUpdateResponse - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                            //@synthesize directionsRequest=_directionsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEODirectionsResponse *)directionsResponse;
-(GEOETATrafficUpdateResponse *)etaTrafficUpdateResponse;
-(NSArray *)waypoints;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 ;
-(GEODirectionsRequest *)directionsRequest;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 directionsRequest:(id)arg4 ;
-(id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 ETATrafficUpdateResponse:(id)arg3 ;
@end

