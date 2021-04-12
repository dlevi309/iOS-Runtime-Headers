/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapTransitPointFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE32 _centerPoint;
	double _mapRadius;
	unsigned long long _pointID;
	unsigned long long _parentID;

}

@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(GEOMapAccess *)map;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE32)arg2 radius:(double)arg3 ;
-(void)_validatePoint:(SCD_Struct_GE39*)arg1 rect:(SCD_Struct_GE40)arg2 localSearch:(Box<float, 2>)arg3 validPointHandler:(/*^block*/id)arg4 ;
-(id)initWithMap:(id)arg1 approxLocation:(SCD_Struct_GE32)arg2 pointID:(unsigned long long)arg3 ;
-(id)initWithMap:(id)arg1 approxLocation:(SCD_Struct_GE32)arg2 parentID:(unsigned long long)arg3 ;
-(void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(/*^block*/id)arg2 accessPointHandler:(/*^block*/id)arg3 ;
@end

