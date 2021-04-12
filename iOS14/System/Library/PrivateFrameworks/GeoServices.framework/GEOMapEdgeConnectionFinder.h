/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_GE139* _junction;
	GEOCoarseLocationLatLng _coordinate;

}
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE139*)arg3 coordinate:(GEOCoarseLocationLatLng)arg4 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
-(void)cancel;
@end

