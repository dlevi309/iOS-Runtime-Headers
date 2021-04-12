/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(GEOMapAccess *)map;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)initWithMap:(id)arg1 ;
-(void)setBuildDirection:(unsigned long long)arg1 ;
-(void)buildEdge:(/*^block*/id)arg1 ;
-(BOOL)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE40*)arg2 to:(const SCD_Struct_GE32*)arg3 ;
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
-(void)setEdgeHandler:(id)arg1 ;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(BOOL)arg3 ;
-(BOOL)_findEdgeAhead;
-(BOOL)_findEdgeBehind;
-(BOOL)_findNextEdge;
-(BOOL)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const Matrix<float, 2, 1>*)arg3 ;
-(id)edgeHandler;
-(unsigned long long)buildDirection;
@end

