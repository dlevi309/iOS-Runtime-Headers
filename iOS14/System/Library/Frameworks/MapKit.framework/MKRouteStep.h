/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOComposedRouteStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOComposedRouteStep* _geoComposedRouteStep;
	NSString* _instructions;
	unsigned long long _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (getter=_geoComposedRouteStep,nonatomic,readonly) GEOComposedRouteStep * geoComposedRouteStep;              //@synthesize geoComposedRouteStep=_geoComposedRouteStep - In the implementation block
@property (nonatomic,readonly) NSString * instructions;                                                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                                 //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned long long transportType;                                                      //@synthesize transportType=_transportType - In the implementation block
-(NSString *)instructions;
-(NSString *)notice;
-(double)distance;
-(unsigned long long)transportType;
-(MKPolyline *)polyline;
-(id)_geoComposedRouteStep;
-(id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4 ;
@end

