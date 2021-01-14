/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOComposedRoute, MKRoutePolyline, NSArray, NSString, MKPolyline;

@interface MKRoute : NSObject {

	GEOComposedRoute* _geoComposedRoute;
	MKRoutePolyline* _polyline;
	NSArray* _steps;

}

@property (getter=_geoComposedRoute,nonatomic,readonly) GEOComposedRoute * geoComposedRoute;              //@synthesize geoComposedRoute=_geoComposedRoute - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double expectedTravelTime; 
@property (nonatomic,readonly) unsigned long long transportType; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                     //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) NSArray * steps;                                                           //@synthesize steps=_steps - In the implementation block
-(NSArray *)steps;
-(double)distance;
-(NSArray *)advisoryNotices;
-(unsigned long long)transportType;
-(double)expectedTravelTime;
-(NSString *)name;
-(MKPolyline *)polyline;
-(id)_geoComposedRoute;
-(id)_initWithGEOComposedRoute:(id)arg1 ;
@end

