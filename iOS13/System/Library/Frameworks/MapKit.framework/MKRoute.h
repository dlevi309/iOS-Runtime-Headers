/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
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
-(NSString *)name;
-(unsigned long long)transportType;
-(double)distance;
-(NSArray *)advisoryNotices;
-(NSArray *)steps;
-(id)_initWithGEOComposedRoute:(id)arg1 ;
-(id)_geoComposedRoute;
-(double)expectedTravelTime;
-(MKPolyline *)polyline;
-(id)_maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

