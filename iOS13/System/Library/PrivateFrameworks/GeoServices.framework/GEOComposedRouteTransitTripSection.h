/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE68 _fromNodeID;
	SCD_Struct_GE68 _toNodeID;
	unsigned long long _lineID;
	SCD_Struct_GE32 _fromNodeLocation;
	SCD_Struct_GE32 _toNodeLocation;
	int _toNodeSignificance;
	Color<float, 4, geo::ColorSpace::Linear> _lineColor;
	SCD_Struct_GE40 _originalBounds;

}

@property (nonatomic,readonly) Color<float lineColor;                   //@synthesize lineColor=_lineColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE68 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE68 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;               //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                  //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
-(NSString *)description;
-(Color<float)lineColor;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 fallbackStartCoordinate:(SCD_Struct_GE32)arg10 fallbackEndCoordinate:(SCD_Struct_GE32)arg11 ;
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(void)initSupportWithRoute:(id)arg1 step:(id)arg2 toNodeSignificance:(int)arg3 currentTransitLineColor:(id)arg4 ;
-(SCD_Struct_GE68)fromNodeID;
-(SCD_Struct_GE68)toNodeID;
-(int)toNodeSignificance;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 ;
@end

