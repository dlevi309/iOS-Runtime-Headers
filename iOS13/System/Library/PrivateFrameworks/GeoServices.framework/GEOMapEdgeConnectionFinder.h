/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray, GEOVectorTile;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {

	GEOMapAccess* _map;
	GEOMapTileFinder* _tileFinder;
	NSMutableArray* _builders;
	GEOVectorTile* _tile;
	SCD_Struct_GE137* _junction;
	SCD_Struct_GE32 _coordinate;

}
-(void)cancel;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE137*)arg3 coordinate:(SCD_Struct_GE32)arg4 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
@end

