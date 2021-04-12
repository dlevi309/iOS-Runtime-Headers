/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeConnectionFinder.h>

@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
-(BOOL)_isRoadEdgeEqual:(const SCD_Struct_GE83*)arg1 other:(const SCD_Struct_GE83*)arg2 ;
-(void)_findConnectedEdges:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
@end

