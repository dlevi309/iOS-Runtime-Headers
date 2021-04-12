/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE92 _fromNodeID;
	SCD_Struct_GE92 _toNodeID;
	unsigned long long _lineID;
	GEOCoarseLocationLatLng _fromNodeLocation;
	GEOCoarseLocationLatLng _toNodeLocation;
	int _toNodeSignificance;
	Color<float, 4, geo::ColorSpace::Linear> _lineColor;
	SCD_Struct_GE36 _originalBounds;

}

@property (nonatomic,readonly) Color<float lineColor;                   //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE92 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE92 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;               //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                  //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 stepIndex:(unsigned long long)arg7 toNodeSignificance:(int)arg8 transitLineColor:(id)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11 fallbackStartCoordinate:(GEOCoarseLocationLatLng)arg12 fallbackEndCoordinate:(GEOCoarseLocationLatLng)arg13 ;
-(id)initWithCoordinates:(id)arg1 segment:(id)arg2 segmentIndex:(unsigned long long)arg3 steps:(id)arg4 startCoordinateIndex:(unsigned)arg5 coordinateCount:(unsigned)arg6 stepIndex:(unsigned long long)arg7 toNodeSignificance:(int)arg8 transitLineColor:(id)arg9 startDistance:(double)arg10 lengthScaleFactor:(double)arg11 decoderData:(id)arg12 ;
-(unsigned long long)lineID;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(NSString *)description;
-(Color<float)lineColor;
-(SCD_Struct_GE92)toNodeID;
-(BOOL)isTransfer;
-(id)_hallForStop:(id)arg1 withDecoderData:(id)arg2 ;
-(SCD_Struct_GE92)fromNodeID;
-(void)_initSupportWithDecoderData:(id)arg1 step:(id)arg2 toNodeSignificance:(int)arg3 transitLineColor:(id)arg4 ;
-(id)_stationForHall:(id)arg1 withDecoderData:(id)arg2 ;
-(int)toNodeSignificance;
@end

