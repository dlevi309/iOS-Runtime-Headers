/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureTransitStop, GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, NSString, NSArray;

@interface GEOMapFeatureTransitPoint : NSObject {

	GEOTransitNodeFeature* _feature;
	GEOCoarseLocationLatLng _coordinate;
	double _boundingRadius;
	SCD_Struct_GE36 _boundingRect;
	GEOCoarseLocationLatLng* _polygonPoints;
	unsigned long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) GEOTransitNodeFeature* feature; 
@property (nonatomic,readonly) GEOMapFeatureTransitStop * stop; 
@property (nonatomic,readonly) GEOMapFeatureTransitHall * hall; 
@property (nonatomic,readonly) GEOMapFeatureTransitStation * station; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;                  //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * internalSystemNames; 
@property (nonatomic,readonly) double boundingRadius;                               //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect;                        //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonPointsCount;               //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(NSString *)internalName;
-(GEOMapFeatureTransitHall *)hall;
-(GEOTransitNodeFeature*)feature;
-(GEOMapFeatureTransitStation *)station;
-(GEOCoarseLocationLatLng)coordinate;
-(GEOMapFeatureTransitStop *)stop;
-(GEOTileKey)tileKey;
-(NSArray *)internalSystemNames;
-(void)updateWithGeometryFeature:(SCD_Struct_GE244*)arg1 ;
-(id)description;
-(SCD_Struct_GE36)boundingRect;
-(id)initWithFeature:(GEOTransitNodeFeature*)arg1 ;
-(unsigned long long)transitID;
-(double)boundingRadius;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(unsigned long long)polygonPointsCount;
-(void)dealloc;
@end

