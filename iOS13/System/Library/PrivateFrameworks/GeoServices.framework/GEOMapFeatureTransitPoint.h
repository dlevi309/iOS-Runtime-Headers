/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureTransitStop, GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, NSString, NSArray;

@interface GEOMapFeatureTransitPoint : NSObject {

	GEOTransitNodeFeature* _feature;
	SCD_Struct_GE32 _coordinate;
	double _boundingRadius;
	SCD_Struct_GE40 _boundingRect;
	SCD_Struct_GE32* _polygonPoints;
	unsigned long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) GEOTransitNodeFeature* feature; 
@property (nonatomic,readonly) GEOMapFeatureTransitStop * stop; 
@property (nonatomic,readonly) GEOMapFeatureTransitHall * hall; 
@property (nonatomic,readonly) GEOMapFeatureTransitStation * station; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate;                         //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * internalSystemNames; 
@property (nonatomic,readonly) double boundingRadius;                              //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE40 boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE32* polygonPoints;                     //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonPointsCount;              //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(void)dealloc;
-(id)description;
-(SCD_Struct_GE32)coordinate;
-(GEOMapFeatureTransitStop *)stop;
-(GEOTransitNodeFeature*)feature;
-(SCD_Struct_GE40)boundingRect;
-(GEOTileKey)tileKey;
-(id)initWithFeature:(GEOTransitNodeFeature*)arg1 ;
-(unsigned long long)transitID;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE32*)polygonPoints;
-(unsigned long long)polygonPointsCount;
-(GEOMapFeatureTransitStation *)station;
-(NSArray *)internalSystemNames;
-(GEOMapFeatureTransitHall *)hall;
-(void)updateWithGeometryFeature:(SCD_Struct_GE232*)arg1 ;
@end

