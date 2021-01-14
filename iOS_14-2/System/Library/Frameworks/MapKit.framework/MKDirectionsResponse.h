/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEODirectionsResponse, MKMapItem, NSArray, NSURL, NSString;

@interface MKDirectionsResponse : NSObject {

	GEODirectionsResponse* _geoResponse;
	MKMapItem* _source;
	MKMapItem* _destination;
	NSArray* _routes;

}

@property (nonatomic,retain,readonly) NSURL * _mapsURL; 
@property (nonatomic,retain,readonly) GEODirectionsResponse * _geoResponse; 
@property (nonatomic,retain,readonly) NSString * _incidentDescription; 
@property (nonatomic,readonly) MKMapItem * source;                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                         //@synthesize routes=_routes - In the implementation block
+(id)_responseWithGEODirectionsRouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 error:(id*)arg6 ;
-(NSArray *)routes;
-(NSURL *)_mapsURL;
-(GEODirectionsResponse *)_geoResponse;
-(id)_initWithGEORouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(NSString *)_incidentDescription;
-(MKMapItem *)destination;
-(MKMapItem *)source;
@end

