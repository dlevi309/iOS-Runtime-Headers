/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEODirectionsResponse, MKMapItem, NSArray, GEOComposedRoute, NSURL, NSString;

@interface MKDirectionsResponse : NSObject {

	GEODirectionsResponse* _geoResponse;
	MKMapItem* _source;
	MKMapItem* _destination;
	NSArray* _routes;
	GEOComposedRoute* _geoComposedRoute;

}

@property (nonatomic,retain,readonly) NSURL * _mapsURL; 
@property (nonatomic,retain,readonly) GEODirectionsResponse * _geoResponse; 
@property (nonatomic,retain,readonly) GEOComposedRoute * geoComposedRoute;               //@synthesize geoComposedRoute=_geoComposedRoute - In the implementation block
@property (nonatomic,retain,readonly) NSString * _incidentDescription; 
@property (nonatomic,readonly) double _typicalTrafficRatio; 
@property (nonatomic,readonly) MKMapItem * source;                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                         //@synthesize routes=_routes - In the implementation block
+(id)_responseWithGEODirectionsRouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 error:(id*)arg6 ;
-(MKMapItem *)source;
-(MKMapItem *)destination;
-(NSURL *)_mapsURL;
-(id)_route;
-(NSArray *)routes;
-(NSString *)_incidentDescription;
-(id)_initWithGEORouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(double)_typicalTrafficRatio;
-(GEODirectionsResponse *)_geoResponse;
-(GEOComposedRoute *)geoComposedRoute;
@end

