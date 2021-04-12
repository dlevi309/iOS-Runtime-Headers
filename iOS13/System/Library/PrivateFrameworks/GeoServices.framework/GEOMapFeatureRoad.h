/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine {

	SCD_Struct_GE74* _feature;
	unsigned long long _roadID;
	GEOMapFeatureJunction* _junctionA;
	GEOMapFeatureJunction* _junctionB;
	BOOL _checkedJunctionA;
	BOOL _checkedJunctionB;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE74* feature; 
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
@property (nonatomic,readonly) NSString * internalRoadName; 
+(double)estimatedWidthForRoad:(SCD_Struct_GE74*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)_attributes;
-(BOOL)isFlipped;
-(SCD_Struct_GE74*)feature;
-(unsigned long long)roadID;
-(GEOTileKey)tileKey;
-(id)_containingTile;
-(unsigned long long)featureIndex;
-(id)_junctionB;
-(id)_junctionA;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(BOOL)isRoadPedestrianNavigable;
-(int)walkableSide;
-(int)_flippedWalkableSideFor:(int)arg1 ;
-(int)sidewalkSide;
-(int)_flippedSidewalkSideFor:(int)arg1 ;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(int)rampType;
-(GEOMapFeatureJunction *)startJunction;
-(GEOMapFeatureJunction *)endJunction;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(long long)laneCount;
-(double)roadWidth;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)isRail;
-(NSString *)internalRoadName;
-(void)flip;
-(id)localizedRoadName:(out id*)arg1 ;
-(SCD_Struct_GE38*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(id)initWithFeature:(SCD_Struct_GE74*)arg1 ;
-(void)updateForDesiredRoadDirectionality:(unsigned long long)arg1 isOutboundRoad:(BOOL)arg2 ;
@end

