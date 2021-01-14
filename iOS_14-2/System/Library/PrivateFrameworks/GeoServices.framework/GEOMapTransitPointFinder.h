/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapTransitPointFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	GEOCoarseLocationLatLng _centerPoint;
	double _mapRadius;
	unsigned long long _pointID;
	unsigned long long _parentID;

}

@property (nonatomic,readonly) GEOMapAccess * map; 
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)_validatePoint:(SCD_Struct_GE35*)arg1 rect:(SCD_Struct_GE36)arg2 localSearch:(Box<float, 2>)arg3 validPointHandler:(/*^block*/id)arg4 ;
-(id)initWithMap:(id)arg1 approxLocation:(GEOCoarseLocationLatLng)arg2 pointID:(unsigned long long)arg3 ;
-(id)initWithMap:(id)arg1 approxLocation:(GEOCoarseLocationLatLng)arg2 parentID:(unsigned long long)arg3 ;
-(void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(/*^block*/id)arg2 accessPointHandler:(/*^block*/id)arg3 ;
-(GEOMapAccess *)map;
-(void)cancel;
@end

