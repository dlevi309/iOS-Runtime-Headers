/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {

	unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> >* _roadsConsidered;

}
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(void)dealloc;
@end

