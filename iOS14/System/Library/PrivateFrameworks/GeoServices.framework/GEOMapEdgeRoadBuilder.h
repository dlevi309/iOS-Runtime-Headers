/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(unsigned long long)_connectionTypeForEdge:(SCD_Struct_GE86*)arg1 points:(SCD_Struct_GE204*)arg2 connectingTilePoint:(Matrix<float, 2, 1>)arg3 ;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_lastTile;
-(id)initWithMap:(id)arg1 roadFeature:(SCD_Struct_GE206*)arg2 shouldFlip:(BOOL)arg3 ;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)dealloc;
@end

