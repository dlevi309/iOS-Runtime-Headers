/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(void)dealloc;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)initWithMap:(id)arg1 roadFeature:(SCD_Struct_GE202*)arg2 shouldFlip:(BOOL)arg3 ;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE32)arg2 radius:(double)arg3 ;
-(unsigned long long)_connectionTypeForEdge:(SCD_Struct_GE83*)arg1 points:(SCD_Struct_GE200*)arg2 connectingTilePoint:(Matrix<float, 2, 1>)arg3 ;
@end

