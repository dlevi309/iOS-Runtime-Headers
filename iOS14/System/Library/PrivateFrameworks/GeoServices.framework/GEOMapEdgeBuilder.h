/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	BOOL _buildAhead;
	BOOL _buildBehind;
	Matrix<float, 2, 1> _firstTilePoint;
	Matrix<float, 2, 1> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >* _tileKeysSeen;
	BOOL _searchDirection;
	unsigned long long _buildDirection;

}

@property (nonatomic,copy) id edgeHandler;                                   //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) unsigned long long buildDirection;              //@synthesize buildDirection=_buildDirection - In the implementation block
-(GEOMapAccess *)map;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)edgeHandler;
-(void)setEdgeHandler:(id)arg1 ;
-(BOOL)_findEdgeAhead;
-(BOOL)_findEdgeBehind;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(BOOL)arg3 ;
-(BOOL)_findNextEdge;
-(unsigned long long)buildDirection;
-(BOOL)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const Matrix<float, 2, 1>*)arg3 ;
-(id)_lastTile;
-(void)setBuildDirection:(unsigned long long)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(unsigned long long)_maxTileCount;
-(BOOL)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE36*)arg2 to:(const GEOCoarseLocationLatLng*)arg3 ;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)cancel;
-(void)buildEdge:(/*^block*/id)arg1 ;
@end

