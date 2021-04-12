/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOSnappedRouteEdge : NSObject {

	SCD_Struct_GE40 _localBounds;
	shared_ptr<geo::MapEdgeRoad>* _mapEdge;
	vector<GEOPosition2f, std::__1::allocator<GEOPosition2f> >* _points;
	vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> >* _routeOffsets;
	unsigned long long _mapEdgeOffset;
	BOOL _clippedFront;
	BOOL _clippedBack;

}

@property (nonatomic,readonly) shared_ptr<geo::MapEdgeRoad>* mapEdge;              //@synthesize mapEdge=_mapEdge - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE74* feature; 
@property (nonatomic,readonly) SCD_Struct_GE38* points; 
@property (nonatomic,readonly) unsigned long long pointCount; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetA; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetB; 
@property (nonatomic,readonly) PolylineCoordinate* routeOffsets; 
@property (nonatomic,readonly) unsigned long long mapEdgeOffset;                   //@synthesize mapEdgeOffset=_mapEdgeOffset - In the implementation block
@property (nonatomic,readonly) BOOL clippedFront;                                  //@synthesize clippedFront=_clippedFront - In the implementation block
@property (nonatomic,readonly) BOOL clippedBack;                                   //@synthesize clippedBack=_clippedBack - In the implementation block
-(id)description;
-(unsigned long long)pointCount;
-(SCD_Struct_GE74*)feature;
-(SCD_Struct_GE38*)points;
-(PolylineCoordinate)routeOffsetA;
-(PolylineCoordinate)routeOffsetB;
-(id)initWithRoadPath:(const RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >*)arg1 sectionRect:(const SCD_Struct_GE40*)arg2 ;
-(void)calculateRouteOffsetsBetweenA:(PolylineCoordinate)arg1 andB:(PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4 ;
-(PolylineCoordinate*)routeOffsets;
-(shared_ptr<geo::MapEdgeRoad>*)mapEdge;
-(unsigned long long)mapEdgeOffset;
-(BOOL)clippedFront;
-(BOOL)clippedBack;
@end

