/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE32 _centerPoint;
	double _mapRadius;
	/*^block*/id _edgeHandler;
	NSMutableSet* _edgeBuilders;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(GEOMapAccess *)map;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE32)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(void)setEdgeHandler:(id)arg1 ;
-(id)edgeHandler;
-(void)findEdges:(/*^block*/id)arg1 ;
@end

