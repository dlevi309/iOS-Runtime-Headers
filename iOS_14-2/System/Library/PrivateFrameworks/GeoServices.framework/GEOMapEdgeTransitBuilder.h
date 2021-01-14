/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {

	deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece> >* _pieces;

}
-(id)initWithMap:(id)arg1 firstPiece:(const TransitEdgePiece*)arg2 ;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_lastTile;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
@end

