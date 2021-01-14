/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(unsigned long long)coordinateCount;
-(double)distanceFromCoordinate:(GEOCoarseLocationLatLng)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;

@end

