/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject {

	SCD_Struct_GE32 _coordinate;
	SCD_Struct_GE200 _tilePoint;
	GEOVectorTile* _tile;

}

@property (nonatomic,readonly) GEOVectorTile * tile; 
@property (nonatomic,readonly) SCD_Struct_GE200 tilePoint; 
@property (nonatomic,readonly) SCD_Struct_GE137* connectivityJunction; 
@property (nonatomic,readonly) BOOL isOnTileBorder; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
+(id)junctionForRoadFeature:(SCD_Struct_GE202*)arg1 startJunction:(BOOL)arg2 ;
+(BOOL)_isPointOnTileBorder:(SCD_Struct_GE200)arg1 ;
-(SCD_Struct_GE32)coordinate;
-(GEOVectorTile *)tile;
-(SCD_Struct_GE137*)connectivityJunction;
-(BOOL)isOnTileBorder;
-(SCD_Struct_GE200)tilePoint;
@end

