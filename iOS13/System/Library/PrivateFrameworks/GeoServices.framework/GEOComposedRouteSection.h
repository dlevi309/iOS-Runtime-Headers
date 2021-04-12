/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteLeg, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject {

	unsigned _startPointIndex;
	unsigned _pointCount;
	SCD_Struct_GE187* _points;
	int _transportType;
	GEOComposedRouteLeg* _composedRouteLeg;
	GEOComposedRouteStep* _composedRouteStep;
	unsigned long long _composedRouteLegIndex;
	SCD_Struct_GE188 _bounds;
	SCD_Struct_GE40 _overlayBounds;
	unsigned long long _finalStepIndex;
	double _startDistance;
	double _lengthScaleFactor;

}

@property (nonatomic,readonly) unsigned startPointIndex;                                     //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount;                                          //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE187* points;                                     //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE188 bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,__weak,readonly) GEOComposedRouteLeg * composedRouteLeg;                //@synthesize composedRouteLeg=_composedRouteLeg - In the implementation block
@property (nonatomic,__weak,readonly) GEOComposedRouteStep * composedRouteStep;              //@synthesize composedRouteStep=_composedRouteStep - In the implementation block
@property (nonatomic,readonly) unsigned long long composedRouteLegIndex;                     //@synthesize composedRouteLegIndex=_composedRouteLegIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long finalStepIndex;                            //@synthesize finalStepIndex=_finalStepIndex - In the implementation block
@property (nonatomic,readonly) double startDistance;                                         //@synthesize startDistance=_startDistance - In the implementation block
@property (assign,nonatomic) double lengthScaleFactor;                                       //@synthesize lengthScaleFactor=_lengthScaleFactor - In the implementation block
@property (nonatomic,readonly) int transportType;                                            //@synthesize transportType=_transportType - In the implementation block
-(void)dealloc;
-(id)description;
-(SCD_Struct_GE188)bounds;
-(unsigned)pointCount;
-(int)transportType;
-(SCD_Struct_GE187*)points;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned)startPointIndex;
-(unsigned)endPointIndex;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 bounds:(SCD_Struct_GE188)arg4 transportType:(int)arg5 finalStepIndex:(unsigned long long)arg6 startDistance:(double)arg7 lengthScaleFactor:(double)arg8 ;
-(void)_initStepForRoute:(id)arg1 ;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 transportType:(int)arg4 finalStepIndex:(unsigned long long)arg5 fallbackStartCoordinate:(SCD_Struct_GE32)arg6 fallbackEndCoordinate:(SCD_Struct_GE32)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 ;
-(BOOL)isTransfer;
-(GEOComposedRouteLeg *)composedRouteLeg;
-(GEOComposedRouteStep *)composedRouteStep;
-(unsigned long long)composedRouteLegIndex;
-(unsigned long long)finalStepIndex;
-(double)startDistance;
-(double)lengthScaleFactor;
-(void)setLengthScaleFactor:(double)arg1 ;
@end

