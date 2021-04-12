/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {

	unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> >* _piecesConsidered;

}
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE3)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
@end

