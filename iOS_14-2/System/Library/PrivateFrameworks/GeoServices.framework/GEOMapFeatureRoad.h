/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine {

	SCD_Struct_GE77* _feature;
	unsigned long long _roadID;
	GEOMapFeatureJunction* _junctionA;
	GEOMapFeatureJunction* _junctionB;
	BOOL _checkedJunctionA;
	BOOL _checkedJunctionB;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE77* feature; 
@property (nonatomic,readonly) unsigned long long featureIndex; 
@property (nonatomic,readonly) BOOL isFlipped; 
@property (nonatomic,readonly) unsigned long long roadID; 
@property (nonatomic,readonly) GEOMapFeatureJunction * startJunction; 
@property (nonatomic,readonly) GEOMapFeatureJunction * endJunction; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@property (nonatomic,readonly) int travelDirection; 
@property (nonatomic,readonly) long long laneCount; 
@property (nonatomic,readonly) double roadWidth; 
@property (nonatomic,readonly) unsigned long long speedLimit; 
@property (nonatomic,readonly) BOOL speedLimitIsMPH; 
@property (nonatomic,readonly) BOOL isDrivable; 
@property (nonatomic,readonly) BOOL isWalkable; 
@property (nonatomic,readonly) BOOL isRoadPedestrianNavigable; 
@property (nonatomic,readonly) int walkableSide; 
@property (nonatomic,readonly) int sidewalkSide; 
@property (nonatomic,readonly) BOOL isTunnel; 
@property (nonatomic,readonly) BOOL isBridge; 
@property (nonatomic,readonly) BOOL isRail; 
@property (nonatomic,readonly) int rampType; 
@property (nonatomic,readonly) int bikeableSide; 
@property (nonatomic,readonly) int bikeLaneSide; 
@property (nonatomic,readonly) NSString * internalRoadName; 
+(double)estimatedWidthForRoad:(SCD_Struct_GE77*)arg1 ;
-(BOOL)isBridge;
-(void)flip;
-(SCD_Struct_GE77*)feature;
-(unsigned long long)roadID;
-(BOOL)isRail;
-(BOOL)isFlipped;
-(int)bikeLaneSide;
-(id)debugDescription;
-(unsigned long long)speedLimit;
-(GEOTileKey)tileKey;
-(id)_attributes;
-(int)sidewalkSide;
-(BOOL)isTunnel;
-(int)walkableSide;
-(int)roadClass;
-(id)_containingTile;
-(unsigned long long)featureIndex;
-(int)_flippedWalkableSideFor:(int)arg1 ;
-(int)_flippedSidewalkSideFor:(int)arg1 ;
-(GEOMapFeatureJunction *)startJunction;
-(int)_flippedBikeableSideFor:(int)arg1 ;
-(int)_flippedBikeLaneSideFor:(int)arg1 ;
-(GEOMapFeatureJunction *)endJunction;
-(int)travelDirection;
-(NSString *)internalRoadName;
-(id)localizedRoadName:(out id*)arg1 ;
-(SCD_Struct_GE34*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(id)initWithFeature:(SCD_Struct_GE77*)arg1 ;
-(BOOL)speedLimitIsMPH;
-(int)formOfWay;
-(long long)laneCount;
-(double)roadWidth;
-(void)updateForDesiredRoadDirectionality:(unsigned long long)arg1 isOutboundRoad:(BOOL)arg2 ;
-(int)bikeableSide;
-(BOOL)isRoadPedestrianNavigable;
-(BOOL)isWalkable;
-(int)rampType;
-(id)_junctionB;
-(id)_junctionA;
-(BOOL)isDrivable;
-(void)dealloc;
@end

