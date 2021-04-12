/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	SCD_Struct_GE204 _tilePoint;
	GEOVectorTile* _tile;

}

@property (nonatomic,readonly) GEOVectorTile * tile; 
@property (nonatomic,readonly) SCD_Struct_GE204 tilePoint; 
@property (nonatomic,readonly) SCD_Struct_GE139* connectivityJunction; 
@property (nonatomic,readonly) BOOL isOnTileBorder; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
+(BOOL)_isPointOnTileBorder:(SCD_Struct_GE204)arg1 ;
+(id)junctionForRoadFeature:(SCD_Struct_GE206*)arg1 startJunction:(BOOL)arg2 ;
-(GEOVectorTile *)tile;
-(GEOCoarseLocationLatLng)coordinate;
-(SCD_Struct_GE139*)connectivityJunction;
-(BOOL)isOnTileBorder;
-(SCD_Struct_GE204)tilePoint;
@end

