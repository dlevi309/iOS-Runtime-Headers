/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {

	unsigned _startPointIndex;
	GEOCoarseLocationLatLng _startCoordinate;
	GEOCoarseLocationLatLng _endCoordinate;
	GEOComposedRouteStep* _step;

}

@property (assign,nonatomic) unsigned startPointIndex;                             //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * step;                          //@synthesize step=_step - In the implementation block
-(unsigned)startPointIndex;
-(double)distanceFromCoordinate:(GEOCoarseLocationLatLng)arg1 outCoordinateOnSegment:(GEOCoarseLocationLatLng*)arg2 outRouteCoordinate:(PolylineCoordinate*)arg3 ;
-(id)description;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(GEOComposedRouteStep *)step;
-(void)setStartPointIndex:(unsigned)arg1 ;
-(void)setStartCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setEndCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng)endCoordinate;
-(GEOCoarseLocationLatLng)startCoordinate;
@end

