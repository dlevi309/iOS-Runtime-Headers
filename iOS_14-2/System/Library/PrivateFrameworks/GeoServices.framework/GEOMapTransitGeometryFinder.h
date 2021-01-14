/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	unsigned long long _transitID;

}
-(id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(void)findTransitGeometryWithHandler:(/*^block*/id)arg1 ;
-(void)cancel;
@end

