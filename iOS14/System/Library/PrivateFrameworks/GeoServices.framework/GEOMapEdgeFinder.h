/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	GEOCoarseLocationLatLng _centerPoint;
	double _mapRadius;
	/*^block*/id _edgeHandler;
	NSMutableSet* _edgeBuilders;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(GEOMapAccess *)map;
-(id)edgeHandler;
-(void)setEdgeHandler:(id)arg1 ;
-(void)cancel;
-(void)findEdges:(/*^block*/id)arg1 ;
@end

