/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	unsigned long long _transitID;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(SCD_Struct_GE32)arg3 ;
-(void)findTransitGeometryWithHandler:(/*^block*/id)arg1 ;
@end

